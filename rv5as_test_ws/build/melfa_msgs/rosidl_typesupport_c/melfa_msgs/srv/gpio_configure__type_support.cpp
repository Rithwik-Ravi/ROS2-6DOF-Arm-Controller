// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "melfa_msgs/srv/detail/gpio_configure__struct.h"
#include "melfa_msgs/srv/detail/gpio_configure__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace melfa_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GpioConfigure_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GpioConfigure_Request_type_support_ids_t;

static const _GpioConfigure_Request_type_support_ids_t _GpioConfigure_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GpioConfigure_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GpioConfigure_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GpioConfigure_Request_type_support_symbol_names_t _GpioConfigure_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, GpioConfigure_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, GpioConfigure_Request)),
  }
};

typedef struct _GpioConfigure_Request_type_support_data_t
{
  void * data[2];
} _GpioConfigure_Request_type_support_data_t;

static _GpioConfigure_Request_type_support_data_t _GpioConfigure_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GpioConfigure_Request_message_typesupport_map = {
  2,
  "melfa_msgs",
  &_GpioConfigure_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GpioConfigure_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GpioConfigure_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GpioConfigure_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GpioConfigure_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace melfa_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, melfa_msgs, srv, GpioConfigure_Request)() {
  return &::melfa_msgs::srv::rosidl_typesupport_c::GpioConfigure_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "melfa_msgs/srv/detail/gpio_configure__struct.h"
// already included above
// #include "melfa_msgs/srv/detail/gpio_configure__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace melfa_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GpioConfigure_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GpioConfigure_Response_type_support_ids_t;

static const _GpioConfigure_Response_type_support_ids_t _GpioConfigure_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GpioConfigure_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GpioConfigure_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GpioConfigure_Response_type_support_symbol_names_t _GpioConfigure_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, GpioConfigure_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, GpioConfigure_Response)),
  }
};

typedef struct _GpioConfigure_Response_type_support_data_t
{
  void * data[2];
} _GpioConfigure_Response_type_support_data_t;

static _GpioConfigure_Response_type_support_data_t _GpioConfigure_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GpioConfigure_Response_message_typesupport_map = {
  2,
  "melfa_msgs",
  &_GpioConfigure_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GpioConfigure_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GpioConfigure_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GpioConfigure_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GpioConfigure_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace melfa_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, melfa_msgs, srv, GpioConfigure_Response)() {
  return &::melfa_msgs::srv::rosidl_typesupport_c::GpioConfigure_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "melfa_msgs/srv/detail/gpio_configure__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace melfa_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GpioConfigure_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GpioConfigure_type_support_ids_t;

static const _GpioConfigure_type_support_ids_t _GpioConfigure_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GpioConfigure_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GpioConfigure_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GpioConfigure_type_support_symbol_names_t _GpioConfigure_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, GpioConfigure)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, melfa_msgs, srv, GpioConfigure)),
  }
};

typedef struct _GpioConfigure_type_support_data_t
{
  void * data[2];
} _GpioConfigure_type_support_data_t;

static _GpioConfigure_type_support_data_t _GpioConfigure_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GpioConfigure_service_typesupport_map = {
  2,
  "melfa_msgs",
  &_GpioConfigure_service_typesupport_ids.typesupport_identifier[0],
  &_GpioConfigure_service_typesupport_symbol_names.symbol_name[0],
  &_GpioConfigure_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GpioConfigure_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GpioConfigure_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace melfa_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, melfa_msgs, srv, GpioConfigure)() {
  return &::melfa_msgs::srv::rosidl_typesupport_c::GpioConfigure_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
