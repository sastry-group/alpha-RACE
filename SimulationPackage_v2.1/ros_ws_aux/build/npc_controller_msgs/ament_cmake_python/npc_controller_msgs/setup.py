from setuptools import find_packages
from setuptools import setup

setup(
    name='npc_controller_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('npc_controller_msgs', 'npc_controller_msgs.*')),
)
