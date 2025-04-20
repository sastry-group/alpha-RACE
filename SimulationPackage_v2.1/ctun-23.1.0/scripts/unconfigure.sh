#!/bin/bash

########################################################################
# Undo the host configuration for Container Tunnel Utility.
#
# Copyright 2021, dSPACE GmbH. All rights reserved.
########################################################################

# shellcheck disable=SC2128
if test -z "${BASH_SOURCE}" 
then 
    echo "[ERROR] Incorrect shell. Restart in '/bin/bash'." >&2
    exit 1
fi
set -e

SCRIPT_NAME=$0
SCRIPT_ARGS=
for i in "$@"; do SCRIPT_ARGS="$SCRIPT_ARGS $i"; done

function usage {
    echo "usage: $SCRIPT_NAME --promisc INTERFACE [--reset-ip] [--non-interactive]"
    echo "       $SCRIPT_NAME --promisc INTERFACE [--blackhole] [--non-interactive]"
    echo "       $SCRIPT_NAME --tap INTERFACE [--non-interactive]"
    echo "       $SCRIPT_NAME --help"
    echo ""
    echo "Undo host configuration for Container Tunnel Utility." 
    echo ""
    echo "  --promisc INTERFACE        - Disable promisc mode on the specified Ethernet interface."
    echo "  --revert-ip INTERFACE      - Revert the IP address of Ethernet interface."
    echo "  --blackhole IP_ADDRESS     - Remove the black hole for the specified IP address."
    echo "  --tap INTERFACE            - Remove the interface TAP device."
    echo "  --non-interactive          - Do not wait for user input."
    echo "  --help                     - Show this help information."
}

if [[ $# -lt 1 ]] ; then
    echo "[ERROR] A parameter is missing. Aborting script..." >&2
    usage
    exit 1
fi

while [[ $# -gt 0 ]]
do
    param="$1"

    case $param in
        --promisc)
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The 'INTERFACE' argument is missing. Aborting script..." >&2
            usage
            exit 1
        fi
        PROMISC="$2"
        shift # argument
        shift # value
        ;;
        --tap)
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The 'INTERFACE' argument is missing. Aborting script..." >&2
            usage
            exit 1
        fi
        TAP="$2"
        shift # argument
        shift # value
        ;;
        --reset-ip)
        RESET_IP="yes"
        shift # argument
        ;;
        --blackhole)
        BLACKHOLE="yes"
        shift # argument
        ;;
        --non-interactive)
        NON_INTERACTIVE=1
        shift # argument
        ;;
        --help)
        usage
        exit 1
        ;;
        *) # default
        echo "[ERROR] Unknown argument: $1" >&2
        usage
        exit 1
        ;;
    esac
done

echo "[INFO] $(basename "$SCRIPT_NAME") parameter:"
echo "       PROMISC         = '$PROMISC'"
echo "       TAP             = '$TAP'"
echo "       RESET_IP        = '$RESET_IP'"
echo "       BLACKHOLE       = '$BLACKHOLE'"
echo "       NON_INTERACTIVE = '$NON_INTERACTIVE'"

if [ -z "$PROMISC" ] && [ -z "$TAP" ] 
then
    echo "[ERROR] Missing parameter: --promisc or --tap" >&2
    usage
    exit 1
fi

if [ "$NON_INTERACTIVE" != "1" ] && [ "$(id -u)" != "0" ]
then
    echo "  You need root permission to continue. Restart script as root..."
    echo "sudo -k bash $(realpath "$SCRIPT_NAME") $SCRIPT_ARGS"
    # shellcheck disable=SC2086
    sudo -k bash "$(realpath "$SCRIPT_NAME")" $SCRIPT_ARGS
    exit $?
fi

echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
echo "[RUN] ip address show"
ip address show
echo "[RUN] ip route show"
ip route show
echo "[RUN] ip rule show"
ip rule show
echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"

if [ -n "$PROMISC" ] 
then
    if [ "$NON_INTERACTIVE" != "1" ]
    then
        read -r -p "Set the promisc mode to 'off' for ${PROMISC}? [y/N] " REPLY
        if [ "$REPLY" != "y" ]
        then
            echo "[ERROR] Aborted by user. Exiting script..." >&2
            exit 1
        fi
    fi
    echo "[RUN] ip link set ${PROMISC} promisc off"
    ip link set "${PROMISC}" promisc off

    if [ -n "$RESET_IP" ] 
    then
        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Reset the IP address? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit 1
            fi
        fi
        echo "[RUN] ip address restore < /tmp/ctun/host.ip.backup"
        ip address restore < /tmp/ctun/host.ip.backup
        echo "[RUN] ip route flush table main"
        ip route flush table main
        echo "[RUN] ip route restore < /tmp/ctun/ip.route"
        ip route restore < /tmp/ctun/ip.route
    fi #RESET_IP

    if [ -n "$BLACKHOLE" ] 
    then
        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Unconfigure blackhole? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit 1
            fi
        fi
        echo "[RUN] ip rule del table local"
        ip rule del table local
        echo "[RUN] ip rule flush"
        ip rule flush
        echo "[RUN] ip rule restore < /tmp/ctun/ip.rule"
        ip rule restore < /tmp/ctun/ip.rule
    fi #BLACKHOLE
fi #PROMISC

if [ -n "$TAP" ] 
then
    if [ "$NON_INTERACTIVE" != "1" ]
    then
        read -r -p "Delete tap device ${TAP}? [y/N] " REPLY
        if [ "$REPLY" != "y" ]
        then
            echo "[ERROR] Aborted by user. Exiting script..." >&2
            exit 1
        fi
    fi
    echo "[RUN] ip tuntap delete dev ${TAP} mode tap"
    ip tuntap delete dev "${TAP}" mode tap
fi #TAP

echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
echo "[RUN] ip address show"
ip address show
echo "[RUN] ip route show"
ip route show
echo "[RUN] ip rule show"
ip rule show
echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"