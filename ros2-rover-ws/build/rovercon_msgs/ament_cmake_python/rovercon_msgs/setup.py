from setuptools import find_packages
from setuptools import setup

setup(
    name='rovercon_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rovercon_msgs', 'rovercon_msgs.*')),
)
