// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
#define MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_msgs__msg__ControlMode __attribute__((deprecated))
#else
# define DEPRECATED__melfa_msgs__msg__ControlMode __declspec(deprecated)
#endif

namespace melfa_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlMode_
{
  using Type = ControlMode_<ContainerAllocator>;

  explicit ControlMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_io_interface = false;
      this->plc_link_io_interface = false;
      this->safety_io_interface = false;
      this->io_unit_interface = false;
      this->misc1_io_interface = false;
      this->misc2_io_interface = false;
      this->misc3_io_interface = false;
    }
  }

  explicit ControlMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_io_interface = false;
      this->plc_link_io_interface = false;
      this->safety_io_interface = false;
      this->io_unit_interface = false;
      this->misc1_io_interface = false;
      this->misc2_io_interface = false;
      this->misc3_io_interface = false;
    }
  }

  // field types and members
  using _hand_io_interface_type =
    bool;
  _hand_io_interface_type hand_io_interface;
  using _plc_link_io_interface_type =
    bool;
  _plc_link_io_interface_type plc_link_io_interface;
  using _safety_io_interface_type =
    bool;
  _safety_io_interface_type safety_io_interface;
  using _io_unit_interface_type =
    bool;
  _io_unit_interface_type io_unit_interface;
  using _misc1_io_interface_type =
    bool;
  _misc1_io_interface_type misc1_io_interface;
  using _misc2_io_interface_type =
    bool;
  _misc2_io_interface_type misc2_io_interface;
  using _misc3_io_interface_type =
    bool;
  _misc3_io_interface_type misc3_io_interface;

  // setters for named parameter idiom
  Type & set__hand_io_interface(
    const bool & _arg)
  {
    this->hand_io_interface = _arg;
    return *this;
  }
  Type & set__plc_link_io_interface(
    const bool & _arg)
  {
    this->plc_link_io_interface = _arg;
    return *this;
  }
  Type & set__safety_io_interface(
    const bool & _arg)
  {
    this->safety_io_interface = _arg;
    return *this;
  }
  Type & set__io_unit_interface(
    const bool & _arg)
  {
    this->io_unit_interface = _arg;
    return *this;
  }
  Type & set__misc1_io_interface(
    const bool & _arg)
  {
    this->misc1_io_interface = _arg;
    return *this;
  }
  Type & set__misc2_io_interface(
    const bool & _arg)
  {
    this->misc2_io_interface = _arg;
    return *this;
  }
  Type & set__misc3_io_interface(
    const bool & _arg)
  {
    this->misc3_io_interface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_msgs::msg::ControlMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_msgs::msg::ControlMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::msg::ControlMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::msg::ControlMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_msgs__msg__ControlMode
    std::shared_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_msgs__msg__ControlMode
    std::shared_ptr<melfa_msgs::msg::ControlMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMode_ & other) const
  {
    if (this->hand_io_interface != other.hand_io_interface) {
      return false;
    }
    if (this->plc_link_io_interface != other.plc_link_io_interface) {
      return false;
    }
    if (this->safety_io_interface != other.safety_io_interface) {
      return false;
    }
    if (this->io_unit_interface != other.io_unit_interface) {
      return false;
    }
    if (this->misc1_io_interface != other.misc1_io_interface) {
      return false;
    }
    if (this->misc2_io_interface != other.misc2_io_interface) {
      return false;
    }
    if (this->misc3_io_interface != other.misc3_io_interface) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMode_

// alias to use template instance with default allocator
using ControlMode =
  melfa_msgs::msg::ControlMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
