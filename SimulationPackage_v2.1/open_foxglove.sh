#!/bin/bash

# Join the 'driving_stack' container
# docker exec -it driving_stack bash

# Execute commands inside the 'driving_stack' container
docker exec driving_stack ./ros2build
docker exec driving_stack ./ros2run

# Open the URL in the default web browser
# xdg-open "https://simphera-iac.dspace-dev.com/foxglove/?ds=foxglove-websocket&ds.url=ws%3A%2F%2Flocalhost%3A8765"

