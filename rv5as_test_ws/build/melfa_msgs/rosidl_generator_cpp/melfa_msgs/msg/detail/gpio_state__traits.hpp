// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_
#define MELFA_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_msgs/msg/detail/gpio_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpioState & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface_name
  {
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << ", ";
  }

  // member: bitid
  {
    out << "bitid: ";
    rosidl_generator_traits::value_to_yaml(msg.bitid, out);
    out << ", ";
  }

  // member: bitmask
  {
    out << "bitmask: ";
    rosidl_generator_traits::value_to_yaml(msg.bitmask, out);
    out << ", ";
  }

  // member: bit_send_type
  {
    out << "bit_send_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bit_send_type, out);
    out << ", ";
  }

  // member: input_data
  {
    out << "input_data: ";
    rosidl_generator_traits::value_to_yaml(msg.input_data, out);
    out << ", ";
  }

  // member: output_data
  {
    out << "output_data: ";
    rosidl_generator_traits::value_to_yaml(msg.output_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interface_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << "\n";
  }

  // member: bitid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitid: ";
    rosidl_generator_traits::value_to_yaml(msg.bitid, out);
    out << "\n";
  }

  // member: bitmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitmask: ";
    rosidl_generator_traits::value_to_yaml(msg.bitmask, out);
    out << "\n";
  }

  // member: bit_send_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bit_send_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bit_send_type, out);
    out << "\n";
  }

  // member: input_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_data: ";
    rosidl_generator_traits::value_to_yaml(msg.input_data, out);
    out << "\n";
  }

  // member: output_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_data: ";
    rosidl_generator_traits::value_to_yaml(msg.output_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioState & msg, bool use_flow_style = false)
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
  const melfa_msgs::msg::GpioState & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::msg::GpioState & msg)
{
  return melfa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::msg::GpioState>()
{
  return "melfa_msgs::msg::GpioState";
}

template<>
inline const char * name<melfa_msgs::msg::GpioState>()
{
  return "melfa_msgs/msg/GpioState";
}

template<>
struct has_fixed_size<melfa_msgs::msg::GpioState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_msgs::msg::GpioState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_msgs::msg::GpioState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_
