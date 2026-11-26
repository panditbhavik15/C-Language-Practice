#!/usr/bin/env bash
#
# Check every program against the input/output pair recorded in tests/cases/.
#
# Usage:
#   bash run-tests.sh            check every program
#   bash run-tests.sh --update   re-record the expected output (review with git diff)
#
set -uo pipefail

CC="${CC:-gcc}"
CFLAGS="${CFLAGS:--std=c11 -Wall -Wextra -O2}"
CASEDIR="${CASEDIR:-tests/cases}"
WORKDIR="build/tests"
UPDATE=0

for arg in "$@"; do
    case "$arg" in
        --update) UPDATE=1 ;;
        -h|--help) sed -n '3,8p' "$0"; exit 0 ;;
        *) printf 'error: unknown option %s\n' "$arg" >&2; exit 2 ;;
    esac
done

if ! command -v "$CC" >/dev/null 2>&1; then
    printf "error: compiler '%s' was not found. Install GCC (or MinGW on Windows) and try again.\n" "$CC" >&2
    exit 1
fi

if [ ! -d "$CASEDIR" ]; then
    printf 'error: the %s directory does not exist.\n' "$CASEDIR" >&2
    exit 1
fi

mkdir -p "$WORKDIR"

# MinGW/Git Bash and Cygwin append .exe to the compiled file.
EXEEXT=""
case "$(uname -s)" in
    *MINGW*|*MSYS*|*CYGWIN*) EXEEXT=".exe" ;;
esac

# A program that keeps waiting for input must never hang the build.
TIMEOUT=""
if command -v timeout >/dev/null 2>&1; then
    TIMEOUT="timeout 10"
fi

# Strip CR so a Windows checkout and a Linux runner compare the same text, and
# always end the last line with a newline so awk-recorded files round-trip.
normalize()
{
    tr -d '\r' < "$1" | awk '{ print }'
}

# Split a case file into the stdin file ($2) and the expected output file ($3).
split_case()
{
    : > "$2"
    : > "$3"
    awk -v inp="$2" -v outp="$3" '
        /^--- input/  { section = "in";  next }
        /^--- output/ { section = "out"; next }
        section == "in"  { print > inp }
        section == "out" { print > outp }
    ' "$1"
}

total=0
passed=0
failed=0
skipped=0
failed_list=""

for src in Program*.c; do
    [ -e "$src" ] || continue

    base="$(basename "$src" .c)"
    name="${base// /_}"
    casefile="$CASEDIR/${base#Program }.test"

    if [ ! -f "$casefile" ]; then
        printf '  SKIP  %s  (no %s)\n' "$src" "$casefile"
        skipped=$((skipped + 1))
        continue
    fi

    total=$((total + 1))

    if ! "$CC" $CFLAGS "$src" -o "$WORKDIR/$name$EXEEXT" 2> "$WORKDIR/$name.log"; then
        printf '  FAIL  %s  (did not compile)\n' "$src"
        sed 's/^/          /' "$WORKDIR/$name.log"
        failed=$((failed + 1))
        failed_list="$failed_list $src"
        continue
    fi
    rm -f "$WORKDIR/$name.log"

    split_case "$casefile" "$WORKDIR/$name.in" "$WORKDIR/$name.expected"

    # Run inside build/tests so programs that create files stay out of the repo.
    ( cd "$WORKDIR" && $TIMEOUT "./$name$EXEEXT" < "$name.in" > "$name.actual" 2> "$name.err" )
    status=$?

    # An executable that cannot run must never be recorded as empty output.
    if [ "$status" -ne 0 ]; then
        printf '  FAIL  %s  (exited with status %d)\n' "$src" "$status"
        sed 's/^/          /' "$WORKDIR/$name.err" 2>/dev/null
        failed=$((failed + 1))
        failed_list="$failed_list $src"
        continue
    fi
    rm -f "$WORKDIR/$name.err"

    normalize "$WORKDIR/$name.actual" > "$WORKDIR/$name.actual.txt"

    if [ "$UPDATE" -eq 1 ]; then
        {
            printf -- '--- input\n'
            cat "$WORKDIR/$name.in"
            printf -- '--- output\n'
            cat "$WORKDIR/$name.actual.txt"
        } > "$casefile"
        printf '  RECORDED  %s\n' "$src"
        passed=$((passed + 1))
        continue
    fi

    normalize "$WORKDIR/$name.expected" > "$WORKDIR/$name.expected.txt"

    if diff -u --label "expected ($casefile)" --label "actual ($src)" "$WORKDIR/$name.expected.txt" "$WORKDIR/$name.actual.txt" > "$WORKDIR/$name.diff"; then
        printf '  PASS  %s\n' "$src"
        passed=$((passed + 1))
    else
        printf '  FAIL  %s\n' "$src"
        sed 's/^/          /' "$WORKDIR/$name.diff"
        failed=$((failed + 1))
        failed_list="$failed_list $src"
    fi
    rm -f "$WORKDIR/$name.diff"
done

printf '\n'

if [ "$UPDATE" -eq 1 ]; then
    printf 'Recorded %d case(s) in %s.\n' "$passed" "$CASEDIR"
    printf 'Review them with: git diff %s\n' "$CASEDIR"
    exit 0
fi

if [ "$total" -eq 0 ]; then
    printf 'error: no test cases ran.\n' >&2
    exit 1
fi

printf 'Tests : %d passed, %d failed, %d skipped (no case file)\n' "$passed" "$failed" "$skipped"

if [ "$failed" -ne 0 ]; then
    printf 'Failed:%s\n' "$failed_list"
    exit 1
fi

printf 'All %d test(s) passed.\n' "$total"
exit 0
