// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_
#define MELFA_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_msgs/msg/detail/gpio_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_msgs
{

namespace msg
{

namespace builder
{

class Init_GpioState_output_data
{
public:
  explicit Init_GpioState_output_data(::melfa_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  ::melfa_msgs::msg::GpioState output_data(::melfa_msgs::msg::GpioState::_output_data_type arg)
  {
    msg_.output_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

class Init_GpioState_input_data
{
public:
  explicit Init_GpioState_input_data(::melfa_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_output_data input_data(::melfa_msgs::msg::GpioState::_input_data_type arg)
  {
    msg_.input_data = std::move(arg);
    return Init_GpioState_output_data(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

class Init_GpioState_bit_send_type
{
public:
  explicit Init_GpioState_bit_send_type(::melfa_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_input_data bit_send_type(::melfa_msgs::msg::GpioState::_bit_send_type_type arg)
  {
    msg_.bit_send_type = std::move(arg);
    return Init_GpioState_input_data(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

class Init_GpioState_bitmask
{
public:
  explicit Init_GpioState_bitmask(::melfa_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_bit_send_type bitmask(::melfa_msgs::msg::GpioState::_bitmask_type arg)
  {
    msg_.bitmask = std::move(arg);
    return Init_GpioState_bit_send_type(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

class Init_GpioState_bitid
{
public:
  explicit Init_GpioState_bitid(::melfa_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_bitmask bitid(::melfa_msgs::msg::GpioState::_bitid_type arg)
  {
    msg_.bitid = std::move(arg);
    return Init_GpioState_bitmask(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

class Init_GpioState_interface_name
{
public:
  Init_GpioState_interface_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioState_bitid interface_name(::melfa_msgs::msg::GpioState::_interface_name_type arg)
  {
    msg_.interface_name = std::move(arg);
    return Init_GpioState_bitid(msg_);
  }

private:
  ::melfa_msgs::msg::GpioState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_msgs::msg::GpioState>()
{
  return melfa_msgs::msg::builder::Init_GpioState_interface_name();
}

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_
