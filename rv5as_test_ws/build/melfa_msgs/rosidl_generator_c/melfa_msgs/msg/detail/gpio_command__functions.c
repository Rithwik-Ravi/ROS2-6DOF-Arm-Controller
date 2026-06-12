// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/msg/detail/gpio_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bit_recv_type`
// Member `bit_send_type`
#include "rosidl_runtime_c/string_functions.h"

bool
melfa_msgs__msg__GpioCommand__init(melfa_msgs__msg__GpioCommand * msg)
{
  if (!msg) {
    return false;
  }
  // bitid
  // bitmask
  // bit_recv_type
  if (!rosidl_runtime_c__String__init(&msg->bit_recv_type)) {
    melfa_msgs__msg__GpioCommand__fini(msg);
    return false;
  }
  // bit_send_type
  if (!rosidl_runtime_c__String__init(&msg->bit_send_type)) {
    melfa_msgs__msg__GpioCommand__fini(msg);
    return false;
  }
  // bitdata
  return true;
}

void
melfa_msgs__msg__GpioCommand__fini(melfa_msgs__msg__GpioCommand * msg)
{
  if (!msg) {
    return;
  }
  // bitid
  // bitmask
  // bit_recv_type
  rosidl_runtime_c__String__fini(&msg->bit_recv_type);
  // bit_send_type
  rosidl_runtime_c__String__fini(&msg->bit_send_type);
  // bitdata
}

bool
melfa_msgs__msg__GpioCommand__are_equal(const melfa_msgs__msg__GpioCommand * lhs, const melfa_msgs__msg__GpioCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bitid
  if (lhs->bitid != rhs->bitid) {
    return false;
  }
  // bitmask
  if (lhs->bitmask != rhs->bitmask) {
    return false;
  }
  // bit_recv_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bit_recv_type), &(rhs->bit_recv_type)))
  {
    return false;
  }
  // bit_send_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bit_send_type), &(rhs->bit_send_type)))
  {
    return false;
  }
  // bitdata
  if (lhs->bitdata != rhs->bitdata) {
    return false;
  }
  return true;
}

bool
melfa_msgs__msg__GpioCommand__copy(
  const melfa_msgs__msg__GpioCommand * input,
  melfa_msgs__msg__GpioCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // bitid
  output->bitid = input->bitid;
  // bitmask
  output->bitmask = input->bitmask;
  // bit_recv_type
  if (!rosidl_runtime_c__String__copy(
      &(input->bit_recv_type), &(output->bit_recv_type)))
  {
    return false;
  }
  // bit_send_type
  if (!rosidl_runtime_c__String__copy(
      &(input->bit_send_type), &(output->bit_send_type)))
  {
    return false;
  }
  // bitdata
  output->bitdata = input->bitdata;
  return true;
}

melfa_msgs__msg__GpioCommand *
melfa_msgs__msg__GpioCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__GpioCommand * msg = (melfa_msgs__msg__GpioCommand *)allocator.allocate(sizeof(melfa_msgs__msg__GpioCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_msgs__msg__GpioCommand));
  bool success = melfa_msgs__msg__GpioCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_msgs__msg__GpioCommand__destroy(melfa_msgs__msg__GpioCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_msgs__msg__GpioCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_msgs__msg__GpioCommand__Sequence__init(melfa_msgs__msg__GpioCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__GpioCommand * data = NULL;

  if (size) {
    data = (melfa_msgs__msg__GpioCommand *)allocator.zero_allocate(size, sizeof(melfa_msgs__msg__GpioCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_msgs__msg__GpioCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_msgs__msg__GpioCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
melfa_msgs__msg__GpioCommand__Sequence__fini(melfa_msgs__msg__GpioCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      melfa_msgs__msg__GpioCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

melfa_msgs__msg__GpioCommand__Sequence *
melfa_msgs__msg__GpioCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__GpioCommand__Sequence * array = (melfa_msgs__msg__GpioCommand__Sequence *)allocator.allocate(sizeof(melfa_msgs__msg__GpioCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_msgs__msg__GpioCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_msgs__msg__GpioCommand__Sequence__destroy(melfa_msgs__msg__GpioCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_msgs__msg__GpioCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_msgs__msg__GpioCommand__Sequence__are_equal(const melfa_msgs__msg__GpioCommand__Sequence * lhs, const melfa_msgs__msg__GpioCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_msgs__msg__GpioCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_msgs__msg__GpioCommand__Sequence__copy(
  const melfa_msgs__msg__GpioCommand__Sequence * input,
  melfa_msgs__msg__GpioCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_msgs__msg__GpioCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_msgs__msg__GpioCommand * data =
      (melfa_msgs__msg__GpioCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_msgs__msg__GpioCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_msgs__msg__GpioCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_msgs__msg__GpioCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
