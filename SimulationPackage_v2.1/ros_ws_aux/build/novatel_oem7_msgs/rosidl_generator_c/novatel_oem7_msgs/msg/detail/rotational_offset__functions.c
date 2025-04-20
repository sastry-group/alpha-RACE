// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/RotationalOffset.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rotational_offset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
novatel_oem7_msgs__msg__RotationalOffset__init(novatel_oem7_msgs__msg__RotationalOffset * msg)
{
  if (!msg) {
    return false;
  }
  // offset
  return true;
}

void
novatel_oem7_msgs__msg__RotationalOffset__fini(novatel_oem7_msgs__msg__RotationalOffset * msg)
{
  if (!msg) {
    return;
  }
  // offset
}

bool
novatel_oem7_msgs__msg__RotationalOffset__are_equal(const novatel_oem7_msgs__msg__RotationalOffset * lhs, const novatel_oem7_msgs__msg__RotationalOffset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__RotationalOffset__copy(
  const novatel_oem7_msgs__msg__RotationalOffset * input,
  novatel_oem7_msgs__msg__RotationalOffset * output)
{
  if (!input || !output) {
    return false;
  }
  // offset
  output->offset = input->offset;
  return true;
}

novatel_oem7_msgs__msg__RotationalOffset *
novatel_oem7_msgs__msg__RotationalOffset__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RotationalOffset * msg = (novatel_oem7_msgs__msg__RotationalOffset *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__RotationalOffset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__RotationalOffset));
  bool success = novatel_oem7_msgs__msg__RotationalOffset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__RotationalOffset__destroy(novatel_oem7_msgs__msg__RotationalOffset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__RotationalOffset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__RotationalOffset__Sequence__init(novatel_oem7_msgs__msg__RotationalOffset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RotationalOffset * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__RotationalOffset *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__RotationalOffset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__RotationalOffset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__RotationalOffset__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__RotationalOffset__Sequence__fini(novatel_oem7_msgs__msg__RotationalOffset__Sequence * array)
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
      novatel_oem7_msgs__msg__RotationalOffset__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__RotationalOffset__Sequence *
novatel_oem7_msgs__msg__RotationalOffset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RotationalOffset__Sequence * array = (novatel_oem7_msgs__msg__RotationalOffset__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__RotationalOffset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__RotationalOffset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__RotationalOffset__Sequence__destroy(novatel_oem7_msgs__msg__RotationalOffset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__RotationalOffset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__RotationalOffset__Sequence__are_equal(const novatel_oem7_msgs__msg__RotationalOffset__Sequence * lhs, const novatel_oem7_msgs__msg__RotationalOffset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__RotationalOffset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__RotationalOffset__Sequence__copy(
  const novatel_oem7_msgs__msg__RotationalOffset__Sequence * input,
  novatel_oem7_msgs__msg__RotationalOffset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__RotationalOffset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__RotationalOffset * data =
      (novatel_oem7_msgs__msg__RotationalOffset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__RotationalOffset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__RotationalOffset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__RotationalOffset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
