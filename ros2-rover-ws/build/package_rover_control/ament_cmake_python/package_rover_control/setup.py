from setuptools import find_packages
from setuptools import setup

setup(
    name='package_rover_control',
    version='0.0.0',
    packages=find_packages(
        include=('package_rover_control', 'package_rover_control.*')),
)
