#!/bin/bash

# Stop and remove containers defined in the compose file, including orphaned ones
docker compose -f docker-compose_sut_te_bridge_foxglove.yml down --remove-orphans
