@echo off
setlocal enabledelayedexpansion

:: Define the compiler and flags
set CC=cl
set CFLAGS=/Zi /EHsc /DEBUG

:: Initialize the source files variable
set SRCS=

:: Loop through all .c files in the current directory
for %%f in (*.c) do (
    set SRCS=!SRCS! %%f
)

:: Compile the source files
%CC% %CFLAGS% %SRCS%

endlocal