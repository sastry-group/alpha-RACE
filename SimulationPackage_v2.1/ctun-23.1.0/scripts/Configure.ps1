#!/usr/bin/env pwsh
########################################################################
# Create and configure a TAP device for the Container Tunnel Utility.
#
# Copyright 2020, dSPACE GmbH. All rights reserved.
########################################################################
using module ./Helper.psm1
Param(
    [String] $Ip,
    [switch] $NonInteractive = $false,
    [switch] $FixDockerDesktopVm = $false,
    [String] $AdapterName = "dstap0",
    [Switch] $Help = $false
)
$ErrorActionPreference = "Stop"

function PrintUsage() {
    Write-Host "usage: Configure.ps1 [-Ip IP_ADDRESS [-AdapterName ADAPTER_NAME]] [-FixDockerDesktopVm] [-NonInteractive]"
    Write-Host "       Configure.ps1 -Help"
    Write-Host ""
    Write-Host "Create and configure TAP device for Container Tunnel Utility."
    Write-Host ""
    Write-Host "  -Ip IP_ADDRESS            - Static IP address of the TAP device"
    Write-Host "                              e.g.: `"192.168.200.100`")"
    Write-Host "  -AdapterName ADAPTER_NAME - Name of the TAP device"
    Write-Host "                              (default: `"dstap0`")"
    Write-Host "  -FixDockerDesktopVm       - Fix the known 'LinuxKit' issue 3432 that is already fixed the upstream"
    Write-Host "                              'alpine Linux' by commit f22963eb but is not yet fixed in 'LinuxKit'"
    Write-Host "                              or 'DockerDesktop'. If this is not fixed, local CTun server deployment will"
    Write-Host "                              fail in DockerDesktop with a Hyper-V back end."
    Write-Host "                              See also:"
    Write-Host "                              - https://github.com/linuxkit/linuxkit/issues/3432"
    Write-Host "                              - https://gitlab.alpinelinux.org/alpine/aports/-/commit/f22963eb8177ad5e3ebcb6de94c9dcf93dd382a4"
    Write-Host "  -NonInteractive           - Do not wait for user input."
    Write-Host "  -Help                     - Show this help information."
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

if ($FixDockerDesktopVm.IsPresent) {
    if (-Not $NonInteractive.IsPresent) {
        Write-Host -NoNewline "Do you want to fix the permission issue (https://github.com/linuxkit/linuxkit/issues/3432) in Hyper-V DockerDesktopVm?  (y/N) " -ForegroundColor Yellow
        $readHost = Read-Host
        if ($readHost.ToLower() -ne "y") {
            ExitAfterError -Message "Do not install TAP device. Aborting the script..."
        }
    }

    LogRun "docker run --privileged --rm -it -v /:/host ubuntu:20.04 chmod 666 /host/dev/net/tun"
    & docker run --privileged --rm -it -v /:/host ubuntu:20.04 chmod 666 /host/dev/net/tun

    if ([string]::IsNullOrEmpty($Ip)) {
        exit 0
    }
}

if ([string]::IsNullOrEmpty($Ip)) {
    PrintUsage;
    ExitAfterError -NonInteractive:$NonInteractive.IsPresent -Message "Arguments are missing. Aborting the script..."
}

if (-Not $NonInteractive.IsPresent) {
    Write-Host -NoNewline "Do you want to install the TAP device (virtual Network Interface Controler (NIC))? (y/N) " -ForegroundColor Yellow
    $readHost = Read-Host
    if ($readHost.ToLower() -ne "y") {
        ExitAfterError -Message "Do not install the TAP device. Aborting the script..."
    }
}

# Check if process has admin permissions
$currentId = [System.Security.Principal.WindowsIdentity]::GetCurrent()
$currentPrincipal = new-object System.Security.Principal.WindowsPrincipal($currentId)
if (-Not $currentPrincipal.IsInRole([System.Security.Principal.WindowsBuiltInRole]::Administrator)) {
    ExitAfterError -Message "You do not have sufficient privileges to perform this operation. Restart as admin."
}

$result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "find dstap0901"
if ($result -NotLike "*No matching devices found*") {
    LogWarn "The TAP device is already installed. Skip creating a new one..."
}
else {
    $result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "find tap0901"
    [System.Collections.ArrayList]$existingDevices = @()
    foreach ($line in ($result).Split("`n")) {
        $path = ($line).Split(" ")[0]
        if ($path -Like "ROOT\NET\*") {
            $existingDevices.Add($path) | Out-Null
        }
    }

    $result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "install `"../driver/OemVista.inf`" tap0901" -WorkingDirectory "$PSScriptRoot"
    if ($result -NotLike "*Drivers installed successfully*" ) {
        ExitAfterError -NonInteractive:$NonInteractive.IsPresent -Message "Could not install the TAP device driver. (Run as Admin?)"
    }

    $result = Run -File "$PSScriptRoot/../bin/devcon.exe" -Arguments "find tap0901"
    $devicePath = ""
    foreach ($line in ($result).Split("`n")) {
        $path = ($line).Split(" ")[0]
        if ($path -Like "ROOT\NET\*" -And $existingDevices -NotContains $path) {
            $devicePath = $path
            LogDebug "Device path = $devicePath"
            break
        }
    }
    if ($null -Eq $devicePath) {
        ExitAfterError -NonInteractive:$NonInteractive.IsPresent -Message "Could not identify the new TAP device."
    }

    $hardwareId = "dstap0901"
    LogInfo "Set HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath\HardwareId = $hardwareId"
    Set-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name "HardwareId" -Value $hardwareId
    $hardwareId = (Get-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name HardwareId).HardwareId
    LogDebug "HardwareId = $hardwareId"

    $friendlyName = "dSPACE TAP-Windows Adapter (ctun)"
    LogInfo "Set HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath\FriendlyName = $friendlyName"
    Set-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name "FriendlyName" -Value $friendlyName
    $friendlyName = (Get-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name FriendlyName).FriendlyName
    LogDebug "FriendlyName = $friendlyName"

    $classGuid = (Get-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name ClassGUID).ClassGUID
    LogDebug "ClassGUID = $classGuid"

    $driver = (Get-ItemProperty -Path "HKLM:SYSTEM\CurrentControlSet\Enum\$devicePath" -Name Driver).Driver
    LogDebug "Driver = $driver"

    LogDebug "Rename adapter $AdapterName..."
    $adapters = Get-NetAdapter
    foreach ($adapter in $adapters) {
        if ($adapter.InterfaceDescription -Eq $friendlyName) {
            $adapter | Rename-NetAdapter -NewName $AdapterName
            break
        }
    }

    LogDebug "Disable DHPC."
    $adapters = Get-NetAdapter
    foreach ($adapter in $adapters) {
        if ($adapter.Name -Eq $AdapterName) {
            $adapter | Set-NetIPInterface -Dhcp Disabled -PolicyStore "PersistentStore"
            break
        }
    }
}

LogRun "netsh interface ipv4 set address `"$AdapterName`" static $Ip 255.255.255.0"
& netsh interface ipv4 set address `"$AdapterName`" static "$Ip" 255.255.255.0

Start-Sleep -Second 1
LogInfo "Summary:"
$adapters = Get-NetAdapter
foreach ($adapter in $adapters) {
    if ($adapter.Name -Eq $AdapterName) {
        $adapter | Format-List
    }
}

LogDebug "Done"
if (-Not $NonInteractive.IsPresent) {
    Write-Host "Press any key to exit..." -ForegroundColor Yellow
    $null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
}
