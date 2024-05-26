from setuptools import find_packages, setup

package_name = 'my_python_pkg'

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
    maintainer='hayden',
    maintainer_email='yetwhen@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node1 = my_python_pkg.first_py_node:main",
            "py_publisher1 = my_python_pkg.py_publisher:main",
            "py_subscriber1 = my_python_pkg.py_subscriber:main",
            "py_server1 = my_python_pkg.py_server:main",
            "py_client1 = my_python_pkg.py_client:main",
            "py_oop_client1 = my_python_pkg.py_oop_client:main",
            "py_hardware_publisher1 = my_python_pkg.py_hardware_publisher:main",
        ],
    },
)
# to add script to ros2 ws, check the entry_points -> console_scripts[string]
# format is 
#"<desired_node_name> = <folder.folder. till script file>.<script>:<function to start with>"
# this will transform script to ros2 executable, add to install 