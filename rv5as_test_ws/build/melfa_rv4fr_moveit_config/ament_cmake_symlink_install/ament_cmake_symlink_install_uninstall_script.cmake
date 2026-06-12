# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install_uninstall_script.cmake.in

set(install_manifest "/home/rithwik/Desktop/Robotic_Arm_ROS2/rv5as_test_ws/build/melfa_rv4fr_moveit_config/symlink_install_manifest.txt")
if(NOT EXISTS "${install_manifest}")
  message(FATAL_ERROR "Cannot find symlink install manifest: ${install_manifest}")
endif()

file(READ "${install_manifest}" installed_files)
string(REGEX REPLACE "\n" ";" installed_files "${installed_files}")
foreach(installed_file ${installed_files})
  if(EXISTS "${installed_file}" OR IS_SYMLINK "${installed_file}")
    message(STATUS "Uninstalling: ${installed_file}")
    file(REMOVE "${installed_file}")
    if(EXISTS "${installed_file}" OR IS_SYMLINK "${installed_file}")
      message(FATAL_ERROR "Failed to remove '${installed_file}'")
    endif()

    # remove empty parent folders
    get_filename_component(parent_path "${installed_file}" PATH)
    ament_cmake_uninstall_target_remove_empty_directories("${parent_path}")
  endif()
endforeach()
