# Hayden_ROS2_demo  
A repo for me to record ROS2 learning process and demonstration projects  
email: YetWhen@gmail.com/Diwen.Ye@unswalumni.com  

created at 2024/05/17  
# Environment and system setup  
UBUNTU 22.04  Jammy Jellyfish  
ROS2 humble  
builder: ament, colcon  
ros2 package: urdf_tutorial  
vscode extensions:  
&emsp;&emsp;c/c++ (by microsoft)  
&emsp;&emsp;CMake (by twxs)  
&emsp;&emsp;Python (by microsoft)  
&emsp;&emsp;ROS (for urdf xml coding)  
for sim_ws>>URDF files, xacro is used and need to be installed by following command:  
&emsp;&emsp;`sudo apt install ros-<distro>-xacro`
## basic setup commands  
The following commands shall be run everytime when a new shell or terminal window is opened.  
To make the system automatically call these files, you can paste these commands at the end of `~/.bashrc` file  
### to access ros2 commands  
`source /opt/ros/humble/setup.bash`  
### to access developer tools  
assuming colcon is installed with default setting  
`source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash`  
### to access gazebo  
after install ros2, may also need to run  
`sudo apt install ros-humble-gazebo*` (include the *)  
Then run the following env source command or add to ~/.bashrc  

`source /usr/share/gazebo/setup.bash`  
### to access the firstROS2_ws workspace  
if ROS2_demo diretory is installed in home diretory, otherwise change ~ to the address to ROS2_demo  
`source <PATH_TO>/ROS2_demo/firstROS2_ws/install/setup.bash`  
`firstROS2_ws` can be replaced to the folder name of other workspace  
### for c++ ros2 library reference (VSCode user)  
the #include "<ANY_ROS2_LIBRARY_OR_INTERFACE>" maynot be recognised by IDE gramma check  
`ctrl`+`shift`+`P` -> search for "C/C++ Edit Configuration JSON"  
edit the c_cpp_properties.json, add to '"includePath:["${workspaceFolder}/**",]"  
with address to local ros include folder, eg.  
`/opt/ros/humble/include/**`  
Additionally, for any customized interface (already built and installed to workspace, add the address to installed interface package's include folder.   
Format would be  
`[ADDRESS_TO_WS]/install/[INTERFACE_PKG]/include/**`  
eg.  
`~/ROS2_demo/firstROS2_ws/install/my_interfaces/include/**`  
(assuming ROS2_demo is installed to home)  


## firstROS2_ws 
My learning process following tutorial guides.  
Contains 4 packages, my_cpp_pkg， my_python_pkg, my_interfaces and my_robot_bringup  
All the source files/codes are fully functional and can serve as template for further project  
Topics covered:  
### my_cpp_pkg & my_python_pkg  
simple node, topic publisher (with&without oop), topic subscriber (with&without oop), ROS2 service server, ROS2 service client, ROS2 parameters  
all of the source files can serve as template for further project  
### my_interfaces  
customized interfaces for msg & srv  
### my_robot_bringup  
calling nodes and configure node parameters via launch file.    

Heavily commented.  

## sim_ws  
default functionality (as template):  
Launch robot urdf in gazebo and rviz  
`ros2 launch my_robot_bringup my_robot_gazebo.launch.xml`  
It will also Enable the gazebo plugin from gazebo_ros pkg, which is a 2 wheel controller for robot, subscribing the topic `/cmd_vel`  
To publish a simple topic for debugging  
`ros2 topic pub /cmd_vel/geometry_msgs/msg/Twist "{linear: {x: 0.5}, angular: {z: 0}}"`  
To publish topics in node, refer to the publisher examples in firstROS2_ws  

### my_robot.urdf
A simple car with 2 wheels and a caster wheel, can serve as template of urdf file  
simple way to investigate the urdf file is using urdf_tutorial package  
`ros2 launch urdf_tutorial display.launch.py model:=address/to/my_robot.urdf `  
which will call Rviz2 with appropriate configuration  
details on joint & link type:  
wiki.ros.org/urdf/XML/joint  
wiki.ros.org/urdf/XML/link

### add gazebo plugins to urdf files  
examples in `src/my_robot_description/urdf/mobile_base_gazebo.xacro`  
ros gazebo plugins github (ros-simulation/gazebo_ros_pkgs) ros2 branch  
gazebo_plugins/inlcude/gazebo_plugins/ folder contains most of the header files for documentation reference  
