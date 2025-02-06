from setuptools import find_packages
from setuptools import setup

setup(
    name='ifaces_position',
    version='0.0.0',
    packages=find_packages(
        include=('ifaces_position', 'ifaces_position.*')),
)
