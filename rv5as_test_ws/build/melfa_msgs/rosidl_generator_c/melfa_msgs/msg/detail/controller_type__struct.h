// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_msgs:msg/ControllerType.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__STRUCT_H_
#define MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'controller_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControllerType in the package melfa_msgs.
/**
  * COPYRIGHT (C) 2024 Mitsubishi Electric Corporation
 */
typedef struct melfa_msgs__msg__ControllerType
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
  /// Controller Type
  rosidl_runtime_c__String controller_type;
} melfa_msgs__msg__ControllerType;

// Struct for a sequence of melfa_msgs__msg__ControllerType.
typedef struct melfa_msgs__msg__ControllerType__Sequence
{
  melfa_msgs__msg__ControllerType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__msg__ControllerType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MSGS__MSG__DETAIL__CONTROLLER_TYPE__STRUCT_H_
