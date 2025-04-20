from setuptools import find_packages
from setuptools import setup

setup(
    name='novatel_oem7_msgs',
    version='10.4.0',
    packages=find_packages(
        include=('novatel_oem7_msgs', 'novatel_oem7_msgs.*')),
)
