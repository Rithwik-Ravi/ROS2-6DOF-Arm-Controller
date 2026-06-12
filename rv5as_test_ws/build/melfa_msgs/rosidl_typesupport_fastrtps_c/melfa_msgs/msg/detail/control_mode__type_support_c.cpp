// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/msg/detail/control_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "melfa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "melfa_msgs/msg/detail/control_mode__struct.h"
#include "melfa_msgs/msg/detail/control_mode__functions.h"
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


using _ControlMode__ros_msg_type = melfa_msgs__msg__ControlMode;

static bool _ControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlMode__ros_msg_type * ros_message = static_cast<const _ControlMode__ros_msg_type *>(untyped_ros_message);
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

static bool _ControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlMode__ros_msg_type * ros_message = static_cast<_ControlMode__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_melfa_msgs__msg__ControlMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlMode__ros_msg_type * ros_message = static_cast<const _ControlMode__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ControlMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_melfa_msgs__msg__ControlMode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t max_serialized_size_melfa_msgs__msg__ControlMode(
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
    using DataType = melfa_msgs__msg__ControlMode;
    is_plain =
      (
      offsetof(DataType, misc3_io_interface) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_melfa_msgs__msg__ControlMode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlMode = {
  "melfa_msgs::msg",
  "ControlMode",
  _ControlMode__cdr_serialize,
  _ControlMode__cdr_deserialize,
  _ControlMode__get_serialized_size,
  _ControlMode__max_serialized_size
};

static rosidl_message_type_support_t _ControlMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlMode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, msg, ControlMode)() {
  return &_ControlMode__type_support;
}

#if defined(__cplusplus)
}
#endif
