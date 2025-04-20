#!/bin/bash

########################################################################
# Configure the host for use of the Container Tunnel Utility.
#
# Copyright 2021, dSPACE GmbH. All rights reserved.
########################################################################

EXIT_SUCCESS=0
EXIT_WRONG_SHELL=1
EXIT_WRONG_ARGS=1
EXIT_MISSING_CAP_EFF=2
EXIT_MISSING_CAP_INH=3
EXIT_ABORTED_BY_USER=4

# shellcheck disable=SC2128
if test -z "${BASH_SOURCE}" 
then 
    echo "[ERROR] Wrong shell. Restart in /bin/bash!" >&2
    exit $EXIT_WRONG_SHELL
fi
set -e

SCRIPT_NAME=$0
SCRIPT_ARGS=
for i in "$@"; do SCRIPT_ARGS="$SCRIPT_ARGS $i"; done

function usage {
    echo "usage: $SCRIPT_NAME --promisc INTERFACE [--drop-ip INTERFACE] [--non-interactive]"
    echo "       $SCRIPT_NAME --promisc INTERFACE [--blackhole IP_ADDRESS] [--non-interactive]"
    echo "       $SCRIPT_NAME --tap INTERFACE IP_ADDRESS [--non-interactive]"
    echo "       $SCRIPT_NAME --help"
    echo ""
    echo "Configure the host for the use of the Container Tunnel Utility."
    echo ""
    echo "  --promisc INTERFACE        - Enable promisc mode on the specified Ethernet interface."
    echo "  --drop-ip INTERFACE        - Drop the IP address of the Ethernet interface."
    echo "  --blackhole IP_ADDRESS     - Configure blackhole for the specified IP address."
    echo "  --tap INTERFACE IP_ADDRESS - Create a new TAP device interface and assign the specified IP address."
    echo "  --non-interactive          - Do not wait for user input."
    echo "  --help                     - Show this help information."
}

function check_net_admin_capability {
    echo "[INFO] Check capability sets of the current shell process."

    CAP_EFF=$(cat /proc/self/status | grep 'CapEff' | awk -F ' ' '{ print $2 }')
    echo CAP_EFF=$CAP_EFF

    # Check effective capability set
    if ! capsh --decode=$CAP_EFF | grep -iq "net_admin" ; then
        echo "[ERROR] Cannot start ctun if NET_ADMIN capability is missing in the effective capability set"
        echo "        of the current shell process. Add NET_ADMIN capability to the environment of the"
        echo "        current shell process, or rerun as root user. Aborting script execution..."
        exit $EXIT_MISSING_CAP_EFF
    fi
    echo "[INFO] The NET_ADMIN capability is in the effective capability set"

    CAP_INH=$(cat /proc/self/status | grep 'CapInh' | awk -F ' ' '{ print $2 }')
    echo CAP_INH=$CAP_INH

    # Check inheritable capability set
    if ! capsh --decode=$CAP_INH | grep -iq "net_admin" ; then
        echo "[INFO] The NET_ADMIN capability is not in the inheritable capability set"

        USER_ID=$(id -u)
        echo USER_ID=$USER_ID

        if [ "$USER_ID" -ne 0 ] ; then
            echo "[INFO] For non-root users, iproute2 checks if NET_ADMIN is in inherited capability set."
            echo "       See: iproute2/utils.c:drop_cap() at commit d937cb2b0c3ab863c991bf831821b15d12764675"
            echo "            in iproute2 source code repository."
            echo "[ERROR] Cannot start ctun as non-root user if NET_ADMIN capability is missing in the"
            echo "        effective capability set of the current shell process. Add NET_ADMIN capability"
            echo "        to the environment of the current shell process, or rerun as root user."
            echo "        Aborting script execution..."
            exit $EXIT_MISSING_CAP_INH
        fi
    else
        echo "[INFO] The NET_ADMIN capability is in the inheritable capability set."
    fi
}

