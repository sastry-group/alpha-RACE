#!/usr/bin/env python3

########################################################################
# Helper module used in scripts that build and run dSPACE Docker images
# Copyright 2023, dSPACE GmbH. All rights reserved.
########################################################################

"""Helper module used in scripts that build and run dSPACE Docker images"""

from os import system
from os.path import dirname, abspath
from subprocess import run, Popen, check_output

system("")  # enable ANSI escape characters in Windows terminal

# COLORS
RED_COLOR = '\033[31m'
GREEN_COLOR = '\033[32m'
YELLOW_COLOR = '\033[33m'
BLUE_COLOR = '\033[34m'
PURPLE_COLOR = '\033[35m'
RESET_COLOR = '\033[m'

# MESSAGES
MSG_EULA_NOT_ACCEPTED = "dSPACE EULA has not been accepted"
MSG_GET_CTUN_VERSION_FAILED = "Could not get CTun version from metadata file"
MSG_GET_VEOS_VERSION_FAILED = "Could not get VEOS version from metadata file"
MSG_GET_DSPACE_RELEASE_YEAR_FAILED = "Could not get dSPACE release year from metadata file"
MSG_GET_DSPACE_RELEASE_LETTER_FAILED = "Could not get dSPACE release letter from metadata file"
MSG_UNSUPPORTED_OS = "Operating system is unsupported: "
MSG_VEOS_INSTALLATION_FILE_NOT_FOUND = "VEOS installation file is not found at: "
MSG_MICROSOFT_KEY_FILE_NOT_FOUND = "Microsoft key file is not found at: "
MSG_PYTHON_PACKAGE_NOT_FOUND = "Python package expected but not found at: "
MSG_VEOS_SERVER_BUILD_FAILED = "VEOS server Docker image build failed: "
MSG_PIP_SERVER_BUILD_FAILED = "Pip server Docker image build failed: "

# MANDATORY ARGUMENTS
ACCEPT_DSPACE_EULA_ARG = "acceptDspaceEula"

# KEYS
KEY_CTUN_VERSION = "CTUN_VERSION"
KEY_VEOS_VERSION = "VEOS_VERSION"
KEY_DSPACE_RELEASE_YEAR = "DSPACE_RELEASE_YEAR"
KEY_DSPACE_RELEASE_LETTER = "DSPACE_RELEASE_LETTER"


def LogStarting(text):
    """Log level starting"""
    print(PURPLE_COLOR + "Starting " + text, RESET_COLOR)


def LogEnding(text):
    """Log level ending"""
    print(PURPLE_COLOR + "Ending " + text, RESET_COLOR)


def LogInfo(text):
    """Log level info"""
    print(text)


def LogRun(text):
    """Log level run"""
    print(GREEN_COLOR + text, RESET_COLOR)


def LogWarn(text):
    """Log level warn"""
    print(YELLOW_COLOR + text, RESET_COLOR)


def LogError(text):
    """Log level error"""
    print(RED_COLOR + text, RESET_COLOR)


def GetModuleDirectory():
    """Get absolute path to Python module that called this function"""
    return dirname(abspath(__file__))


def MakeOptionalArgument(argument):
    """Prepends double dash to an argument to create an optional argument for argparse"""
    return "--" + argument


def VerifyThatEulaIsAccepted(args, parser):
    """Verify that dSPACE EULA was accepted"""
    if not args.acceptDspaceEula == ACCEPT_DSPACE_EULA_ARG:
        LogError(MSG_EULA_NOT_ACCEPTED)
        parser.print_help()
        raise ValueError(MSG_EULA_NOT_ACCEPTED)


def VerifyThatAllVersionsAreDefined(metadataValues):
    """Verify that metadata file contains all the needed versions"""
    if not metadataValues[KEY_CTUN_VERSION]:
        LogError(MSG_GET_CTUN_VERSION_FAILED)
        raise ValueError(MSG_GET_CTUN_VERSION_FAILED)
    if not metadataValues[KEY_VEOS_VERSION]:
        LogError(MSG_GET_VEOS_VERSION_FAILED)
        raise ValueError(MSG_GET_VEOS_VERSION_FAILED)
    if not metadataValues[KEY_DSPACE_RELEASE_YEAR]:
        LogError(MSG_GET_DSPACE_RELEASE_YEAR_FAILED)
        raise ValueError(MSG_GET_DSPACE_RELEASE_YEAR_FAILED)
    if not metadataValues[KEY_DSPACE_RELEASE_LETTER]:
        LogError(MSG_GET_DSPACE_RELEASE_LETTER_FAILED)
        raise ValueError(MSG_GET_DSPACE_RELEASE_LETTER_FAILED)


def GetVersionsFromMetadataFile():
    """Get versions from metadata file"""
    metadataValues = {}
    metadataFilePath = GetModuleDirectory() + '/' + "metadata.ini"
    with open(metadataFilePath, encoding="utf-8") as metadataFile:
        for line in metadataFile:
            strippedLine = line.rstrip('\n')
            equalSignIndex = strippedLine.find("=")
            key = strippedLine[0:equalSignIndex]
            value = strippedLine[equalSignIndex + 1:]
            metadataValues[key] = value
    VerifyThatAllVersionsAreDefined(metadataValues)
    return metadataValues


def RunForegroundProcess(commandString):
    """Run new process in foreground"""
    LogRun(commandString)
    argumentList = commandString.split(' ')
    run(argumentList, check = True)


def RunForegroundProcessCaptured(commandString):
    """Run new process in foreground and capture stdout"""
    LogRun(commandString)
    argumentList = commandString.split(' ')
    return check_output(argumentList, encoding = 'utf-8').rstrip('\n')


def RunBackgroundProcess(commandString):
    """Run new process in background"""
    LogRun(commandString)
    argumentList = commandString.split(' ')
    # pylint: disable=consider-using-with
    # using "with" below would execute the command in the foreground and that is not wanted here
    Popen(argumentList)
