#!/bin/bash

export AWS_ACCESS_KEY_ID="AKIA2QJKJP2MAFVDPZGQ"
export AWS_SECRET_ACCESS_KEY="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"

aws ecr get-login-password --region eu-central-1 | docker login --username AWS --password-stdin https://722180079256.dkr.ecr.eu-central-1.amazonaws.com

docker compose -f docker-compose_sut_te_bridge_foxglove.yml up --build
