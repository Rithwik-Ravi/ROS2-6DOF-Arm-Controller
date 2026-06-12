// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice
#include "melfa_msgs/srv/detail/gpio_configure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
melfa_msgs__srv__GpioConfigure_Request__init(melfa_msgs__srv__GpioConfigure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bitid
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    melfa_msgs__srv__GpioConfigure_Request__fini(msg);
    return false;
  }
  // bitdata
  // bitmask
  return true;
}

void
melfa_msgs__srv__GpioConfigure_Request__fini(melfa_msgs__srv__GpioConfigure_Request * msg)
{
  if (!msg) {
    return;
  }
  // bitid
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // bitdata
  // bitmask
}

bool
melfa_msgs__srv__GpioConfigure_Request__are_equal(const melfa_msgs__srv__GpioConfigure_Request * lhs, const melfa_msgs__srv__GpioConfigure_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bitid
  if (lhs->bitid != rhs->bitid) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // bitdata
  if (lhs->bitdata != rhs->bitdata) {
    return false;
  }
  // bitmask
  if (lhs->bitmask != rhs->bitmask) {
    return false;
  }
  return true;
}

bool
melfa_msgs__srv__GpioConfigure_Request__copy(
  const melfa_msgs__srv__GpioConfigure_Request * input,
  melfa_msgs__srv__GpioConfigure_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // bitid
  output->bitid = input->bitid;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // bitdata
  output->bitdata = input->bitdata;
  // bitmask
  output->bitmask = input->bitmask;
  return true;
}

melfa_msgs__srv__GpioConfigure_Request *
melfa_msgs__srv__GpioConfigure_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Request * msg = (melfa_msgs__srv__GpioConfigure_Request *)allocator.allocate(sizeof(melfa_msgs__srv__GpioConfigure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_msgs__srv__GpioConfigure_Request));
  bool success = melfa_msgs__srv__GpioConfigure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_msgs__srv__GpioConfigure_Request__destroy(melfa_msgs__srv__GpioConfigure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_msgs__srv__GpioConfigure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_msgs__srv__GpioConfigure_Request__Sequence__init(melfa_msgs__srv__GpioConfigure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Request * data = NULL;

  if (size) {
    data = (melfa_msgs__srv__GpioConfigure_Request *)allocator.zero_allocate(size, sizeof(melfa_msgs__srv__GpioConfigure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_msgs__srv__GpioConfigure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_msgs__srv__GpioConfigure_Request__fini(&data[i - 1]);
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
melfa_msgs__srv__GpioConfigure_Request__Sequence__fini(melfa_msgs__srv__GpioConfigure_Request__Sequence * array)
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
      melfa_msgs__srv__GpioConfigure_Request__fini(&array->data[i]);
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

melfa_msgs__srv__GpioConfigure_Request__Sequence *
melfa_msgs__srv__GpioConfigure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Request__Sequence * array = (melfa_msgs__srv__GpioConfigure_Request__Sequence *)allocator.allocate(sizeof(melfa_msgs__srv__GpioConfigure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_msgs__srv__GpioConfigure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_msgs__srv__GpioConfigure_Request__Sequence__destroy(melfa_msgs__srv__GpioConfigure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_msgs__srv__GpioConfigure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_msgs__srv__GpioConfigure_Request__Sequence__are_equal(const melfa_msgs__srv__GpioConfigure_Request__Sequence * lhs, const melfa_msgs__srv__GpioConfigure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_msgs__srv__GpioConfigure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_msgs__srv__GpioConfigure_Request__Sequence__copy(
  const melfa_msgs__srv__GpioConfigure_Request__Sequence * input,
  melfa_msgs__srv__GpioConfigure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_msgs__srv__GpioConfigure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_msgs__srv__GpioConfigure_Request * data =
      (melfa_msgs__srv__GpioConfigure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_msgs__srv__GpioConfigure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_msgs__srv__GpioConfigure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_msgs__srv__GpioConfigure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
melfa_msgs__srv__GpioConfigure_Response__init(melfa_msgs__srv__GpioConfigure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
melfa_msgs__srv__GpioConfigure_Response__fini(melfa_msgs__srv__GpioConfigure_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
melfa_msgs__srv__GpioConfigure_Response__are_equal(const melfa_msgs__srv__GpioConfigure_Response * lhs, const melfa_msgs__srv__GpioConfigure_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
melfa_msgs__srv__GpioConfigure_Response__copy(
  const melfa_msgs__srv__GpioConfigure_Response * input,
  melfa_msgs__srv__GpioConfigure_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

melfa_msgs__srv__GpioConfigure_Response *
melfa_msgs__srv__GpioConfigure_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Response * msg = (melfa_msgs__srv__GpioConfigure_Response *)allocator.allocate(sizeof(melfa_msgs__srv__GpioConfigure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_msgs__srv__GpioConfigure_Response));
  bool success = melfa_msgs__srv__GpioConfigure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_msgs__srv__GpioConfigure_Response__destroy(melfa_msgs__srv__GpioConfigure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_msgs__srv__GpioConfigure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_msgs__srv__GpioConfigure_Response__Sequence__init(melfa_msgs__srv__GpioConfigure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Response * data = NULL;

  if (size) {
    data = (melfa_msgs__srv__GpioConfigure_Response *)allocator.zero_allocate(size, sizeof(melfa_msgs__srv__GpioConfigure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_msgs__srv__GpioConfigure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_msgs__srv__GpioConfigure_Response__fini(&data[i - 1]);
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
melfa_msgs__srv__GpioConfigure_Response__Sequence__fini(melfa_msgs__srv__GpioConfigure_Response__Sequence * array)
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
      melfa_msgs__srv__GpioConfigure_Response__fini(&array->data[i]);
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

melfa_msgs__srv__GpioConfigure_Response__Sequence *
melfa_msgs__srv__GpioConfigure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_msgs__srv__GpioConfigure_Response__Sequence * array = (melfa_msgs__srv__GpioConfigure_Response__Sequence *)allocator.allocate(sizeof(melfa_msgs__srv__GpioConfigure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_msgs__srv__GpioConfigure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_msgs__srv__GpioConfigure_Response__Sequence__destroy(melfa_msgs__srv__GpioConfigure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_msgs__srv__GpioConfigure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_msgs__srv__GpioConfigure_Response__Sequence__are_equal(const melfa_msgs__srv__GpioConfigure_Response__Sequence * lhs, const melfa_msgs__srv__GpioConfigure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_msgs__srv__GpioConfigure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_msgs__srv__GpioConfigure_Response__Sequence__copy(
  const melfa_msgs__srv__GpioConfigure_Response__Sequence * input,
  melfa_msgs__srv__GpioConfigure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_msgs__srv__GpioConfigure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_msgs__srv__GpioConfigure_Response * data =
      (melfa_msgs__srv__GpioConfigure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_msgs__srv__GpioConfigure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_msgs__srv__GpioConfigure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_msgs__srv__GpioConfigure_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
