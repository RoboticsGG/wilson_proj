from setuptools import find_packages, setup

package_name = 'package_image_process'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='curry',
    maintainer_email='viewjirapat@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'node_image_process = package_image_process.node_image_process:main',
            'node_camera_proc2 = package_image_process.node_camera_proc2:main',
            'node_playback_cam = package_image_process.node_playback_cam:main',
        ],
    },
)
