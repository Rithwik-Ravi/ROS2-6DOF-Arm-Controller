// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
#define MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_io_interface
  {
    out << "hand_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_io_interface, out);
    out << ", ";
  }

  // member: plc_link_io_interface
  {
    out << "plc_link_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.plc_link_io_interface, out);
    out << ", ";
  }

  // member: safety_io_interface
  {
    out << "safety_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_io_interface, out);
    out << ", ";
  }

  // member: io_unit_interface
  {
    out << "io_unit_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.io_unit_interface, out);
    out << ", ";
  }

  // member: misc1_io_interface
  {
    out << "misc1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc1_io_interface, out);
    out << ", ";
  }

  // member: misc2_io_interface
  {
    out << "misc2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc2_io_interface, out);
    out << ", ";
  }

  // member: misc3_io_interface
  {
    out << "misc3_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc3_io_interface, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_io_interface, out);
    out << "\n";
  }

  // member: plc_link_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plc_link_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.plc_link_io_interface, out);
    out << "\n";
  }

  // member: safety_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_io_interface, out);
    out << "\n";
  }

  // member: io_unit_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_unit_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.io_unit_interface, out);
    out << "\n";
  }

  // member: misc1_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "misc1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc1_io_interface, out);
    out << "\n";
  }

  // member: misc2_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "misc2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc2_io_interface, out);
    out << "\n";
  }

  // member: misc3_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "misc3_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.misc3_io_interface, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlMode & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace melfa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use melfa_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const melfa_msgs::msg::ControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::msg::ControlMode & msg)
{
  return melfa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::msg::ControlMode>()
{
  return "melfa_msgs::msg::ControlMode";
}

template<>
inline const char * name<melfa_msgs::msg::ControlMode>()
{
  return "melfa_msgs/msg/ControlMode";
}

template<>
struct has_fixed_size<melfa_msgs::msg::ControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<melfa_msgs::msg::ControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<melfa_msgs::msg::ControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
