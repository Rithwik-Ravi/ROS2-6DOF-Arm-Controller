// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__TRAITS_HPP_
#define MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_msgs/msg/detail/gpio_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpioCommand & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: bit_recv_type
  {
    out << "bit_recv_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bit_recv_type, out);
    out << ", ";
  }

  // member: bit_send_type
  {
    out << "bit_send_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bit_send_type, out);
    out << ", ";
  }

  // member: bitdata
  {
    out << "bitdata: ";
    rosidl_generator_traits::value_to_yaml(msg.bitdata, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: bit_recv_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bit_recv_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bit_recv_type, out);
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

  // member: bitdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitdata: ";
    rosidl_generator_traits::value_to_yaml(msg.bitdata, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioCommand & msg, bool use_flow_style = false)
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
  const melfa_msgs::msg::GpioCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::msg::GpioCommand & msg)
{
  return melfa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::msg::GpioCommand>()
{
  return "melfa_msgs::msg::GpioCommand";
}

template<>
inline const char * name<melfa_msgs::msg::GpioCommand>()
{
  return "melfa_msgs/msg/GpioCommand";
}

template<>
struct has_fixed_size<melfa_msgs::msg::GpioCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_msgs::msg::GpioCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_msgs::msg::GpioCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__TRAITS_HPP_
