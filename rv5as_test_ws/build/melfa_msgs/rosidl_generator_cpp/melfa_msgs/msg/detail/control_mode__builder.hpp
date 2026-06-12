// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
#define MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlMode_misc3_io_interface
{
public:
  explicit Init_ControlMode_misc3_io_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  ::melfa_msgs::msg::ControlMode misc3_io_interface(::melfa_msgs::msg::ControlMode::_misc3_io_interface_type arg)
  {
    msg_.misc3_io_interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_misc2_io_interface
{
public:
  explicit Init_ControlMode_misc2_io_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_misc3_io_interface misc2_io_interface(::melfa_msgs::msg::ControlMode::_misc2_io_interface_type arg)
  {
    msg_.misc2_io_interface = std::move(arg);
    return Init_ControlMode_misc3_io_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_misc1_io_interface
{
public:
  explicit Init_ControlMode_misc1_io_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_misc2_io_interface misc1_io_interface(::melfa_msgs::msg::ControlMode::_misc1_io_interface_type arg)
  {
    msg_.misc1_io_interface = std::move(arg);
    return Init_ControlMode_misc2_io_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_io_unit_interface
{
public:
  explicit Init_ControlMode_io_unit_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_misc1_io_interface io_unit_interface(::melfa_msgs::msg::ControlMode::_io_unit_interface_type arg)
  {
    msg_.io_unit_interface = std::move(arg);
    return Init_ControlMode_misc1_io_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_safety_io_interface
{
public:
  explicit Init_ControlMode_safety_io_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_io_unit_interface safety_io_interface(::melfa_msgs::msg::ControlMode::_safety_io_interface_type arg)
  {
    msg_.safety_io_interface = std::move(arg);
    return Init_ControlMode_io_unit_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_plc_link_io_interface
{
public:
  explicit Init_ControlMode_plc_link_io_interface(::melfa_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_safety_io_interface plc_link_io_interface(::melfa_msgs::msg::ControlMode::_plc_link_io_interface_type arg)
  {
    msg_.plc_link_io_interface = std::move(arg);
    return Init_ControlMode_safety_io_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_hand_io_interface
{
public:
  Init_ControlMode_hand_io_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMode_plc_link_io_interface hand_io_interface(::melfa_msgs::msg::ControlMode::_hand_io_interface_type arg)
  {
    msg_.hand_io_interface = std::move(arg);
    return Init_ControlMode_plc_link_io_interface(msg_);
  }

private:
  ::melfa_msgs::msg::ControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::msg::ControlMode>()
{
  return melfa_msgs::msg::builder::Init_ControlMode_hand_io_interface();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
