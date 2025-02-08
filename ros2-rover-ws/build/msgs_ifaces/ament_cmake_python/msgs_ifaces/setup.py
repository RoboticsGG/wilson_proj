from setuptools import find_packages
from setuptools import setup

setup(
    name='msgs_ifaces',
    version='0.0.0',
    packages=find_packages(
        include=('msgs_ifaces', 'msgs_ifaces.*')),
)
