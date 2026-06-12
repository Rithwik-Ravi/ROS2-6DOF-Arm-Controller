# RV-5AS-D Kinematic & Calligraphy Workspace

This workspace contains the complete codebase to execute precise kinematic toolpaths on the Mitsubishi RV-5AS-D (ASSISTA) robotic arm using ROS 2 Humble and MoveIt 2.

It features two main applications:
1. A strictly constrained 10cm x 10cm square toolpath.
2. A 2D Calligraphy Pipeline (Text and Image Vectorization) that dynamically draws within a 20x20 cm canvas relative to the robot's physical position.

## Structure
- `mxt_listener.MB6`: The MELFA BASIC VI script to be loaded onto the CR800 Teach Pendant. It handles the initial safe movement to the `P3` anchor and opens the `ENET` port for MXT communication.
- `src/square_path_pkg`: A ROS 2 Python package containing:
  - `square_path_node.py`: Executes a basic 10cm square leg-by-leg.
  - `calligraphy_pipeline_node.py`: Generates and executes complex drawing strokes (Text or Images) via a Strategy Pattern, using MoveIt 2's Cartesian planner with safe Z-axis Pen Up/Down logic.

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

### 5. Run an Application

**To run the 10cm Square Test:**
In a new terminal:
```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
source install/setup.bash
ros2 run square_path_pkg square_path_node
```

**To run the Calligraphy Control Center (Web UI):**
Instead of juggling multiple terminals, use the included orchestrator script to automatically launch the ROS 2 Driver, MoveIt 2 Planner, and the Flask Web Application with a single command!

First, install the backend requirement if you haven't already:
```bash
pip install flask
```

Then simply run the start script from the root of the repository:
```bash
cd ~/Desktop/Robotic_Arm_ROS2
./start_ui.sh
```

Finally, open your web browser and go to **`http://localhost:5000`** to access the Control Center! You can type text or upload an image directly through the UI, and clicking "Execute Sequence" will trigger the robotic path planning autonomously. When you are done, just hit `Ctrl+C` in the terminal and it will automatically shut down all the background ROS 2 nodes safely!
