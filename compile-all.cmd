@echo off
setlocal enabledelayedexpansion

rem Compile every Program*.c file into .\build   (Windows / MinGW-w64)
rem
rem Usage:
rem   compile-all.cmd
rem   set CC=clang ^&^& compile-all.cmd
rem
rem Override the flags with:  set CFLAGS=-std=c11 -Wall -Wextra -Werror

if "%CC%"=="" set "CC=gcc"
if "%CFLAGS%"=="" set "CFLAGS=-std=c11 -Wall -Wextra -O2"

where %CC% >nul 2>nul
if errorlevel 1 (
    echo error: compiler '%CC%' was not found. Install MinGW-w64 and add its bin folder to PATH.
    exit /b 1
)

if not exist build mkdir build

echo Compiler : %CC%
echo Flags    : %CFLAGS%
echo.

set /a total=0
set /a failed=0

for %%f in (Program*.c) do (
    set /a total+=1
    set "name=%%~nf"
    set "name=!name: =_!"
    %CC% %CFLAGS% "%%f" -o "build\!name!.exe" 2>"build\!name!.log"
    if errorlevel 1 (
        set /a failed+=1
        echo   FAIL  %%f
        type "build\!name!.log" 2>nul
    ) else (
        del "build\!name!.log" 2>nul
        echo   OK    %%f
    )
)

echo.
if %total%==0 (
    echo No Program*.c files found.
    exit /b 1
)
if not %failed%==0 (
    echo %failed% of %total% program^(s^) failed to compile.
    exit /b 1
)
echo All %total% program^(s^) compiled successfully into .\build
exit /b 0
