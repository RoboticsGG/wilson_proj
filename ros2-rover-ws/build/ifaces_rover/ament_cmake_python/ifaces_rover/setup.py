from setuptools import find_packages
from setuptools import setup

setup(
    name='ifaces_rover',
    version='0.0.0',
    packages=find_packages(
        include=('ifaces_rover', 'ifaces_rover.*')),
)
