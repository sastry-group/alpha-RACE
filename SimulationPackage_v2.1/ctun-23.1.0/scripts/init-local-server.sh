#!/bin/bash

########################################################################
# Startup script for the ctun server with TAP device
# 
# Environment variables:
#   TAP_DEVICE:   Name of TAP device
#                 (default: 'dstap0')
#   IP_ADDRESS:   Static IP address of TAP device
#                 (default: 192.168.200.100)
#   SERVER_PORT:  UDP port of ctun server
#                 (default: '1723')
#   CMD_OPTIONS:  Further command line options for ctun
#                 (e.g.: '--verbosity trace')
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

if [[ -z ${TAP_DEVICE} ]]; then TAP_DEVICE="dstap0"; fi
if [[ -z ${IP_ADDRESS} ]]; then IP_ADDRESS="192.168.200.100"; fi
if [[ -z ${SERVER_PORT} ]]; then SERVER_PORT="1723"; fi
CURRENT_DIR=$(dirname "$(realpath "${BASH_SOURCE[0]}")")

echo "[INFO] $(basename "$0") parameter:"
echo "       CURRENT_DIR  = '${CURRENT_DIR}'"
echo "       TAP_DEVICE   = '${TAP_DEVICE}'"
echo "       IP_ADDRESS   = '${IP_ADDRESS}'"
echo "       SERVER_PORT  = '${SERVER_PORT}'"
echo "       CMD_OPTIONS  = '${CMD_OPTIONS}'"

echo "[INFO] Install ${TAP_DEVICE}"

set -x
"${CURRENT_DIR}/configure.sh" --tap "${TAP_DEVICE}" "${IP_ADDRESS}" --non-interactive
mkdir -p /tmp/ctun/
{ set +x; } 2>/dev/null

echo "[INFO] Start local-server"

set -x
START_CTUN_CMD="${CURRENT_DIR}/../bin/ctun server --port ${SERVER_PORT} --deployment local --dev ${TAP_DEVICE} ${CMD_OPTIONS} 2>&1 | tee /tmp/ctun/ctun.out"
capsh --drop=cap_net_admin -- -c "${START_CTUN_CMD}"
{ set +x; } 2>/dev/null

echo "[INFO] Remove ${TAP_DEVICE}"

set -x
"${CURRENT_DIR}/unconfigure.sh" --tap "${TAP_DEVICE}" --non-interactive