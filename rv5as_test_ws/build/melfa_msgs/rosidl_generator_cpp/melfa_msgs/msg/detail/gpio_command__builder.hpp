// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_
#define MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/msg/detail/gpio_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace msg
{

namespace builder
{

class Init_GpioCommand_bitdata
{
public:
  explicit Init_GpioCommand_bitdata(::melfa_msgs::msg::GpioCommand & msg)
  : msg_(msg)
  {}
  ::melfa_msgs::msg::GpioCommand bitdata(::melfa_msgs::msg::GpioCommand::_bitdata_type arg)
  {
    msg_.bitdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::msg::GpioCommand msg_;
};

class Init_GpioCommand_bit_send_type
{
public:
  explicit Init_GpioCommand_bit_send_type(::melfa_msgs::msg::GpioCommand & msg)
  : msg_(msg)
  {}
  Init_GpioCommand_bitdata bit_send_type(::melfa_msgs::msg::GpioCommand::_bit_send_type_type arg)
  {
    msg_.bit_send_type = std::move(arg);
    return Init_GpioCommand_bitdata(msg_);
  }

private:
  ::melfa_msgs::msg::GpioCommand msg_;
};

class Init_GpioCommand_bit_recv_type
{
public:
  explicit Init_GpioCommand_bit_recv_type(::melfa_msgs::msg::GpioCommand & msg)
  : msg_(msg)
  {}
  Init_GpioCommand_bit_send_type bit_recv_type(::melfa_msgs::msg::GpioCommand::_bit_recv_type_type arg)
  {
    msg_.bit_recv_type = std::move(arg);
    return Init_GpioCommand_bit_send_type(msg_);
  }

private:
  ::melfa_msgs::msg::GpioCommand msg_;
};

class Init_GpioCommand_bitmask
{
public:
  explicit Init_GpioCommand_bitmask(::melfa_msgs::msg::GpioCommand & msg)
  : msg_(msg)
  {}
  Init_GpioCommand_bit_recv_type bitmask(::melfa_msgs::msg::GpioCommand::_bitmask_type arg)
  {
    msg_.bitmask = std::move(arg);
    return Init_GpioCommand_bit_recv_type(msg_);
  }

private:
  ::melfa_msgs::msg::GpioCommand msg_;
};

class Init_GpioCommand_bitid
{
public:
  Init_GpioCommand_bitid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioCommand_bitmask bitid(::melfa_msgs::msg::GpioCommand::_bitid_type arg)
  {
    msg_.bitid = std::move(arg);
    return Init_GpioCommand_bitmask(msg_);
  }

private:
  ::melfa_msgs::msg::GpioCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::msg::GpioCommand>()
{
  return melfa_msgs::msg::builder::Init_GpioCommand_bitid();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_
