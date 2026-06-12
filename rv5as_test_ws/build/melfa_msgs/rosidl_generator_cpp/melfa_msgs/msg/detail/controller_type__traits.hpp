// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_msgs:msg/ControllerType.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__TRAITS_HPP_
#define MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_msgs/msg/detail/controller_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerType & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_type
  {
    out << "controller_type: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_type: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerType & msg, bool use_flow_style = false)
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
  const melfa_msgs::msg::ControllerType & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::msg::ControllerType & msg)
{
  return melfa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::msg::ControllerType>()
{
  return "melfa_msgs::msg::ControllerType";
}

template<>
inline const char * name<melfa_msgs::msg::ControllerType>()
{
  return "melfa_msgs/msg/ControllerType";
}

template<>
struct has_fixed_size<melfa_msgs::msg::ControllerType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_msgs::msg::ControllerType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_msgs::msg::ControllerType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__TRAITS_HPP_
