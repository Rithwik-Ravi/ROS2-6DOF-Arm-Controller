// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/msg/detail/control_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
melfa_msgs__msg__ControlMode__init(melfa_msgs__msg__ControlMode * msg)
{
  if (!msg) {
    return false;
  }
  // hand_io_interface
  // plc_link_io_interface
  // safety_io_interface
  // io_unit_interface
  // misc1_io_interface
  // misc2_io_interface
  // misc3_io_interface
  return true;
}

void
melfa_msgs__msg__ControlMode__fini(melfa_msgs__msg__ControlMode * msg)
{
  if (!msg) {
    return;
  }
  // hand_io_interface
  // plc_link_io_interface
  // safety_io_interface
  // io_unit_interface
  // misc1_io_interface
  // misc2_io_interface
  // misc3_io_interface
}

bool
melfa_msgs__msg__ControlMode__are_equal(const melfa_msgs__msg__ControlMode * lhs, const melfa_msgs__msg__ControlMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hand_io_interface
  if (lhs->hand_io_interface != rhs->hand_io_interface) {
    return false;
  }
  // plc_link_io_interface
  if (lhs->plc_link_io_interface != rhs->plc_link_io_interface) {
    return false;
  }
  // safety_io_interface
  if (lhs->safety_io_interface != rhs->safety_io_interface) {
    return false;
  }
  // io_unit_interface
  if (lhs->io_unit_interface != rhs->io_unit_interface) {
    return false;
  }
  // misc1_io_interface
  if (lhs->misc1_io_interface != rhs->misc1_io_interface) {
    return false;
  }
  // misc2_io_interface
  if (lhs->misc2_io_interface != rhs->misc2_io_interface) {
    return false;
  }
  // misc3_io_interface
  if (lhs->misc3_io_interface != rhs->misc3_io_interface) {
    return false;
  }
  return true;
}

bool
melfa_msgs__msg__ControlMode__copy(
  const melfa_msgs__msg__ControlMode * input,
  melfa_msgs__msg__ControlMode * output)
{
  if (!input || !output) {
    return false;
  }
  // hand_io_interface
  output->hand_io_interface = input->hand_io_interface;
  // plc_link_io_interface
  output->plc_link_io_interface = input->plc_link_io_interface;
  // safety_io_interface
  output->safety_io_interface = input->safety_io_interface;
  // io_unit_interface
  output->io_unit_interface = input->io_unit_interface;
  // misc1_io_interface
  output->misc1_io_interface = input->misc1_io_interface;
  // misc2_io_interface
  output->misc2_io_interface = input->misc2_io_interface;
  // misc3_io_interface
  output->misc3_io_interface = input->misc3_io_interface;
  return true;
}

melfa_msgs__msg__ControlMode *
melfa_msgs__msg__ControlMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__ControlMode * msg = (melfa_msgs__msg__ControlMode *)allocator.allocate(sizeof(melfa_msgs__msg__ControlMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_msgs__msg__ControlMode));
  bool success = melfa_msgs__msg__ControlMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_msgs__msg__ControlMode__destroy(melfa_msgs__msg__ControlMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_msgs__msg__ControlMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_msgs__msg__ControlMode__Sequence__init(melfa_msgs__msg__ControlMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__ControlMode * data = NULL;

  if (size) {
    data = (melfa_msgs__msg__ControlMode *)allocator.zero_allocate(size, sizeof(melfa_msgs__msg__ControlMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_msgs__msg__ControlMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_msgs__msg__ControlMode__fini(&data[i - 1]);
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
melfa_msgs__msg__ControlMode__Sequence__fini(melfa_msgs__msg__ControlMode__Sequence * array)
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
      melfa_msgs__msg__ControlMode__fini(&array->data[i]);
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

melfa_msgs__msg__ControlMode__Sequence *
melfa_msgs__msg__ControlMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__msg__ControlMode__Sequence * array = (melfa_msgs__msg__ControlMode__Sequence *)allocator.allocate(sizeof(melfa_msgs__msg__ControlMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_msgs__msg__ControlMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_msgs__msg__ControlMode__Sequence__destroy(melfa_msgs__msg__ControlMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_msgs__msg__ControlMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_msgs__msg__ControlMode__Sequence__are_equal(const melfa_msgs__msg__ControlMode__Sequence * lhs, const melfa_msgs__msg__ControlMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_msgs__msg__ControlMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_msgs__msg__ControlMode__Sequence__copy(
  const melfa_msgs__msg__ControlMode__Sequence * input,
  melfa_msgs__msg__ControlMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_msgs__msg__ControlMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_msgs__msg__ControlMode * data =
      (melfa_msgs__msg__ControlMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_msgs__msg__ControlMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_msgs__msg__ControlMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_msgs__msg__ControlMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
