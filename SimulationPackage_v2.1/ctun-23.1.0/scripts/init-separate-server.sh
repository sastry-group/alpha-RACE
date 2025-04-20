#!/bin/bash

########################################################################
# Startup script for the ctun server with separate deployment. Set the promisc mode, disable
# the local Ethernet stack, and start the ctun server.
# 
# Environment variables: 
#   ETH_DEVICE:   Used Ethernet device
#                 (default: 'eth0')
#   SERVER_PORT:  UDP port of the ctun server
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

if [[ -z ${ETH_DEVICE} ]]; then ETH_DEVICE="eth0"; fi
if [[ -z ${SERVER_PORT} ]]; then SERVER_PORT="1723"; fi
CURRENT_DIR=$(realpath "$(dirname "${BASH_SOURCE[0]}")")

echo "[INFO] $(basename "$0") parameter:"
echo "       CURRENT_DIR  = '${CURRENT_DIR}'"
echo "       ETH_DEVICE   = '${ETH_DEVICE}'"
echo "       SERVER_PORT  = '${SERVER_PORT}'"
echo "       CMD_OPTIONS  = '${CMD_OPTIONS}'"

echo "[INFO] Wait for 10 s to check whether the Ethernet stack was not yet ready."
set -x
sleep 10
{ set +x; } 2>/dev/null

echo "[INFO] Detect local IP configuration"
NODE_ADDR=$(ip addr show dev ${ETH_DEVICE} | grep "inet " | awk '{print $2}')
TUNNEL_IP=$(echo "${NODE_ADDR}" | awk -F/ '{print $1}')
TUNNEL_CIDR=$(echo "${NODE_ADDR}" | awk -F/ '{print $2}')
TUNNEL_TEMP=$(( 0xFFFFFFFF ^ ((1 << (32 - TUNNEL_CIDR)) - 1) ))
TUNNEL_SUBNET=$(( (TUNNEL_TEMP >> 24) & 0xFF )).$(( (TUNNEL_TEMP >> 16) & 0xFF )).$(( (TUNNEL_TEMP >> 8) & 0xFF )).$(( TUNNEL_TEMP & 0xFF ))
GATEWAY_IP=$(ip route | awk '/default/ { print $3 }')

echo "         TUNNEL_IP:    ${TUNNEL_IP}"
echo "         TUNNEL_CIDR:  ${TUNNEL_CIDR}"
echo "         TUNNEL_TEMP:  ${TUNNEL_TEMP}"
echo "         TUNNEL_SUBNET:${TUNNEL_SUBNET}"
echo "         GATEWAY_IP:   ${GATEWAY_IP}"

echo "[INFO] Configure ${ETH_DEVICE}"

set -x
"${CURRENT_DIR}/configure.sh" --promisc "${ETH_DEVICE}" --drop-ip "${ETH_DEVICE}" --non-interactive
mkdir -p /tmp/ctun/
{ set +x; } 2>/dev/null

echo "[INFO] Start separate-server"

set -x
START_CTUN_CMD="${CURRENT_DIR}/../bin/ctun server --port ${SERVER_PORT} --deployment separate --dev ${ETH_DEVICE} --ip ${TUNNEL_IP} --subnet ${TUNNEL_SUBNET} --gateway ${GATEWAY_IP} ${CMD_OPTIONS} 2>&1 | tee /tmp/ctun/ctun.out"
capsh --drop=cap_net_admin -- -c "${START_CTUN_CMD}"
{ set +x; } 2>/dev/null

echo "[INFO] Unconfigure ${ETH_DEVICE}"

set -x
"${CURRENT_DIR}/unconfigure.sh" --promisc "${ETH_DEVICE}" --reset-ip --non-interactive