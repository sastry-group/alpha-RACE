from setuptools import find_packages
from setuptools import setup

setup(
    name='autonoma_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('autonoma_msgs', 'autonoma_msgs.*')),
)
