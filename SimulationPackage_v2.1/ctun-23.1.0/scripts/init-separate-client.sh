#!/bin/bash

########################################################################
# Startup script for the ctun client with separate deployment. Set the promisc mode, disable 
# the local Ethernet stack, and start the ctun client.
# 
# Environment variables: 
#   ETH_DEVICE:   Used Ethernet device
#                 (default: 'eth0')
#   SERVER_IP:    IP address of the ctun server
#   SERVER_PORT:  UDP port of the ctun server
#                 (default: '1723')
#   SRC_IP:       IP address of the user node in the same subnet as the client
#   DEST_IP:      IP address of the target node in the subnet of the server
#                 (Optional; must be empty if the server runs with local deployment)
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
if [[ -z ${SERVER_IP} ]]; then echo "[ERROR] Missing environment variable: SERVER_IP" >&2; exit 1; fi
if [[ -z ${SERVER_PORT} ]]; then SERVER_PORT="1723"; fi
if [[ -z ${SRC_IP} ]]; then echo "[ERROR] Missing environment variable: SRC_IP" >&2; exit 1; fi
CURRENT_DIR=$(realpath "$(dirname "${BASH_SOURCE[0]}")")

echo "[INFO] $(basename "$0") parameter:"
echo "       CURRENT_DIR  = '${CURRENT_DIR}'"
echo "       ETH_DEVICE   = '${ETH_DEVICE}'"
echo "       SERVER_IP    = '${SERVER_IP}'"
echo "       SERVER_PORT  = '${SERVER_PORT}'"
echo "       SRC_IP       = '${SRC_IP}'"
echo "       DEST_IP      = '${DEST_IP}'"
echo "       CMD_OPTIONS  = '${CMD_OPTIONS}'"

if [[ -n ${DEST_IP} ]];
then 
    DEST_IP="--dest ${DEST_IP}" 
fi

echo "[INFO] Detect local IP configuration"

set -x
NODE_ADDR=$(ip addr show dev ${ETH_DEVICE} | grep "inet " | awk '{print $2}')
TUNNEL_IP=$(echo "${NODE_ADDR}" | awk -F/ '{print $1}')
TUNNEL_CIDR=$(echo "${NODE_ADDR}" | awk -F/ '{print $2}')
TUNNEL_TEMP=$(( 0xFFFFFFFF ^ ((1 << (32 - TUNNEL_CIDR)) - 1) ))
TUNNEL_SUBNET=$(( (TUNNEL_TEMP >> 24) & 0xFF )).$(( (TUNNEL_TEMP >> 16) & 0xFF )).$(( (TUNNEL_TEMP >> 8) & 0xFF )).$(( TUNNEL_TEMP & 0xFF ))
GATEWAY_IP=$(ip route | awk '/default/ { print $3 }')
{ set +x; } 2>/dev/null

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

echo "[INFO] Start separate-client"

set -x
START_CTUN_CMD="${CURRENT_DIR}/../bin/ctun client ${SERVER_IP} --port ${SERVER_PORT} --deployment separate --dev ${ETH_DEVICE} --ip ${TUNNEL_IP} --subnet ${TUNNEL_SUBNET} --gateway ${GATEWAY_IP} --src ${SRC_IP} ${DEST_IP} ${CMD_OPTIONS} 2>&1 | tee /tmp/ctun/ctun.out"
capsh --drop=cap_net_admin -- -c "${START_CTUN_CMD}"
{ set +x; } 2>/dev/null

echo "[INFO] Unconfigure ${ETH_DEVICE}"

set -x
"${CURRENT_DIR}/unconfigure.sh" --promisc "${ETH_DEVICE}" --reset-ip --non-interactive