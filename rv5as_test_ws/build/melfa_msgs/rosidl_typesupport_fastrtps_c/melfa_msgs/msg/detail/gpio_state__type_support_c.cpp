// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from melfa_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/msg/detail/gpio_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "melfa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "melfa_msgs/msg/detail/gpio_state__struct.h"
#include "melfa_msgs/msg/detail/gpio_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // bit_send_type, interface_name
#include "rosidl_runtime_c/string_functions.h"  // bit_send_type, interface_name

// forward declare type support functions


using _GpioState__ros_msg_type = melfa_msgs__msg__GpioState;

static bool _GpioState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GpioState__ros_msg_type * ros_message = static_cast<const _GpioState__ros_msg_type *>(untyped_ros_message);
  // Field name: interface_name
  {
    const rosidl_runtime_c__String * str = &ros_message->interface_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bitid
  {
    cdr << ros_message->bitid;
  }

  // Field name: bitmask
  {
    cdr << ros_message->bitmask;
  }

  // Field name: bit_send_type
  {
    const rosidl_runtime_c__String * str = &ros_message->bit_send_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: input_data
  {
    cdr << ros_message->input_data;
  }

  // Field name: output_data
  {
    cdr << ros_message->output_data;
  }

  return true;
}

static bool _GpioState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GpioState__ros_msg_type * ros_message = static_cast<_GpioState__ros_msg_type *>(untyped_ros_message);
  // Field name: interface_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->interface_name.data) {
      rosidl_runtime_c__String__init(&ros_message->interface_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->interface_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'interface_name'\n");
      return false;
    }
  }

  // Field name: bitid
  {
    cdr >> ros_message->bitid;
  }

  // Field name: bitmask
  {
    cdr >> ros_message->bitmask;
  }

  // Field name: bit_send_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bit_send_type.data) {
      rosidl_runtime_c__String__init(&ros_message->bit_send_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bit_send_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bit_send_type'\n");
      return false;
    }
  }

  // Field name: input_data
  {
    cdr >> ros_message->input_data;
  }

  // Field name: output_data
  {
    cdr >> ros_message->output_data;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t get_serialized_size_melfa_msgs__msg__GpioState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GpioState__ros_msg_type * ros_message = static_cast<const _GpioState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name interface_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->interface_name.size + 1);
  // field.name bitid
  {
    size_t item_size = sizeof(ros_message->bitid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bitmask
  {
    size_t item_size = sizeof(ros_message->bitmask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bit_send_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bit_send_type.size + 1);
  // field.name input_data
  {
    size_t item_size = sizeof(ros_message->input_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_data
  {
    size_t item_size = sizeof(ros_message->output_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GpioState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_melfa_msgs__msg__GpioState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_melfa_msgs
size_t max_serialized_size_melfa_msgs__msg__GpioState(
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

  // member: interface_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bitid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bitmask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bit_send_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: input_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: output_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = melfa_msgs__msg__GpioState;
    is_plain =
      (
      offsetof(DataType, output_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GpioState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_melfa_msgs__msg__GpioState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GpioState = {
  "melfa_msgs::msg",
  "GpioState",
  _GpioState__cdr_serialize,
  _GpioState__cdr_deserialize,
  _GpioState__get_serialized_size,
  _GpioState__max_serialized_size
};

static rosidl_message_type_support_t _GpioState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GpioState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, melfa_msgs, msg, GpioState)() {
  return &_GpioState__type_support;
}

#if defined(__cplusplus)
}
#endif
