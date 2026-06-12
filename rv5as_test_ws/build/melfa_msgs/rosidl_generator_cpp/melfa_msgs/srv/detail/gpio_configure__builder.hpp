// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_
#define MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/srv/detail/gpio_configure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace srv
{

namespace builder
{

class Init_GpioConfigure_Request_bitmask
{
public:
  explicit Init_GpioConfigure_Request_bitmask(::melfa_msgs::srv::GpioConfigure_Request & msg)
  : msg_(msg)
  {}
  ::melfa_msgs::srv::GpioConfigure_Request bitmask(::melfa_msgs::srv::GpioConfigure_Request::_bitmask_type arg)
  {
    msg_.bitmask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::srv::GpioConfigure_Request msg_;
};

class Init_GpioConfigure_Request_bitdata
{
public:
  explicit Init_GpioConfigure_Request_bitdata(::melfa_msgs::srv::GpioConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_GpioConfigure_Request_bitmask bitdata(::melfa_msgs::srv::GpioConfigure_Request::_bitdata_type arg)
  {
    msg_.bitdata = std::move(arg);
    return Init_GpioConfigure_Request_bitmask(msg_);
  }

private:
  ::melfa_msgs::srv::GpioConfigure_Request msg_;
};

class Init_GpioConfigure_Request_mode
{
public:
  explicit Init_GpioConfigure_Request_mode(::melfa_msgs::srv::GpioConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_GpioConfigure_Request_bitdata mode(::melfa_msgs::srv::GpioConfigure_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GpioConfigure_Request_bitdata(msg_);
  }

private:
  ::melfa_msgs::srv::GpioConfigure_Request msg_;
};

class Init_GpioConfigure_Request_bitid
{
public:
  Init_GpioConfigure_Request_bitid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioConfigure_Request_mode bitid(::melfa_msgs::srv::GpioConfigure_Request::_bitid_type arg)
  {
    msg_.bitid = std::move(arg);
    return Init_GpioConfigure_Request_mode(msg_);
  }

private:
  ::melfa_msgs::srv::GpioConfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::srv::GpioConfigure_Request>()
{
  return melfa_msgs::srv::builder::Init_GpioConfigure_Request_bitid();
}

}  // namespace melfa_msgs


namespace melfa_msgs
{

namespace srv
{

namespace builder
{

class Init_GpioConfigure_Response_success
{
public:
  Init_GpioConfigure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::melfa_msgs::srv::GpioConfigure_Response success(::melfa_msgs::srv::GpioConfigure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::srv::GpioConfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::srv::GpioConfigure_Response>()
{
  return melfa_msgs::srv::builder::Init_GpioConfigure_Response_success();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_
