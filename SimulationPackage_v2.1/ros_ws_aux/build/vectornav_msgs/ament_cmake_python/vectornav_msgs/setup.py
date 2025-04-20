from setuptools import find_packages
from setuptools import setup

setup(
    name='vectornav_msgs',
    version='3.0.0',
    packages=find_packages(
        include=('vectornav_msgs', 'vectornav_msgs.*')),
)
