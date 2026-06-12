// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_H_
#define MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bit_recv_type'
// Member 'bit_send_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GpioCommand in the package melfa_msgs.
/**
  * COPYRIGHT (C) 2024 Mitsubishi Electric Corporation
 */
typedef struct melfa_msgs__msg__GpioCommand
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
  /// BIT_TOP
  uint16_t bitid;
  /// BIT MASK
  uint16_t bitmask;
  /// RECIEVE TYPE
  rosidl_runtime_c__String bit_recv_type;
  /// SEND TYPE
  rosidl_runtime_c__String bit_send_type;
  /// BIT DATA
  uint16_t bitdata;
} melfa_msgs__msg__GpioCommand;

// Struct for a sequence of melfa_msgs__msg__GpioCommand.
typedef struct melfa_msgs__msg__GpioCommand__Sequence
{
  melfa_msgs__msg__GpioCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__msg__GpioCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MSGS__MSG__DETAIL__GPIO_COMMAND__STRUCT_H_
