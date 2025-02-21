from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_ywf_msg',
    version='0.0.0',
    packages=find_packages(
        include=('moveit_ywf_msg', 'moveit_ywf_msg.*')),
)
