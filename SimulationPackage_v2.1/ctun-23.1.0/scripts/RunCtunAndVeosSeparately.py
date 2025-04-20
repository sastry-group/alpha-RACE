#!/usr/bin/env python3

########################################################################
# Run the Container Tunnel Utility and VEOS in separate Docker containers
# Copyright 2023, dSPACE GmbH. All rights reserved.
########################################################################


"""Module that runs the Container Tunnel Utility and VEOS in separate Docker containers"""

import argparse
from sys import argv
import Utilities

# MANDATORY ARGUMENTS
CTUN_DOCKER_IMAGE_ARG = "ctunDockerImage"
VEOS_DOCKER_IMAGE_ARG = "veosDockerImage"
LICENSE_SERVER_ARG = "licenseServer"

# OPTIONAL ARGUMENTS
CTUN_DOCKER_CONTAINER_ARG = "--ctunDockerContainer"
VEOS_DOCKER_CONTAINER_ARG = "--veosDockerContainer"
SHM_SIZE_ARG = "--shmSize"

# CONSTANTS
DEFAULT_SHARED_MEMORY_SIZE = "256m"

def DefineCommandLineArguments(parser):
    """Define script arguments"""
    versions = Utilities.GetVersionsFromMetadataFile()
    ctunVersion = versions[Utilities.KEY_CTUN_VERSION]
    parser.add_argument(VEOS_DOCKER_IMAGE_ARG, help = "VEOS Docker image")
    parser.add_argument(LICENSE_SERVER_ARG,
                        help = "IP or hostname of the CodeMeter license server")
    parser.add_argument(Utilities.MakeOptionalArgument(CTUN_DOCKER_IMAGE_ARG),
                        default = "dspace/ctun/separate-server:" + ctunVersion,
                        help = "CTun separate server Docker image, (default: %(default)s)")
    parser.add_argument(CTUN_DOCKER_CONTAINER_ARG,
                        default = "dspace-ctun-server",
                        help = "CTun separate server Docker container, (default: %(default)s)")
    parser.add_argument(VEOS_DOCKER_CONTAINER_ARG,
                        default = "dspace-veos",
                        help = "VEOS Docker container, (default: %(default)s)")
    parser.add_argument(SHM_SIZE_ARG,
                        default = DEFAULT_SHARED_MEMORY_SIZE,
                        help = "The size of /dev/shm of the VEOS container. The format is <number><unit>. "
                               "The number must be greater than 0." + "\n" +
                               "The unit is optional and can be b (bytes), k (kilobytes), "
                               "m (megabytes), or g (gigabytes)." + "\n" +
                               "If you omit the unit, the system uses bytes." + "\n" +
                               "dSPACE does not recommend setting this value below 256 MB." + "\n" +
                               "(default: %(default)s)")


def RunCtunAndVeosDockerContainers(args):
    """Run CTun and VEOS in separate Docker containers"""
    veosCommand = "docker run --rm --env DS_CMU_SERVER=" + args.licenseServer
    veosCommand += " --name " + args.veosDockerContainer
    veosCommand += " --shm-size " + args.shmSize
    veosCommand += " " + args.veosDockerImage
    Utilities.RunBackgroundProcess(veosCommand)
    ctunCommand = "docker run --rm -p 1723:1723/udp --cap-add NET_ADMIN"
    ctunCommand += " --name " + args.ctunDockerContainer
    ctunCommand += " " + args.ctunDockerImage
    Utilities.RunForegroundProcess(ctunCommand)


def Main():
    """Entry point of the script that runs CTun and VEOS in separate Docker containers"""
    descriptionText = "Run CTun and VEOS in separate Docker containers"
    parser = argparse.ArgumentParser(description = descriptionText,
                                     formatter_class = argparse.RawTextHelpFormatter)
    DefineCommandLineArguments(parser)
    args = parser.parse_args()

    Utilities.LogStarting(str(argv))
    RunCtunAndVeosDockerContainers(args)
    Utilities.LogEnding(parser.prog)


if __name__ == "__main__":
    Main()
