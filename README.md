# Hayden_ROS2_demo
A repo for me to record ROS2 learning process and demonstration projects

created at 2024/05/17
# Environment and system setup
UBUNTU 22.04 humble
ROS2
builder: ament, colcon
## basic setup commands
The following commands shall be run everytime when a new shell or terminal window is opened.
To make the system automatically call these files, you can paste these commands at the end of `~/.bashrc` file
### to access ros2 commands
`source /opt/ros/humble/setup.bash`
### to access developer tools
assuming colcon is installed with default setting
`source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash`
### to access the firstROS2_ws workspace
if ROS2_demo diretory is installed in home diretory, otherwise change ~ to the address to ROS2_demo
`source ~/ROS2_demo/firstROS2_ws/install/setup.bash`

## firstROS2_ws 
My learning process following tutorial guides.
Contains 2 packages, my_cpp_pkg and my_python_pkg
Both include templates of ros2 simple nodes, publisher and subscribers.
Heavily commented.
