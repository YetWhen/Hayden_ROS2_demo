# Hayden_ROS2_demo  
A repo for me to record ROS2 learning process and demonstration projects  

created at 2024/05/17  
# Environment and system setup  
UBUNTU 22.04  Jammy Jellyfish  
ROS2 humble  
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
