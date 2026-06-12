# Calligraphy & Kinematic Workspace (Mitsubishi RV-5AS-D)

This workspace contains the complete codebase to execute precise kinematic toolpaths and an automated calligraphy/vectorization pipeline on the Mitsubishi RV-5AS-D (ASSISTA) robotic arm using ROS 2 Humble and MoveIt 2.

It features a classic Windows Forms style **Web Control Center** that allows users to instantly visualize and execute text-to-strokes or image vectorization within a physical 20x20 cm workspace.

## Prerequisites

To run this on your laptop, you need:
1. **Ubuntu 22.04 LTS** (Native or WSL2, but native is highly recommended for hardware networking).
2. **ROS 2 Humble** installed.
3. Python 3 with the following packages:
   ```bash
   pip install flask opencv-python numpy
   ```
4. **Network Configuration**: 
   - Your laptop must be connected via Ethernet to the CR800 Controller.
   - Your laptop should be configured with a static IP on the same subnet (e.g., `192.168.0.101`).
   - The robot controller must be at `192.168.0.20` (or update `start_ui.sh` with your specific robot IP).

## Setup & Building

1. **Download Drivers & Build the Workspace**
Run these exact commands in your terminal to download the official Mitsubishi drivers and compile the workspace:

```bash
cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws/src
# Clone the official MELFA ROS 2 driver (Humble branch)
git clone -b humble https://github.com/Mitsubishi-Electric-FA-R-D-Robotics/melfa_ros2_driver.git

cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws
# Install all required ROS dependencies
rosdep update
rosdep install --from-paths src --ignore-src -r -y

# Build the entire workspace
colcon build --symlink-install
```

## Running the System

### 1. Start the Robot Listener Program
On the Teach Pendant, select and run the `mxt_listener.MB6` program. 
The robot will autonomously move to `P3` at a safe 5% speed, pause for 3 seconds, and open the MXT `ENET` port to wait for ROS 2 commands.

### 2. Launch the Web Control Center (Single Command!)
Instead of juggling multiple terminals for the hardware driver, MoveIt 2, and the web server, use the included orchestrator script:

```bash
cd ~/Desktop/Robotic_Arm_ROS2
./start_ui.sh
```

### 3. Using the Web Interface
Once the script is running, open your web browser and navigate to:
**`http://localhost:5000`**

- **Text Calligraphy:** Type any text, set the letter size in millimeters, and click "Generate Preview".
- **Image Vectorization:** Upload a PNG/JPG. The system uses Adaptive Thresholding and morphological closing to perfectly trace the outlines of line-art and photos. Adjust the "Detail Level" slider to capture more or fewer edges.
- **Execution:** Click the **EXECUTE** button to send the pre-approved settings directly to the ROS node. The robot will move to a transit altitude between strokes and drop down to draw!
- **Stop / Go Home:** Click the **STOP** button to immediately halt the drawing process. The robot will safely retract its Z-axis to 40cm, and return to the center home position (`X=0.4m, Y=0.0m`).

When you are done, simply hit `Ctrl+C` in your terminal to safely shut down the web server and all background ROS 2 nodes.
