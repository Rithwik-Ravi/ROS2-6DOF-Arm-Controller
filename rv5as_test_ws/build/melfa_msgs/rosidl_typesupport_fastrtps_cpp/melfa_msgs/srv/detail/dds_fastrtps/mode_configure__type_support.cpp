// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from melfa_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/srv/detail/mode_configure__rosidl_typesupport_fastrtps_cpp.hpp"
#include "melfa_msgs/srv/detail/mode_configure__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
cdr_serialize(
  const melfa_msgs::srv::ModeConfigure_Request & ros_message,
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
  melfa_msgs::srv::ModeConfigure_Request & ros_message)
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
  const melfa_msgs::srv::ModeConfigure_Request & ros_message,
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
max_serialized_size_ModeConfigure_Request(
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
    using DataType = melfa_msgs::srv::ModeConfigure_Request;
    is_plain =
      (
      offsetof(DataType, misc3_io_interface) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ModeConfigure_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const melfa_msgs::srv::ModeConfigure_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModeConfigure_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<melfa_msgs::srv::ModeConfigure_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModeConfigure_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const melfa_msgs::srv::ModeConfigure_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModeConfigure_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ModeConfigure_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ModeConfigure_Request__callbacks = {
  "melfa_msgs::srv",
  "ModeConfigure_Request",
  _ModeConfigure_Request__cdr_serialize,
  _ModeConfigure_Request__cdr_deserialize,
  _ModeConfigure_Request__get_serialized_size,
  _ModeConfigure_Request__max_serialized_size
};

static rosidl_message_type_support_t _ModeConfigure_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ModeConfigure_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace melfa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<melfa_msgs::srv::ModeConfigure_Request>()
{
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, srv, ModeConfigure_Request)() {
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace melfa_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
cdr_serialize(
  const melfa_msgs::srv::ModeConfigure_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  melfa_msgs::srv::ModeConfigure_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
get_serialized_size(
  const melfa_msgs::srv::ModeConfigure_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_melfa_msgs
max_serialized_size_ModeConfigure_Response(
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


  // Member: success
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
    using DataType = melfa_msgs::srv::ModeConfigure_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ModeConfigure_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const melfa_msgs::srv::ModeConfigure_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModeConfigure_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<melfa_msgs::srv::ModeConfigure_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModeConfigure_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const melfa_msgs::srv::ModeConfigure_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModeConfigure_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ModeConfigure_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ModeConfigure_Response__callbacks = {
  "melfa_msgs::srv",
  "ModeConfigure_Response",
  _ModeConfigure_Response__cdr_serialize,
  _ModeConfigure_Response__cdr_deserialize,
  _ModeConfigure_Response__get_serialized_size,
  _ModeConfigure_Response__max_serialized_size
};

static rosidl_message_type_support_t _ModeConfigure_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ModeConfigure_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace melfa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_melfa_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<melfa_msgs::srv::ModeConfigure_Response>()
{
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, srv, ModeConfigure_Response)() {
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace melfa_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ModeConfigure__callbacks = {
  "melfa_msgs::srv",
  "ModeConfigure",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, srv, ModeConfigure_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, srv, ModeConfigure_Response)(),
};

static rosidl_service_type_support_t _ModeConfigure__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ModeConfigure__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace melfa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_melfa_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<melfa_msgs::srv::ModeConfigure>()
{
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, melfa_msgs, srv, ModeConfigure)() {
  return &melfa_msgs::srv::typesupport_fastrtps_cpp::_ModeConfigure__handle;
}

#ifdef __cplusplus
}
#endif
