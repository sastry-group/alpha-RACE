#!/bin/bash

########################################################################
# Install the Container Tunnel Utility.
#
# Copyright 2021, dSPACE GmbH. All rights reserved.
########################################################################

# shellcheck disable=SC2128
if test -z "${BASH_SOURCE}" 
then 
    echo "[ERROR] Incorrect shell. Restart in /bin/bash." >&2
    exit 1
fi

set -e

CURRENT_DIR=$(realpath "$(dirname "${BASH_SOURCE[0]}")")
INSTALL_DIR=/opt/dspace/common/ctun/2023a

function usage {
    echo "usage: ${SCRIPT_NAME} [--directory INSTALL_DIR]"
    echo "       ${SCRIPT_NAME} --help"
    echo ""
    echo "Install Container Tunnel Utility."
    echo ""
    echo "  --directory INSTALL_DIR - Installation directory"
    echo "                            (default: '${INSTALL_DIR}')"
    echo "  --help                  - Show this help information."
}

while [[ $# -gt 0 ]]
do
    param="$1"

    case $param in
        --directory)
        INSTALL_DIR="$2"
        shift # argument
        shift # value
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

set -x

apt-get update || echo "Could not run 'apt-get update'."
apt-get install -y --no-install-recommends binutils iproute2 iputils-ping libcap2-bin iptables iperf ncat tcpdump

{ set +x; } 2>/dev/null

if [ "$(id -u)" != "0" ]
then
    echo "[ERROR] You need root permission to continue. Restart the script as root." >&2
    exit 1
fi

set -x

BIN_DIR=${INSTALL_DIR}/bin
mkdir -p "${BIN_DIR}"
cp "${CURRENT_DIR}/bin/"* "${BIN_DIR}/"
setcap CAP_NET_RAW+ep "${BIN_DIR}/ctun"
chmod -R a+x "${BIN_DIR}/"

SCRIPT_DIR=${INSTALL_DIR}/scripts
mkdir -p "${SCRIPT_DIR}"
cp -r "${CURRENT_DIR}/scripts/"* "${SCRIPT_DIR}/"
chmod -R a+x "${SCRIPT_DIR}/"

{ set +x; } 2>/dev/null

echo "[INFO] Installation completed."
