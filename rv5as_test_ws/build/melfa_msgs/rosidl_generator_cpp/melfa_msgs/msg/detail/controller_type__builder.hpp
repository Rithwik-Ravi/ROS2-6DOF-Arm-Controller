// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:msg/ControllerType.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__BUILDER_HPP_
#define MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/msg/detail/controller_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerType_controller_type
{
public:
  Init_ControllerType_controller_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::melfa_msgs::msg::ControllerType controller_type(::melfa_msgs::msg::ControllerType::_controller_type_type arg)
  {
    msg_.controller_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::msg::ControllerType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::msg::ControllerType>()
{
  return melfa_msgs::msg::builder::Init_ControllerType_controller_type();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__BUILDER_HPP_
