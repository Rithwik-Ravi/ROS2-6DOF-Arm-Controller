// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_HPP_
#define MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_msgs__msg__GpioCommand __attribute__((deprecated))
#else
# define DEPRECATED__melfa_msgs__msg__GpioCommand __declspec(deprecated)
#endif

namespace melfa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpioCommand_
{
  using Type = GpioCommand_<ContainerAllocator>;

  explicit GpioCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitid = 0;
      this->bitmask = 0;
      this->bit_recv_type = "";
      this->bit_send_type = "";
      this->bitdata = 0;
    }
  }

  explicit GpioCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bit_recv_type(_alloc),
    bit_send_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitid = 0;
      this->bitmask = 0;
      this->bit_recv_type = "";
      this->bit_send_type = "";
      this->bitdata = 0;
    }
  }

  // field types and members
  using _bitid_type =
    uint16_t;
  _bitid_type bitid;
  using _bitmask_type =
    uint16_t;
  _bitmask_type bitmask;
  using _bit_recv_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bit_recv_type_type bit_recv_type;
  using _bit_send_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bit_send_type_type bit_send_type;
  using _bitdata_type =
    uint16_t;
  _bitdata_type bitdata;

  // setters for named parameter idiom
  Type & set__bitid(
    const uint16_t & _arg)
  {
    this->bitid = _arg;
    return *this;
  }
  Type & set__bitmask(
    const uint16_t & _arg)
  {
    this->bitmask = _arg;
    return *this;
  }
  Type & set__bit_recv_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bit_recv_type = _arg;
    return *this;
  }
  Type & set__bit_send_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bit_send_type = _arg;
    return *this;
  }
  Type & set__bitdata(
    const uint16_t & _arg)
  {
    this->bitdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_msgs::msg::GpioCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_msgs::msg::GpioCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::msg::GpioCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::msg::GpioCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_msgs__msg__GpioCommand
    std::shared_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_msgs__msg__GpioCommand
    std::shared_ptr<melfa_msgs::msg::GpioCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioCommand_ & other) const
  {
    if (this->bitid != other.bitid) {
      return false;
    }
    if (this->bitmask != other.bitmask) {
      return false;
    }
    if (this->bit_recv_type != other.bit_recv_type) {
      return false;
    }
    if (this->bit_send_type != other.bit_send_type) {
      return false;
    }
    if (this->bitdata != other.bitdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioCommand_

// alias to use template instance with default allocator
using GpioCommand =
  melfa_msgs::msg::GpioCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_HPP_
