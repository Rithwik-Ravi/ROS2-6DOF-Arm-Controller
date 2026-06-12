// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/msg/detail/control_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "melfa_msgs/msg/detail/control_mode__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace melfa_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
cdr_serialize(
  const melfa_msgs::msg::ControlMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hand_io_interface
  cdr << (ros_message.hand_io_interface ? true : false);
  // Member: plc_link_io_interface
  cdr << (ros_message.plc_link_io_interface ? true : false);
  // Member: safety_io_interface
  cdr << (ros_message.safety_io_interface ? true : false);
  // Member: io_unit_interface
  cdr << (ros_message.io_unit_interface ? true : false);
  // Member: misc1_io_interface
  cdr << (ros_message.misc1_io_interface ? true : false);
  // Member: misc2_io_interface
  cdr << (ros_message.misc2_io_interface ? true : false);
  // Member: misc3_io_interface
  cdr << (ros_message.misc3_io_interface ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  melfa_msgs::msg::ControlMode & ros_message)
{
  // Member: hand_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hand_io_interface = tmp ? true : false;
  }

  // Member: plc_link_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plc_link_io_interface = tmp ? true : false;
  }

  // Member: safety_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safety_io_interface = tmp ? true : false;
  }

  // Member: io_unit_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_unit_interface = tmp ? true : false;
  }

  // Member: misc1_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.misc1_io_interface = tmp ? true : false;
  }

  // Member: misc2_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.misc2_io_interface = tmp ? true : false;
  }

  // Member: misc3_io_interface
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.misc3_io_interface = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
get_serialized_size(
  const melfa_msgs::msg::ControlMode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hand_io_interface
  {
    size_t item_size = sizeof(ros_message.hand_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plc_link_io_interface
  {
    size_t item_size = sizeof(ros_message.plc_link_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_io_interface
  {
    size_t item_size = sizeof(ros_message.safety_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_unit_interface
  {
    size_t item_size = sizeof(ros_message.io_unit_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: misc1_io_interface
  {
    size_t item_size = sizeof(ros_message.misc1_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: misc2_io_interface
  {
    size_t item_size = sizeof(ros_message.misc2_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: misc3_io_interface
  {
    size_t item_size = sizeof(ros_message.misc3_io_interface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
max_serialized_size_ControlMode(
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


  // Member: hand_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plc_link_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_unit_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: misc1_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: misc2_io_interface
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: misc3_io_interface
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
    using DataType = melfa_msgs::msg::ControlMode;
    is_plain =
      (
      offsetof(DataType, misc3_io_interface) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const melfa_msgs::msg::ControlMode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<melfa_msgs::msg::ControlMode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlMode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const melfa_msgs::msg::ControlMode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlMode(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlMode__callbacks = {
  "melfa_msgs::msg",
  "ControlMode",
  _ControlMode__cdr_serialize,
  _ControlMode__cdr_deserialize,
  _ControlMode__get_serialized_size,
  _ControlMode__max_serialized_size
};

static rosidl_message_type_support_t _ControlMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlMode__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace melfa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<melfa_msgs::msg::ControlMode>()
{
  return &melfa_msgs::msg::typesupport_fastrtps_cpp::_ControlMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, msg, ControlMode)() {
  return &melfa_msgs::msg::typesupport_fastrtps_cpp::_ControlMode__handle;
}

#ifdef __cplusplus
}
#endif
