from setuptools import find_packages, setup

package_name = 'my_package'

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
    maintainer='bob',
    maintainer_email='bob@email.com',
    description='Examples of minimal publisher/subscriber using rclpy',
    license='pache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = my_package.publisher_member_function:main',
                'listener = my_package.subscriber_member_function:main',
        ],
    },
)
