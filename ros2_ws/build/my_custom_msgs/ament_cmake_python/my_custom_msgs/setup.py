from setuptools import find_packages
from setuptools import setup

setup(
    name='my_custom_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('my_custom_msgs', 'my_custom_msgs.*')),
)
