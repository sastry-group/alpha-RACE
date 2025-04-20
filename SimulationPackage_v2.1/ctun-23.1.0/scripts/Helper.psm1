########################################################################
# Powershell helper module for logging and executing processes.
#
# Copyright 2020, dSPACE GmbH. All rights reserved.
########################################################################

function LogDebug([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n       ")
    Write-Host "[DEBUG] $output" -ForegroundColor Magenta
}

function LogInfo([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n       ")
    Write-Host "[INFO] $output"
}

function LogRun([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n       ")
    Write-Host "[RUN] $output" -ForegroundColor Magenta
}

function LogError([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n       ")
    Write-Host "[ERROR] $output" -ForegroundColor Red
}

function LogWarn([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n       ")
    Write-Host "[WARN] $output" -ForegroundColor Yellow
}

function LogErr([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n             ")
    Write-Host "    (stderr) $output"
}
function LogOut([String] $Text) {
    $output = $Text.Trim("`n`r").Replace("`n", "`n             ")
    Write-Host "    (stdout) $output"
}

function MkDir([String] $Path) {
    if (-Not (Test-Path $Path -PathType Container)) {
        LogInfo "Create directory $Path"
        New-Item -ItemType directory -Path $Path | Out-Null
    }
}

function Run() {
    param(
        [parameter(Mandatory = $true)][String]$File,
        [String]$Arguments,
        [String]$WorkingDirectory,
        [Int32]$TimeoutInSeconds = 300,
        [Switch]$Quiet = $false,
        [int[]]$AllowedExitCodes = @(0)
    )

    $processInfo = new-object System.Diagnostics.ProcessStartInfo($File)
    $processInfo.Arguments = $Arguments.Replace("`n", " ").Replace("`r", "")
    $processInfo.UseShellExecute = $false
    $processInfo.WorkingDirectory = $WorkingDirectory
    $processInfo.RedirectStandardOutput = $true
    $processInfo.RedirectStandardError = $true
    $processInfo.RedirectStandardInput = $false
    $processInfo.CreateNoWindow = $true

    if (-Not($Quiet.IsPresent)) {
        LogRun "$File $Arguments"
    }
    $process = [System.Diagnostics.Process]::Start($processInfo)
    return GetProcessResult -Quiet:$Quiet -Process $process -TimeoutInSeconds $TimeoutInSeconds -AllowedExitCodes $AllowedExitCodes
}

function GetProcessResult([System.Diagnostics.Process]$Process, [Int32]$TimeoutInSeconds = 300, [Switch]$Quiet = $false, [int[]]$AllowedExitCodes = @(0)) {

    if ($null -eq $Process) {
        return $null
    }

    $stdOutBuilder = New-Object -TypeName System.Text.StringBuilder
    $stdErrBuilder = New-Object -TypeName System.Text.StringBuilder
    $receivedEventHandler = {
        if (-Not ([String]::IsNullOrEmpty($EventArgs.Data))) {
            $Event.MessageData.AppendLine($EventArgs.Data)
        }
    }
    $stdOutEvent = Register-ObjectEvent -InputObject $Process -Action $receivedEventHandler -EventName 'OutputDataReceived' -MessageData $stdOutBuilder
    $stdErrEvent = Register-ObjectEvent -InputObject $Process -Action $receivedEventHandler -EventName 'ErrorDataReceived' -MessageData $stdErrBuilder
    $Process.BeginOutputReadLine()
    $Process.BeginErrorReadLine()

    $timeout = $false
    if ($TimeoutInSeconds -ge 0 -And (-Not $Process.HasExited)) {
        $Process.WaitForExit(1000 * $TimeoutInSeconds) | Out-Null

        if ($Process.HasExited -Eq $false) {
            try {
                LogWarn "Timeout: Kill process: $($Process.StartInfo.FileName)"
                if (IsWindows) {
                    Start-Process -FilePath "$env:WINDIR\system32\taskkill.exe" -ArgumentList "/F /T /PID $($process.Id)"
                }
                else {
                    $Process.Kill($true) | Out-Null
                }
            }
            catch {
                LogWarn "Could not stop the process: $($_.Exception.ToString())"
            }
            $timeout = $true
        }
    }
    $Process.WaitForExit() | Out-Null
    Unregister-Event -SourceIdentifier $stdOutEvent.Name
    Unregister-Event -SourceIdentifier $stdErrEvent.Name

    $stdout = $stdOutBuilder.ToString()
    if (-Not([string]::IsNullOrEmpty($stdout)) -And -Not($Quiet.IsPresent)) {
        LogOut $stdout.Trim("`n`r ")
    }
    $stderr = $stdErrBuilder.ToString()
    if (-Not([string]::IsNullOrEmpty($stderr)) -And -Not($Quiet.IsPresent)) {
        LogErr $stderr.Trim("`n`r ")
    }
    if ($AllowedExitCodes -NotContains $Process.ExitCode -Or $timeout) {
        if (-Not($Quiet.IsPresent)) {
            LogWarn "Could not execute the last command. (Exit Code: $($Process.ExitCode))"
        }
        return $null
    }

    if ([string]::IsNullOrEmpty($stdout)) {
        return $stderr
    }
    return "$($stdout)`n$($stderr)"
}

function IsLinux() {
    return $IsLinux
}
function IsWindows () {
    # "return $IsWindows" requires powershell version >= 6.0
    return -Not($IsLinux)
}