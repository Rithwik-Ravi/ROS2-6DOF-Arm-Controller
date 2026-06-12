// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_
#define MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_msgs__srv__GpioConfigure_Request __attribute__((deprecated))
#else
# define DEPRECATED__melfa_msgs__srv__GpioConfigure_Request __declspec(deprecated)
#endif

namespace melfa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GpioConfigure_Request_
{
  using Type = GpioConfigure_Request_<ContainerAllocator>;

  explicit GpioConfigure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitid = 0;
      this->mode = "";
      this->bitdata = 0;
      this->bitmask = 0;
    }
  }

  explicit GpioConfigure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitid = 0;
      this->mode = "";
      this->bitdata = 0;
      this->bitmask = 0;
    }
  }

  // field types and members
  using _bitid_type =
    uint16_t;
  _bitid_type bitid;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _bitdata_type =
    uint16_t;
  _bitdata_type bitdata;
  using _bitmask_type =
    uint16_t;
  _bitmask_type bitmask;

  // setters for named parameter idiom
  Type & set__bitid(
    const uint16_t & _arg)
  {
    this->bitid = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__bitdata(
    const uint16_t & _arg)
  {
    this->bitdata = _arg;
    return *this;
  }
  Type & set__bitmask(
    const uint16_t & _arg)
  {
    this->bitmask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t RQ_STOP =
    10000;
  static constexpr int16_t RQ_START =
    10001;
  static constexpr int16_t RQ_ERRRESET =
    10009;
  static constexpr int16_t RQ_SRVON =
    10010;
  static constexpr int16_t RQ_SRVOFF =
    10011;
  static constexpr uint16_t BIT_TOP_MODE =
    1u;
  static constexpr uint16_t PACKET_MODE =
    65535u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SET_READ_OUT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SET_WRITE_OUT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SET_READ_IN;

  // pointer types
  using RawPtr =
    melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_msgs__srv__GpioConfigure_Request
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_msgs__srv__GpioConfigure_Request
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioConfigure_Request_ & other) const
  {
    if (this->bitid != other.bitid) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->bitdata != other.bitdata) {
      return false;
    }
    if (this->bitmask != other.bitmask) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioConfigure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioConfigure_Request_

// alias to use template instance with default allocator
using GpioConfigure_Request =
  melfa_msgs::srv::GpioConfigure_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpioConfigure_Request_<ContainerAllocator>::RQ_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpioConfigure_Request_<ContainerAllocator>::RQ_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpioConfigure_Request_<ContainerAllocator>::RQ_ERRRESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpioConfigure_Request_<ContainerAllocator>::RQ_SRVON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GpioConfigure_Request_<ContainerAllocator>::RQ_SRVOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GpioConfigure_Request_<ContainerAllocator>::BIT_TOP_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GpioConfigure_Request_<ContainerAllocator>::PACKET_MODE;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GpioConfigure_Request_<ContainerAllocator>::SET_READ_OUT = "READ_OUT";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GpioConfigure_Request_<ContainerAllocator>::SET_WRITE_OUT = "WRITE_OUT";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GpioConfigure_Request_<ContainerAllocator>::SET_READ_IN = "READ_IN";

}  // namespace srv

}  // namespace melfa_msgs


#ifndef _WIN32
# define DEPRECATED__melfa_msgs__srv__GpioConfigure_Response __attribute__((deprecated))
#else
# define DEPRECATED__melfa_msgs__srv__GpioConfigure_Response __declspec(deprecated)
#endif

namespace melfa_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GpioConfigure_Response_
{
  using Type = GpioConfigure_Response_<ContainerAllocator>;

  explicit GpioConfigure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GpioConfigure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_msgs__srv__GpioConfigure_Response
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_msgs__srv__GpioConfigure_Response
    std::shared_ptr<melfa_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioConfigure_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioConfigure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioConfigure_Response_

// alias to use template instance with default allocator
using GpioConfigure_Response =
  melfa_msgs::srv::GpioConfigure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace melfa_msgs

namespace melfa_msgs
{

namespace srv
{

struct GpioConfigure
{
  using Request = melfa_msgs::srv::GpioConfigure_Request;
  using Response = melfa_msgs::srv::GpioConfigure_Response;
};

}  // namespace srv

}  // namespace melfa_msgs

#endif  // MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_
