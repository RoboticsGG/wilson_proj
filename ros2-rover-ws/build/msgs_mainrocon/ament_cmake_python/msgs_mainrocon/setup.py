from setuptools import find_packages
from setuptools import setup

setup(
    name='msgs_mainrocon',
    version='0.0.0',
    packages=find_packages(
        include=('msgs_mainrocon', 'msgs_mainrocon.*')),
)
