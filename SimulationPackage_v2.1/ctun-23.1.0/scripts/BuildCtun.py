#!/usr/bin/env python3

########################################################################
# Build Container Tunnel Utility Docker images
# Copyright 2023, dSPACE GmbH. All rights reserved.
########################################################################

"""Module that builds Container Tunnel Utility Docker images"""

import argparse
import textwrap
from sys import argv
import Utilities

# OPTIONAL ARGUMENTS
UBUNTU_ARCHIVE_SERVER_ARG = "--ubuntuArchiveServer"
UBUNTU_SECURITY_SERVER_ARG = "--ubuntuSecurityServer"
DOCKER_REPOSITORY_ARG = "--dockerRepository"

def GetInstallDir():
    """Get installation directory for Docker build process"""
    return Utilities.GetModuleDirectory() + "/.."


def DefineCommandLineArguments(parser):
    """Define script arguments"""
    parser.add_argument(Utilities.ACCEPT_DSPACE_EULA_ARG,
                        help = textwrap.shorten("mandatory parameter which you must set to \
                                                confirm that you accepts the dSPACE EULA",
                                                width = 90))
    parser.add_argument(UBUNTU_ARCHIVE_SERVER_ARG,
                        help = "the IP or hostname of the internal Ubuntu archive server")
    parser.add_argument(UBUNTU_SECURITY_SERVER_ARG,
                        help = "the IP or hostname of the internal Ubuntu security server")
    parser.add_argument(DOCKER_REPOSITORY_ARG,
                        help = "the IP or hostname of the internal Docker repository")


def CreateStandaloneBuildCommand(args, dockerfile, dockerImageName, installDir):
    """Concatenate command that will be used to call a new process"""
    commandString = "docker build -f " + dockerfile + " --build-arg DS_ACCEPT_EULA=yes"
    if args.dockerRepository:
        commandString += " --build-arg DOCKER_REPOSITORY=" + args.dockerRepository
    if args.ubuntuArchiveServer:
        commandString += " --add-host archive.ubuntu.com:" + args.ubuntuArchiveServer
    if args.ubuntuSecurityServer:
        commandString += " --add-host security.ubuntu.com:" + args.ubuntuSecurityServer
    commandString += " -t " + dockerImageName + " " + installDir
    return commandString


def BuildStandaloneCtunDockerImages(args, versions):
    """Build stand-alone CTun Docker images"""
    ctunVersion = versions[Utilities.KEY_CTUN_VERSION]
    installDir = GetInstallDir()

    dockerfile = installDir + "/docker/Dockerfile.separate-server"
    dockerImage = "dspace/ctun/separate-server:" + ctunVersion
    command = CreateStandaloneBuildCommand(args, dockerfile, dockerImage, installDir)
    Utilities.RunForegroundProcess(command)

    dockerfile = installDir + "/docker/Dockerfile.separate-client"
    dockerImage = "dspace/ctun/separate-client:" + ctunVersion
    command = CreateStandaloneBuildCommand(args, dockerfile, dockerImage, installDir)
    Utilities.RunForegroundProcess(command)

    dockerfile = installDir + "/docker/Dockerfile.local-server"
    dockerImage = "dspace/ctun/local-server:" + ctunVersion
    command = CreateStandaloneBuildCommand(args, dockerfile, dockerImage, installDir)
    Utilities.RunForegroundProcess(command)

    dockerfile = installDir + "/docker/Dockerfile.local-client"
    dockerImage = "dspace/ctun/local-client:" + ctunVersion
    command = CreateStandaloneBuildCommand(args, dockerfile, dockerImage, installDir)
    Utilities.RunForegroundProcess(command)
    Utilities.LogInfo("Built CTun stand-alone images")


def Main():
    """Entry point of the script that builds CTun Docker images"""
    parser = argparse.ArgumentParser(
             description = "Build Container Tunnel Utility Docker images." + "\n" +
                           textwrap.shorten("It is possible to build stand-alone CTun Docker \
                                            images or to install CTun in an existing VEOS \
                                            Docker image.", width = 120),
                           formatter_class = argparse.RawTextHelpFormatter)
    DefineCommandLineArguments(parser)
    args = parser.parse_args()
    Utilities.VerifyThatEulaIsAccepted(args, parser)

    Utilities.LogStarting(str(argv))
    versions = Utilities.GetVersionsFromMetadataFile()
    BuildStandaloneCtunDockerImages(args, versions)
    Utilities.LogEnding(parser.prog)


if __name__ == "__main__":
    Main()
