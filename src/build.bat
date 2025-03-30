@echo off
setlocal enabledelayedexpansion

:: Define the compiler and flags
set CC=cl
set CFLAGS=/Zi /EHsc /DEBUG

:: Initialize the source files variable
set SRCS=

:: Compile all .c files into object files
for %%f in (*.c) do (
    %CC% %CFLAGS% /c %%f
)

:: Link all object files into main.exe
%CC% %CFLAGS% /Fe:main.exe *.obj


endlocal