import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rithwik/Desktop/Robotic_Arm_ROS2/rv5as_test_ws/install/calligraphy_pkg'
