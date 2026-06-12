// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_
#define MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/srv/detail/mode_configure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace srv
{

namespace builder
{

class Init_ModeConfigure_Request_misc3_io_interface
{
public:
  explicit Init_ModeConfigure_Request_misc3_io_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  ::melfa_msgs::srv::ModeConfigure_Request misc3_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_misc3_io_interface_type arg)
  {
    msg_.misc3_io_interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_misc2_io_interface
{
public:
  explicit Init_ModeConfigure_Request_misc2_io_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_misc3_io_interface misc2_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_misc2_io_interface_type arg)
  {
    msg_.misc2_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_misc3_io_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_misc1_io_interface
{
public:
  explicit Init_ModeConfigure_Request_misc1_io_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_misc2_io_interface misc1_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_misc1_io_interface_type arg)
  {
    msg_.misc1_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_misc2_io_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_io_unit_interface
{
public:
  explicit Init_ModeConfigure_Request_io_unit_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_misc1_io_interface io_unit_interface(::melfa_msgs::srv::ModeConfigure_Request::_io_unit_interface_type arg)
  {
    msg_.io_unit_interface = std::move(arg);
    return Init_ModeConfigure_Request_misc1_io_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_safety_io_interface
{
public:
  explicit Init_ModeConfigure_Request_safety_io_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_io_unit_interface safety_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_safety_io_interface_type arg)
  {
    msg_.safety_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_io_unit_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_plc_link_io_interface
{
public:
  explicit Init_ModeConfigure_Request_plc_link_io_interface(::melfa_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_safety_io_interface plc_link_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_plc_link_io_interface_type arg)
  {
    msg_.plc_link_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_safety_io_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_hand_io_interface
{
public:
  Init_ModeConfigure_Request_hand_io_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeConfigure_Request_plc_link_io_interface hand_io_interface(::melfa_msgs::srv::ModeConfigure_Request::_hand_io_interface_type arg)
  {
    msg_.hand_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_plc_link_io_interface(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::srv::ModeConfigure_Request>()
{
  return melfa_msgs::srv::builder::Init_ModeConfigure_Request_hand_io_interface();
}

}  // namespace melfa_msgs


namespace melfa_msgs
{

namespace srv
{

namespace builder
{

class Init_ModeConfigure_Response_success
{
public:
  Init_ModeConfigure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::melfa_msgs::srv::ModeConfigure_Response success(::melfa_msgs::srv::ModeConfigure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::srv::ModeConfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::srv::ModeConfigure_Response>()
{
  return melfa_msgs::srv::builder::Init_ModeConfigure_Response_success();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_
