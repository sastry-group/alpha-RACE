from setuptools import find_packages
from setuptools import setup

setup(
    name='raptor_dbw_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('raptor_dbw_msgs', 'raptor_dbw_msgs.*')),
)
