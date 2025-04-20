from setuptools import find_packages
from setuptools import setup

setup(
    name='foxglove_msgs',
    version='3.0.0',
    packages=find_packages(
        include=('foxglove_msgs', 'foxglove_msgs.*')),
)
