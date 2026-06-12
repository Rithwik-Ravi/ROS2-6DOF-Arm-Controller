// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from melfa_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "melfa_msgs/srv/detail/mode_configure__rosidl_typesupport_introspection_c.h"
#include "melfa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "melfa_msgs/srv/detail/mode_configure__functions.h"
#include "melfa_msgs/srv/detail/mode_configure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  melfa_msgs__srv__ModeConfigure_Request__init(message_memory);
}

void melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_fini_function(void * message_memory)
{
  melfa_msgs__srv__ModeConfigure_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_member_array[7] = {
  {
    "hand_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, hand_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plc_link_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, plc_link_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, safety_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "io_unit_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, io_unit_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "misc1_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, misc1_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "misc2_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, misc2_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "misc3_io_interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Request, misc3_io_interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_members = {
  "melfa_msgs__srv",  // message namespace
  "ModeConfigure_Request",  // message name
  7,  // number of fields
  sizeof(melfa_msgs__srv__ModeConfigure_Request),
  melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_member_array,  // message members
  melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_type_support_handle = {
  0,
  &melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Request)() {
  if (!melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_type_support_handle.typesupport_identifier) {
    melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &melfa_msgs__srv__ModeConfigure_Request__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "melfa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__functions.h"
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  melfa_msgs__srv__ModeConfigure_Response__init(message_memory);
}

void melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_fini_function(void * message_memory)
{
  melfa_msgs__srv__ModeConfigure_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(melfa_msgs__srv__ModeConfigure_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_members = {
  "melfa_msgs__srv",  // message namespace
  "ModeConfigure_Response",  // message name
  1,  // number of fields
  sizeof(melfa_msgs__srv__ModeConfigure_Response),
  melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_member_array,  // message members
  melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_type_support_handle = {
  0,
  &melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Response)() {
  if (!melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_type_support_handle.typesupport_identifier) {
    melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &melfa_msgs__srv__ModeConfigure_Response__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "melfa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_members = {
  "melfa_msgs__srv",  // service namespace
  "ModeConfigure",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_Request_message_type_support_handle,
  NULL  // response message
  // melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_Response_message_type_support_handle
};

static rosidl_service_type_support_t melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_type_support_handle = {
  0,
  &melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_melfa_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure)() {
  if (!melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_type_support_handle.typesupport_identifier) {
    melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, ModeConfigure_Response)()->data;
  }

  return &melfa_msgs__srv__detail__mode_configure__rosidl_typesupport_introspection_c__ModeConfigure_service_type_support_handle;
}
