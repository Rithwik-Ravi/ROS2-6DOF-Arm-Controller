# RV-5AS-D Kinematic Test Workspace

This workspace contains the complete codebase to execute a strictly constrained 10cm x 10cm square toolpath on the Mitsubishi RV-5AS-D (ASSISTA) robotic arm using ROS 2 Humble and MoveIt 2.

## Structure
- `mxt_listener.MB6`: The MELFA BASIC VI script to be loaded onto the CR800 Teach Pendant. It handles the initial safe movement to the `P3` anchor and opens the `ENET` port for MXT communication.
- `src/square_path_pkg`: A ROS 2 Python package that uses MoveIt 2's `/compute_cartesian_path` service to plan the square and executes it via the `/execute_trajectory` action, guaranteeing full stops at all 4 corners.

## How to Test it Out

### 1. Download Drivers & Build the Workspace
Run these exact commands in your terminal to download the official Mitsubishi drivers into this workspace and build everything:

```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws/src
# Clone the official MELFA ROS 2 driver (Humble branch)
git clone -b humble https://github.com/Mitsubishi-Electric-FA-R-D-Robotics/melfa_ros2_driver.git

cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
# Install all required dependencies
rosdep update
rosdep install --from-paths src --ignore-src -r -y

# Build the entire workspace
colcon build --symlink-install
```

### 2. Start the Listener Program
On the Teach Pendant, select and run the `mxt_listener` program. The robot will move to `P3` at a hardcoded 5% speed, pause for 3 seconds, and open the MXT port to wait for ROS 2.

### 3. Launch the Driver
In a new terminal:
```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
source install/setup.bash
# Replace <ROBOT_IP> with the RV-5AS-D IP address (e.g., 192.168.0.20)
ros2 launch melfa_bringup rv5as_control.launch.py robot_ip:=192.168.0.20 use_fake_hardware:=false start_rviz:=false
```

### 4. Launch MoveIt 2 (Planning Stack)
In a new terminal, launch the MoveIt 2 components which provide the path planning services and a fully configured RViz window:
```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
source install/setup.bash
ros2 launch melfa_rv5as_moveit_config rv5as_moveit.launch.py
```
*(Note: This will open a second RViz window. This specific MoveIt RViz window is the one you will use to visualize the robot's planned path and live motion!)*

### 5. Run the Square Path Node
In a new terminal:
```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
source install/setup.bash
ros2 run square_path_pkg square_path_node
```
