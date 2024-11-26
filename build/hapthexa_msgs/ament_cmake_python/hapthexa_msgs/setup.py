from setuptools import find_packages
from setuptools import setup

setup(
    name='hapthexa_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('hapthexa_msgs', 'hapthexa_msgs.*')),
)
