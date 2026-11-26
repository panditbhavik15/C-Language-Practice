@echo off
rem
rem Check every program against the input/output pair recorded in tests\cases\.
rem This is the Windows version of run-tests.sh and needs nothing but MinGW's gcc.
rem
rem Usage:
rem   run-tests.cmd            check every program
rem   run-tests.cmd --update   re-record the expected output (review with git diff)
rem
setlocal DisableDelayedExpansion
cd /d "%~dp0"

if "%CC%"=="" set "CC=gcc"
if "%CFLAGS%"=="" set "CFLAGS=-std=c11 -Wall -Wextra -O2"
if "%CASEDIR%"=="" set "CASEDIR=tests\cases"
set "WORKDIR=build\tests"
set "UPDATE=0"

:args
if "%~1"=="" goto args_done
if /i "%~1"=="--update" (
    set "UPDATE=1"
    shift
    goto args
)
if /i "%~1"=="-h" goto usage
if /i "%~1"=="--help" goto usage
echo error: unknown option %~1 1>&2
exit /b 2
:args_done

where %CC% >nul 2>nul
if errorlevel 1 (
    echo error: compiler '%CC%' was not found. Install MinGW-w64 and add its bin folder to PATH.
    exit /b 1
)

if not exist "%CASEDIR%\" (
    echo error: the %CASEDIR% directory does not exist.
    exit /b 1
)

if not exist "%WORKDIR%\" mkdir "%WORKDIR%"

set /a total=0
set /a passed=0
set /a failed=0
set /a skipped=0
set "failed_list="

for %%f in (Program*.c) do call :test_one "%%f"

echo.
if "%UPDATE%"=="1" (
    echo Recorded %passed% case^(s^) in %CASEDIR%.
    echo Review them with: git diff %CASEDIR%
    exit /b 0
)
if %total%==0 (
    echo error: no test cases ran. 1>&2
    exit /b 1
)
echo Tests : %passed% passed, %failed% failed, %skipped% skipped (no case file)
if not %failed%==0 (
    echo Failed:%failed_list%
    exit /b 1
)
echo All %total% test^(s^) passed.
exit /b 0

:test_one
set "src=%~1"
set "base=%~n1"
set "name=%base: =_%"
set "num=%base:Program =%"
set "casefile=%CASEDIR%\%num%.test"

if not exist "%casefile%" (
    echo   SKIP  %src%  ^(no %casefile%^)
    set /a skipped+=1
    exit /b
)

set /a total+=1

"%CC%" %CFLAGS% "%src%" -o "%WORKDIR%\%name%.exe" 2> "%WORKDIR%\%name%.log"
if not errorlevel 1 goto compiled
echo   FAIL  %src%  (did not compile)
call :print_log "%WORKDIR%\%name%.log"
set /a failed+=1
set "failed_list=%failed_list% %src%"
exit /b
:compiled
del "%WORKDIR%\%name%.log" 2>nul

call :split_case "%casefile%" "%WORKDIR%\%name%.in" "%WORKDIR%\%name%.expected" "%WORKDIR%\%name%.num"
if errorlevel 1 (
    echo   FAIL  %src%  ^(%casefile% has no --- input / --- output section^)
    set /a failed+=1
    set "failed_list=%failed_list% %src%"
    exit /b
)

rem Run inside build\tests so programs that create files stay out of the repo.
pushd "%WORKDIR%"
".\%name%.exe" < "%name%.in" > "%name%.actual" 2> "%name%.err"
set "status=%errorlevel%"
popd

rem An executable that cannot run must never be recorded as empty output.
if not "%status%"=="0" (
    echo   FAIL  %src%  ^(exited with status %status%^)
    call :print_log "%WORKDIR%\%name%.err"
    set /a failed+=1
    set "failed_list=%failed_list% %src%"
    exit /b
)
del "%WORKDIR%\%name%.err" 2>nul

rem Normalise: drop CR and always end with a newline, so a Windows checkout and
rem a Linux CI runner compare the same text.
findstr /n "^" "%WORKDIR%\%name%.actual" > "%WORKDIR%\%name%.num"
type nul > "%WORKDIR%\%name%.actual.txt"
for /f "usebackq tokens=1* delims=:" %%a in ("%WORKDIR%\%name%.num") do >> "%WORKDIR%\%name%.actual.txt" echo(%%b

if "%UPDATE%"=="1" (
    > "%casefile%" (
        echo(--- input
        type "%WORKDIR%\%name%.in"
        echo(--- output
        type "%WORKDIR%\%name%.actual.txt"
    )
    echo   RECORDED  %src%
    set /a passed+=1
    exit /b
)

fc /b "%WORKDIR%\%name%.expected" "%WORKDIR%\%name%.actual.txt" >nul 2>nul
if errorlevel 1 goto mismatch
echo   PASS  %src%
set /a passed+=1
exit /b

:mismatch
echo   FAIL  %src%
fc /n "%WORKDIR%\%name%.expected" "%WORKDIR%\%name%.actual.txt"
set /a failed+=1
set "failed_list=%failed_list% %src%"
exit /b

:split_case
rem %1 case file, %2 stdin file, %3 expected output file, %4 scratch file
set "cf=%~1"
set "infile=%~2"
set "outfile=%~3"
set "numfile=%~4"
set "inln="
set "outln="
for /f "tokens=1 delims=:" %%a in ('findstr /n /b /c:"--- input" "%cf%"') do set "inln=%%a"
for /f "tokens=1 delims=:" %%a in ('findstr /n /b /c:"--- output" "%cf%"') do set "outln=%%a"
if "%inln%"=="" exit /b 1
if "%outln%"=="" exit /b 1
type nul > "%infile%"
type nul > "%outfile%"
findstr /n "^" "%cf%" > "%numfile%"
for /f "usebackq tokens=1* delims=:" %%a in ("%numfile%") do if %%a GTR %inln% if %%a LSS %outln% >> "%infile%" echo(%%b
for /f "usebackq tokens=1* delims=:" %%a in ("%numfile%") do if %%a GTR %outln% >> "%outfile%" echo(%%b
del "%numfile%" 2>nul
exit /b 0

:print_log
if not exist "%~1" exit /b
for /f "usebackq delims=" %%l in ("%~1") do echo(          %%l
exit /b

:usage
echo.
echo Check every program against the input/output pair recorded in tests\cases\.
echo.
echo   run-tests.cmd            check every program
echo   run-tests.cmd --update   re-record the expected output ^(review with git diff^)
echo.
exit /b 0
