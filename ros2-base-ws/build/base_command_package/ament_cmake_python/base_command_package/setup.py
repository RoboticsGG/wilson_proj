from setuptools import find_packages
from setuptools import setup

setup(
    name='base_command_package',
    version='0.0.0',
    packages=find_packages(
        include=('base_command_package', 'base_command_package.*')),
)
