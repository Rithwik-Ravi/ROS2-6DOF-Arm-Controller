// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_
#define MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RQ_STOP'.
/**
  *    Licensed under the Apache License, Version 2.0 (the "License");
  *    you may not use this file except in compliance with the License.
  *    You may obtain a copy of the License at
  *        http://www.apache.org/licenses/LICENSE-2.0
  *    Unless required by applicable law or agreed to in writing, software
  *    distributed under the License is distributed on an "AS IS" BASIS,
  *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  *    See the License for the specific language governing permissions and
  *    limitations under the License.
  * Dedicated IO for R and Q
 */
enum
{
  melfa_msgs__srv__GpioConfigure_Request__RQ_STOP = 10000
};

/// Constant 'RQ_START'.
enum
{
  melfa_msgs__srv__GpioConfigure_Request__RQ_START = 10001
};

/// Constant 'RQ_ERRRESET'.
enum
{
  melfa_msgs__srv__GpioConfigure_Request__RQ_ERRRESET = 10009
};

/// Constant 'RQ_SRVON'.
enum
{
  melfa_msgs__srv__GpioConfigure_Request__RQ_SRVON = 10010
};

/// Constant 'RQ_SRVOFF'.
enum
{
  melfa_msgs__srv__GpioConfigure_Request__RQ_SRVOFF = 10011
};

/// Constant 'BIT_TOP_MODE'.
/**
  * Bit Mask Modes
 */
enum
{
  melfa_msgs__srv__GpioConfigure_Request__BIT_TOP_MODE = 1
};

/// Constant 'PACKET_MODE'.
enum
{
  melfa_msgs__srv__GpioConfigure_Request__PACKET_MODE = 65535
};

/// Constant 'SET_READ_OUT'.
/**
  * IO Configuration
  * READS entire 16 bit
 */
static const char * const melfa_msgs__srv__GpioConfigure_Request__SET_READ_OUT = "READ_OUT";

/// Constant 'SET_WRITE_OUT'.
/**
  * WRITES only the masked bits in bitmask
 */
static const char * const melfa_msgs__srv__GpioConfigure_Request__SET_WRITE_OUT = "WRITE_OUT";

/// Constant 'SET_READ_IN'.
/**
  * READS entire 16 bit
 */
static const char * const melfa_msgs__srv__GpioConfigure_Request__SET_READ_IN = "READ_IN";

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GpioConfigure in the package melfa_msgs.
typedef struct melfa_msgs__srv__GpioConfigure_Request
{
  /// Fields Required
  uint16_t bitid;
  rosidl_runtime_c__String mode;
  uint16_t bitdata;
  uint16_t bitmask;
} melfa_msgs__srv__GpioConfigure_Request;

// Struct for a sequence of melfa_msgs__srv__GpioConfigure_Request.
typedef struct melfa_msgs__srv__GpioConfigure_Request__Sequence
{
  melfa_msgs__srv__GpioConfigure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__srv__GpioConfigure_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GpioConfigure in the package melfa_msgs.
typedef struct melfa_msgs__srv__GpioConfigure_Response
{
  bool success;
} melfa_msgs__srv__GpioConfigure_Response;

// Struct for a sequence of melfa_msgs__srv__GpioConfigure_Response.
typedef struct melfa_msgs__srv__GpioConfigure_Response__Sequence
{
  melfa_msgs__srv__GpioConfigure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_msgs__srv__GpioConfigure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_
