from setuptools import find_packages
from setuptools import setup

setup(
    name='msgs_rovercon',
    version='0.0.0',
    packages=find_packages(
        include=('msgs_rovercon', 'msgs_rovercon.*')),
)
