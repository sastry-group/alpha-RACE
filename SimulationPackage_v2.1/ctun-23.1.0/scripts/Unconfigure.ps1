#!/usr/bin/env pwsh
########################################################################
# Delete all TAP devices created for the Container Tunnel Utility.
#
# Copyright 2020, dSPACE GmbH. All rights reserved.
########################################################################
using module ./Helper.psm1
Param(
    [switch] $NonInteractive = $false,
    [Switch] $Help = $false
)
$ErrorActionPreference = "Stop"

function PrintUsage() {
    Write-Host "usage: Unconfigure.ps1 [-NonInteractive]"
    Write-Host "       Unconfigure.ps1 -Help"
    Write-Host ""
    Write-Host "Delete all TAP devices created for the Container Tunnel Utility."
    Write-Host ""
    Write-Host "  -NonInteractive - Do not wait for user input."
    Write-Host "  -Help           - Show this help information."
}

function ExitAfterError([string]$Message, [switch]$NonInteractive) {
    LogError $Message
    if (-Not $NonInteractive.IsPresent) {
        Write-Host "Press any key to exit..." -ForegroundColor Red
        $null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
    }
    exit -1
}

if (-Not(IsWindows)) {
    ExitAfterError -NonInteractive:$NonInteractive.IsPresent -Message "This script is for Windows only."
}

if ($Help.IsPresent) {
    PrintUsage;
    exit 0;
}

if ($Help.IsPresent) {
    PrintUsage;
    if (-Not $NonInteractive.IsPresent) {
        Write-Host "Press any key to exit..." -ForegroundColor Yellow
        $null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
    }
    exit 0;
}

if (-Not $NonInteractive.IsPresent) {
    Write-Host -NoNewline "Remove all dSPACE TAP device(s)? (y/N) " -ForegroundColor Yellow
    $readHost = Read-Host
    if ($readHost.ToLower() -ne "y") {
        ExitAfterError -Message "Do not remove the dSPACE TAP device. Aborting the script..."
    }

    # Check if process has admin permissions
    $currentId = [System.Security.Principal.WindowsIdentity]::GetCurrent()
    $currentPrincipal = new-object System.Security.Principal.WindowsPrincipal($currentId)
    if (-Not $currentPrincipal.IsInRole([System.Security.Principal.WindowsBuiltInRole]::Administrator)) {
        ExitAfterError -Message "You do not have sufficient privileges to perform this operation. Restart as admin."
    }
}

$result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "find dstap0901"
if ($result -Like "*No matching devices found*") {
    ExitAfterError -NonInteractive:$NonInteractive.IsPresent -Message "Could not find a TAP device. Aborting the script..."
}

$result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "remove dstap0901"

LogInfo "DONE"
if (-Not $NonInteractive.IsPresent) {
    Write-Host "Press any key to exit..." -ForegroundColor Yellow
    $null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
}