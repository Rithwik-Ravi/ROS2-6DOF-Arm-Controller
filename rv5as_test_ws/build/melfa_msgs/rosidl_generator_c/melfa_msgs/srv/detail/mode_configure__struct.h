// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__STRUCT_H_
#define MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ModeConfigure in the package melfa_msgs.
typedef struct melfa_msgs__srv__ModeConfigure_Request
{
  ///    Licensed under the Apache License, Version 2.0 (the "License");
  ///    you may not use this file except in compliance with the License.
  ///    You may obtain a copy of the License at
  ///        http://www.apache.org/licenses/LICENSE-2.0
  ///    Unless required by applicable law or agreed to in writing, software
  ///    distributed under the License is distributed on an "AS IS" BASIS,
  ///    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ///    See the License for the specific language governing permissions and
  ///    limitations under the License.
  /// Binary IO control mode Fields Required
  bool hand_io_interface;
  bool plc_link_io_interface;
  bool safety_io_interface;
  bool io_unit_interface;
  bool misc1_io_interface;
  bool misc2_io_interface;
  bool misc3_io_interface;
} melfa_msgs__srv__ModeConfigure_Request;

// Struct for a sequence of melfa_msgs__srv__ModeConfigure_Request.
typedef struct melfa_msgs__srv__ModeConfigure_Request__Sequence
{
  melfa_msgs__srv__ModeConfigure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__srv__ModeConfigure_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ModeConfigure in the package melfa_msgs.
typedef struct melfa_msgs__srv__ModeConfigure_Response
{
  bool success;
} melfa_msgs__srv__ModeConfigure_Response;

// Struct for a sequence of melfa_msgs__srv__ModeConfigure_Response.
typedef struct melfa_msgs__srv__ModeConfigure_Response__Sequence
{
  melfa_msgs__srv__ModeConfigure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__srv__ModeConfigure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MSGS__SRV__DETAIL__MODE_CONFIGURE__STRUCT_H_