check_net_admin_capability
if [[ $# -lt 1 ]] ; then
    echo "[ERROR] One or more parameters are missing. Aborting script execution..." >&2
    usage
    exit $EXIT_WRONG_ARGS
fi

while [[ $# -gt 0 ]]
do
    param="$1"

    case $param in
        --promisc)
        PROMISC="$2"
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The INTERFACE argument is missing. Aborting script execution..." >&2
            usage
            exit $EXIT_WRONG_ARGS
        fi
        shift # argument
        shift # value
        ;;
        --tap)
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The INTERFACE argument is missing. Aborting script execution..." >&2 
            usage
            exit $EXIT_WRONG_ARGS
        fi
        if [[ $# -lt 3 ]] ; then
            echo "[ERROR] The IP_ADDRESS argument is missing. Aborting script execution..." >&2
            usage
            exit $EXIT_WRONG_ARGS
        fi
        TAP="$2"
        IP_ADDRESS="$3"
        shift # argument
        shift # value
        shift # value
        ;;
        --drop-ip)
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The INTERFACE argument is missing. Aborting script execution..." >&2
            usage
            exit $EXIT_WRONG_ARGS
        fi
        DROP_IP="$2"
        shift # argument
        shift # value
        ;;
        --blackhole)
        if [[ $# -lt 2 ]] ; then
            echo "[ERROR] The IP_ADDRESS argument is missing. Aborting script execution..." >&2
            usage
            exit $EXIT_WRONG_ARGS
        fi
        BLACKHOLE="$2"
        shift # argument
        shift # value
        ;;
        --non-interactive)
        NON_INTERACTIVE=1
        shift # argument
        ;;
        --help)
        usage
        exit $EXIT_SUCCESS
        ;;
        *) # default
        echo "[ERROR] Unknown argument: $1" >&2
        usage
        exit $EXIT_WRONG_ARGS
        ;;
    esac
done

echo "[INFO] $(basename "$SCRIPT_NAME") parameter:"
echo "       PROMISC         = '$PROMISC'"
echo "       TAP             = '$TAP'"
echo "       IP_ADDRESS      = '$IP_ADDRESS'"
echo "       DROP_IP         = '$DROP_IP'"
echo "       BLACKHOLE       = '$BLACKHOLE'"
echo "       NON_INTERACTIVE = '$NON_INTERACTIVE'"

if [ -z "$PROMISC" ] && [ -z "$TAP" ] 
then
    echo "[ERROR] Missing parameter: --promisc or --tap" >&2 
    usage
    exit $EXIT_WRONG_ARGS
fi
if [ -z "$TAP" ] && [ -n "$IP_ADDRESS" ] 
then
    echo "[ERROR] Missing parameters: --tap INTERFACE IP_ADDRESS" >&2
    usage
    exit $EXIT_WRONG_ARGS
fi

if [ "$(id -u)" != "0" ]
then
    if [ "$NON_INTERACTIVE" != "1" ]
    then
        echo "[INFO] You do not have sufficient privileges to perform this operation. Restarting script as root."
        echo "[RUN] sudo -k bash $(realpath "$SCRIPT_NAME") $SCRIPT_ARGS"
        # shellcheck disable=SC2086
        sudo -k bash "$(realpath "$SCRIPT_NAME")" $SCRIPT_ARGS
        exit $?
    fi

    echo "[WARN] You might not have sufficient privileges to perform this operation. Restart as root if subsequent operations fail." >&2
fi

if [ -n "$PROMISC" ] 
then
    if [ "$NON_INTERACTIVE" != "1" ]
    then
        read -r -p "Set ${PROMISC} to promisc mode on? [y/N] " REPLY
        if [ "$REPLY" != "y" ]
        then
            echo "[ERROR] Aborted by user. Exiting script..." >&2 
            exit $EXIT_ABORTED_BY_USER
        fi
    fi
    echo "[RUN] ip link set ${PROMISC} promisc on"
    ip link set "${PROMISC}" promisc on

    if [ -n "$DROP_IP" ] 
    then
        echo "[INFO] Backup IP configuration of ${DROP_IP}"
        echo "[RUN] mkdir -p /tmp/ctun/"
        mkdir -p /tmp/ctun/
        echo "[RUN] ip address save dev ${DROP_IP} > /tmp/ctun/host.ip.backup"
        ip address save dev "${DROP_IP}" > /tmp/ctun/host.ip.backup
        echo "[RUN] ip route save > /tmp/ctun/ip.route"
        ip route save > /tmp/ctun/ip.route
        echo "[RUN] ip addr show dev ${DROP_IP} | grep 'inet ' | awk '{print \$2}'"
        NODE_ADDR=$(ip addr show dev "${DROP_IP}" | grep 'inet ' | awk '{print $2}')
        echo "NODE_ADDR=$NODE_ADDR"
        echo "[RUN] echo ${NODE_ADDR} | awk -F/ '{print \$1}'"
        NODE_IP=$(echo "${NODE_ADDR}" | awk -F/ '{print $1}')
        echo "NODE_IP=$NODE_IP"

        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Drop ip address of ${DROP_IP}? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit $EXIT_ABORTED_BY_USER
            fi
        fi

        echo "[RUN] ip addr del ${NODE_ADDR} dev ${DROP_IP}" 
        ip addr del "${NODE_ADDR}" dev "${DROP_IP}"
    fi #DROP_IP

    if [ -n "$BLACKHOLE" ] 
    then
        echo "[INFO] Backup IP configuration of ${BLACKHOLE}"
        echo "[RUN] mkdir -p /tmp/ctun/"
        mkdir -p /tmp/ctun/
        echo "[RUN] ip rule save > /tmp/ctun/ip.rule"
        ip rule save > /tmp/ctun/ip.rule

        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Configure blackhole for ip address ${BLACKHOLE}? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit $EXIT_ABORTED_BY_USER
            fi
        fi
        echo "[RUN] ip rule add blackhole to ${BLACKHOLE}"
        ip rule add blackhole to "${BLACKHOLE}" 
    fi #BLACKHOLE
fi #PROMISC

if [ -n "$TAP" ] 
then

    if ! ip address show dev "${TAP}" type tun 2> /dev/null | grep . ; then
        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Create tap device ${TAP}? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit $EXIT_ABORTED_BY_USER
            fi
        fi

        if [ ! -c /dev/net/tun ]; then
            echo "[INFO] Could not find '/dev/net/tun'. Create new one."
            echo "[RUN] mkdir -p /dev/net" 
            mkdir -p /dev/net
            echo "[RUN] mknod /dev/net/tun c 10 200" 
            mknod /dev/net/tun c 10 200
            echo "[RUN] chmod 600 /dev/net/tun" 
            chmod 600 /dev/net/tun
        fi

        echo "[RUN] ip tuntap add ${TAP} mode tap"
        ip tuntap add "${TAP}" mode tap
    fi

    if ! ip address show dev "${TAP}" type tun | grep "${IP_ADDRESS}" ; then
        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Set tap ip address to ${IP_ADDRESS}/24? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit $EXIT_ABORTED_BY_USER
            fi
        fi
        echo "[RUN] ip addr add ${IP_ADDRESS}/24 dev ${TAP}"
        ip addr add "${IP_ADDRESS}/24" dev "${TAP}"
    fi

    if ! ip address show dev "${TAP}" type tun up | grep . ; then
        if [ "$NON_INTERACTIVE" != "1" ]
        then
            read -r -p "Set ${TAP} up? [y/N] " REPLY
            if [ "$REPLY" != "y" ]
            then
                echo "[ERROR] Aborted by user. Exiting script..." >&2
                exit $EXIT_ABORTED_BY_USER
            fi
        fi
        echo "[RUN] ip link set dev ${TAP} up"
        ip link set dev "${TAP}" up
    fi
fi #TAP

echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
echo "SUMMARY:"
echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
echo "[RUN] ip address show"
ip address show
echo "[RUN] ip route show"
ip route show
echo "[RUN] ip rule show"
ip rule show
echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"

echo "[INFO] Configuration completed successfully."