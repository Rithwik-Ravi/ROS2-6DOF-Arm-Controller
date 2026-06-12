#!/bin/bash

# Cleanup background processes on exit (Ctrl+C)
trap 'echo "Shutting down gracefully..."; kill 0' EXIT

echo "==========================================="
echo " Starting RV-5AS-D Control Center System "
echo "==========================================="

source ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws/install/setup.bash

echo ">> [1/3] Launching MELFA Driver..."
ros2 launch melfa_bringup rv5as_control.launch.py robot_ip:=192.168.0.20 use_fake_hardware:=false start_rviz:=false &
sleep 5

echo ">> [2/3] Launching MoveIt 2 Planner & RViz..."
ros2 launch melfa_rv5as_moveit_config rv5as_moveit.launch.py &
sleep 5

echo ">> [3/3] Starting Web Control Center Backend..."
cd ~/Desktop/Robotic_Arm_ROS2/web_ui
python3 app.py
