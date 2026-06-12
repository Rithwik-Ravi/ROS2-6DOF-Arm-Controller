// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from melfa_msgs:msg/ControllerType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "melfa_msgs/msg/detail/controller_type__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace melfa_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ControllerType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) melfa_msgs::msg::ControllerType(_init);
}

void ControllerType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<melfa_msgs::msg::ControllerType *>(message_memory);
  typed_message->~ControllerType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerType_message_member_array[1] = {
  {
    "controller_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs::msg::ControllerType, controller_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerType_message_members = {
  "melfa_msgs::msg",  // message namespace
  "ControllerType",  // message name
  1,  // number of fields
  sizeof(melfa_msgs::msg::ControllerType),
  ControllerType_message_member_array,  // message members
  ControllerType_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerType_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace melfa_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<melfa_msgs::msg::ControllerType>()
{
  return &::melfa_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, melfa_msgs, msg, ControllerType)() {
  return &::melfa_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
