# -*- coding: utf-8 -*-
"""
Description: Create a SUT in SIMPHERA.

Copyright 2024 dSPACE GmbH. All rights reserved.
"""

# Import Python request library for SIMPHERA API calls
import requests
import uuid
import datetime

# Cluster configuration
# Empty strings to be set as described in the documentation
simpheraBaseUrl  = "https://simphera-iac.dspace-dev.com/api"
apiKey           = ""
projectId        = ""
dockerCompose    = ""

currentTime = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')

# SUT configuration
sutName          = "AV Driving Stack"
sutDescription   = "SUT created on: " + currentTime
sutId            = uuid.uuid4()
sutTags          = [currentTime, "Custom Tag"]


def main():

    with open(dockerCompose, 'r') as file:
        dockerComposeContent = file.read()

    CreateSut(simpheraBaseUrl, apiKey, projectId, dockerComposeContent, sutName, sutId, sutDescription, sutTags)


def CreateSut(baseUrl, apiKey, projectId, dockerComposeContent, sutName, sutId, sutDescription, sutTags):
        """Creates a SUT in SIMPHERA
        """

        print("Create SUT in SIMPHERA: " + sutName)

        try:
            requestUrl = f"{baseUrl}/simphera/suts/{sutId}?projectId={projectId}"
            body = []
            body.append(GetPatchItem("name", sutName))
            body.append(GetPatchItem("description", sutDescription))
            body.append(GetPatchItem("content/DockerCompose", dockerComposeContent))
            body.append(GetPatchItem("customattributes/DockerCompose", {"value": dockerComposeContent}))
            for tag in sutTags:
                body.append(GetPatchItem("tags/-", tag))

            headers = GetHeader(apiKey)
            response = requests.request("Patch", requestUrl, headers=headers, json=body)
            responseObject = response.json()
            print("SUT created:", response)
            return responseObject["id"]
        except requests.exceptions.HTTPError as http_err:
            print(f"An HTTP error {http_err.resp.status} occurred:\n{http_err.content}")
        except Exception as err:
            print(f"An error occurred: {err}")


def GetPatchItem(path: str, value: str, operation: str = "add"):
    """ Return patch object."""

    return {
        "value": value,
        "path": path,
        "op": operation
    }

def GetHeader(apiKey):
    """Return header object."""

    return {
        "X-API-KEY": apiKey,
        "Content-Type": "application/json-patch+json",
        "Accept": "application/json"
    }


if __name__ == "__main__":
    main()
