// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__TRAITS_HPP_
#define MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_msgs/srv/detail/gpio_configure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GpioConfigure_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bitid
  {
    out << "bitid: ";
    rosidl_generator_traits::value_to_yaml(msg.bitid, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: bitdata
  {
    out << "bitdata: ";
    rosidl_generator_traits::value_to_yaml(msg.bitdata, out);
    out << ", ";
  }

  // member: bitmask
  {
    out << "bitmask: ";
    rosidl_generator_traits::value_to_yaml(msg.bitmask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioConfigure_Request & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
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

  // member: bitmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitmask: ";
    rosidl_generator_traits::value_to_yaml(msg.bitmask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioConfigure_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace melfa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use melfa_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const melfa_msgs::srv::GpioConfigure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::srv::GpioConfigure_Request & msg)
{
  return melfa_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::srv::GpioConfigure_Request>()
{
  return "melfa_msgs::srv::GpioConfigure_Request";
}

template<>
inline const char * name<melfa_msgs::srv::GpioConfigure_Request>()
{
  return "melfa_msgs/srv/GpioConfigure_Request";
}

template<>
struct has_fixed_size<melfa_msgs::srv::GpioConfigure_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_msgs::srv::GpioConfigure_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_msgs::srv::GpioConfigure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace melfa_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GpioConfigure_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioConfigure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioConfigure_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace melfa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use melfa_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const melfa_msgs::srv::GpioConfigure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const melfa_msgs::srv::GpioConfigure_Response & msg)
{
  return melfa_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_msgs::srv::GpioConfigure_Response>()
{
  return "melfa_msgs::srv::GpioConfigure_Response";
}

template<>
inline const char * name<melfa_msgs::srv::GpioConfigure_Response>()
{
  return "melfa_msgs/srv/GpioConfigure_Response";
}

template<>
struct has_fixed_size<melfa_msgs::srv::GpioConfigure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<melfa_msgs::srv::GpioConfigure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<melfa_msgs::srv::GpioConfigure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<melfa_msgs::srv::GpioConfigure>()
{
  return "melfa_msgs::srv::GpioConfigure";
}

template<>
inline const char * name<melfa_msgs::srv::GpioConfigure>()
{
  return "melfa_msgs/srv/GpioConfigure";
}

template<>
struct has_fixed_size<melfa_msgs::srv::GpioConfigure>
  : std::integral_constant<
    bool,
    has_fixed_size<melfa_msgs::srv::GpioConfigure_Request>::value &&
    has_fixed_size<melfa_msgs::srv::GpioConfigure_Response>::value
  >
{
};

template<>
struct has_bounded_size<melfa_msgs::srv::GpioConfigure>
  : std::integral_constant<
    bool,
    has_bounded_size<melfa_msgs::srv::GpioConfigure_Request>::value &&
    has_bounded_size<melfa_msgs::srv::GpioConfigure_Response>::value
  >
{
};

template<>
struct is_service<melfa_msgs::srv::GpioConfigure>
  : std::true_type
{
};

template<>
struct is_service_request<melfa_msgs::srv::GpioConfigure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<melfa_msgs::srv::GpioConfigure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__TRAITS_HPP_
