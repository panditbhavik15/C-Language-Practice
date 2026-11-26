#!/usr/bin/env bash
#
# Compile every Program*.c file in this repository.
#
# Usage:
#   bash compile-all.sh           # build everything into ./build
#   CC=clang bash compile-all.sh  # use a different compiler
#
set -uo pipefail

CC="${CC:-gcc}"
CFLAGS="${CFLAGS:--std=c11 -Wall -Wextra -O2}"
OUTDIR="build"

if ! command -v "$CC" >/dev/null 2>&1; then
    echo "error: compiler '$CC' was not found. Install GCC (or MinGW on Windows) and try again." >&2
    exit 1
fi

mkdir -p "$OUTDIR"

echo "Compiler : $($CC --version | head -n 1)"
echo "Flags    : $CFLAGS"
echo

total=0
failed=0

for src in Program*.c; do
    # Guard against the glob matching nothing.
    [ -e "$src" ] || continue

    total=$((total + 1))
    name="$(basename "$src" .c)"
    out="$OUTDIR/${name// /_}"

    if "$CC" $CFLAGS "$src" -o "$out" 2>"$out.log"; then
        rm -f "$out.log"
        printf '  OK    %s\n' "$src"
    else
        failed=$((failed + 1))
        printf '  FAIL  %s\n' "$src"
        sed 's/^/          /' "$out.log"
    fi
done

echo
if [ "$total" -eq 0 ]; then
    echo "No Program*.c files found."
    exit 1
fi

if [ "$failed" -ne 0 ]; then
    echo "$failed of $total program(s) failed to compile."
    exit 1
fi

echo "All $total program(s) compiled successfully into ./$OUTDIR"
