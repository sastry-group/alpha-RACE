@echo off
REM ----------------------------------------------------------------
REM Create and configure TAP device for Container Tunnel Utility.
REM 
REM Copyright 2021, dSPACE GmbH. All rights reserved.
REM ----------------------------------------------------------------

REM set current directory
PUSHD %~dp0

ECHO [RUN] Configure.ps1 %*
call powershell.exe -ExecutionPolicy ByPass -File ".\Configure.ps1" %*
IF %ERRORLEVEL% NEQ 0 GOTO :ERROR

POPD
GOTO :END

:ERROR
ECHO [ERROR] Powershell script failed with error code %ERRORLEVEL%
POPD
exit /b %ERRORLEVEL%

:END