// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from melfa_msgs:msg/ControllerType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "melfa_msgs/msg/detail/controller_type__rosidl_typesupport_introspection_c.h"
#include "melfa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "melfa_msgs/msg/detail/controller_type__functions.h"
#include "melfa_msgs/msg/detail/controller_type__struct.h"


// Include directives for member types
// Member `controller_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  melfa_msgs__msg__ControllerType__init(message_memory);
}

void melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_fini_function(void * message_memory)
{
  melfa_msgs__msg__ControllerType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_member_array[1] = {
  {
    "controller_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__msg__ControllerType, controller_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_members = {
  "melfa_msgs__msg",  // message namespace
  "ControllerType",  // message name
  1,  // number of fields
  sizeof(melfa_msgs__msg__ControllerType),
  melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_member_array,  // message members
  melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_init_function,  // function to initialize message memory (memory has to be allocated)
  melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_type_support_handle = {
  0,
  &melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, msg, ControllerType)() {
  if (!melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_type_support_handle.typesupport_identifier) {
    melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &melfa_msgs__msg__ControllerType__rosidl_typesupport_introspection_c__ControllerType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
