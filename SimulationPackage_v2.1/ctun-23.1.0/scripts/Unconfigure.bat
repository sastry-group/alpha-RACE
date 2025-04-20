@echo off
REM ----------------------------------------------------------------
REM Powershell scripts to delete tap device(s) of Container Tunnel
REM Utility
REM
REM Copyright 2021, dSPACE GmbH. All rights reserved.
REM ----------------------------------------------------------------

REM set current directory
PUSHD %~dp0

ECHO [RUN] Unconfigure.ps1 %*
call powershell.exe -ExecutionPolicy ByPass -File ".\Unconfigure.ps1" %*
IF %ERRORLEVEL% NEQ 0 GOTO :ERROR

POPD
GOTO :END

:ERROR
ECHO [ERROR] Powershell script failed with error code %ERRORLEVEL%
POPD
exit /b %ERRORLEVEL%

:END