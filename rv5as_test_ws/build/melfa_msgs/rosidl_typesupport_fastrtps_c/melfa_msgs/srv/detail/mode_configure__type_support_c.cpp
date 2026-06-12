// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from melfa_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/srv/detail/mode_configure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "melfa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "melfa_msgs/srv/detail/mode_configure__struct.h"
#include "melfa_msgs/srv/detail/mode_configure__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ModeConfigure_Request__ros_msg_type = melfa_msgs__srv__ModeConfigure_Request;

static bool _ModeConfigure_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ModeConfigure_Request__ros_msg_type * ros_message = static_cast<const _ModeConfigure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_io_interface
  {
    cdr << (ros_message->hand_io_interface ? true : false);
  }

  // Field name: plc_link_io_interface
  {
    cdr << (ros_message->plc_link_io_interface ? true : false);
  }

  // Field name: safety_io_interface
  {
    cdr << (ros_message->safety_io_interface ? true : false);
  }

  // Field name: io_unit_interface
  {
    cdr << (ros_message->io_unit_interface ? true : false);
  }

  // Field name: misc1_io_interface
  {
    cdr << (ros_message->misc1_io_interface ? true : false);
  }

  // Field name: misc2_io_interface
  {
    cdr << (ros_message->misc2_io_interface ? true : false);
  }

  // Field name: misc3_io_interface
  {
    cdr << (ros_message->misc3_io_interface ? true : false);
  }

  return true;
}

static bool _ModeConfigure_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ModeConfigure_Request__ros_msg_type * ros_message = static_cast<_ModeConfigure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hand_io_interface = tmp ? true : false;
  }

  // Field name: plc_link_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plc_link_io_interface = tmp ? true : false;
  }

  // Field name: safety_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safety_io_interface = tmp ? true : false;
  }

  // Field name: io_unit_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_unit_interface = tmp ? true : false;
  }

  // Field name: misc1_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->misc1_io_interface = tmp ? true : false;
  }

  // Field name: misc2_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->misc2_io_interface = tmp ? true : false;
  }

  // Field name: misc3_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->misc3_io_interface = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t get_serialized_size_melfa_msgs__srv__ModeConfigure_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModeConfigure_Request__ros_msg_type * ros_message = static_cast<const _ModeConfigure_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hand_io_interface
  {
    size_t item_size = sizeof(ros_message->hand_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plc_link_io_interface
  {
    size_t item_size = sizeof(ros_message->plc_link_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_io_interface
  {
    size_t item_size = sizeof(ros_message->safety_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_unit_interface
  {
    size_t item_size = sizeof(ros_message->io_unit_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc1_io_interface
  {
    size_t item_size = sizeof(ros_message->misc1_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc2_io_interface
  {
    size_t item_size = sizeof(ros_message->misc2_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc3_io_interface
  {
    size_t item_size = sizeof(ros_message->misc3_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ModeConfigure_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_melfa_msgs__srv__ModeConfigure_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t max_serialized_size_melfa_msgs__srv__ModeConfigure_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: hand_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plc_link_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safety_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_unit_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: misc1_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: misc2_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: misc3_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = melfa_msgs__srv__ModeConfigure_Request;
    is_plain =
      (
      offsetof(DataType, misc3_io_interface) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ModeConfigure_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_melfa_msgs__srv__ModeConfigure_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ModeConfigure_Request = {
  "melfa_msgs::srv",
  "ModeConfigure_Request",
  _ModeConfigure_Request__cdr_serialize,
  _ModeConfigure_Request__cdr_deserialize,
  _ModeConfigure_Request__get_serialized_size,
  _ModeConfigure_Request__max_serialized_size
};

static rosidl_message_type_support_t _ModeConfigure_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModeConfigure_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, ModeConfigure_Request)() {
  return &_ModeConfigure_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "melfa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__struct.h"
// already included above
// #include "melfa_msgs/srv/detail/mode_configure__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ModeConfigure_Response__ros_msg_type = melfa_msgs__srv__ModeConfigure_Response;

static bool _ModeConfigure_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ModeConfigure_Response__ros_msg_type * ros_message = static_cast<const _ModeConfigure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ModeConfigure_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ModeConfigure_Response__ros_msg_type * ros_message = static_cast<_ModeConfigure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t get_serialized_size_melfa_msgs__srv__ModeConfigure_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModeConfigure_Response__ros_msg_type * ros_message = static_cast<const _ModeConfigure_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ModeConfigure_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_melfa_msgs__srv__ModeConfigure_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t max_serialized_size_melfa_msgs__srv__ModeConfigure_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = melfa_msgs__srv__ModeConfigure_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ModeConfigure_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_melfa_msgs__srv__ModeConfigure_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ModeConfigure_Response = {
  "melfa_msgs::srv",
  "ModeConfigure_Response",
  _ModeConfigure_Response__cdr_serialize,
  _ModeConfigure_Response__cdr_deserialize,
  _ModeConfigure_Response__get_serialized_size,
  _ModeConfigure_Response__max_serialized_size
};

static rosidl_message_type_support_t _ModeConfigure_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModeConfigure_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, ModeConfigure_Response)() {
  return &_ModeConfigure_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "melfa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "melfa_msgs/srv/mode_configure.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ModeConfigure__callbacks = {
  "melfa_msgs::srv",
  "ModeConfigure",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, ModeConfigure_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, ModeConfigure_Response)(),
};

static rosidl_service_type_support_t ModeConfigure__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ModeConfigure__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, srv, ModeConfigure)() {
  return &ModeConfigure__handle;
}

#if defined(__cplusplus)
}
#endif
