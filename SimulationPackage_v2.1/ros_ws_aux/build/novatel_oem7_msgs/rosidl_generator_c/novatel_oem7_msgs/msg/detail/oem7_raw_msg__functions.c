// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
novatel_oem7_msgs__msg__Oem7RawMsg__init(novatel_oem7_msgs__msg__Oem7RawMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__Oem7RawMsg__fini(msg);
    return false;
  }
  // message_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->message_data, 0)) {
    novatel_oem7_msgs__msg__Oem7RawMsg__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__Oem7RawMsg__fini(novatel_oem7_msgs__msg__Oem7RawMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->message_data);
}

bool
novatel_oem7_msgs__msg__Oem7RawMsg__are_equal(const novatel_oem7_msgs__msg__Oem7RawMsg * lhs, const novatel_oem7_msgs__msg__Oem7RawMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // message_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->message_data), &(rhs->message_data)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Oem7RawMsg__copy(
  const novatel_oem7_msgs__msg__Oem7RawMsg * input,
  novatel_oem7_msgs__msg__Oem7RawMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // message_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->message_data), &(output->message_data)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__Oem7RawMsg *
novatel_oem7_msgs__msg__Oem7RawMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7RawMsg * msg = (novatel_oem7_msgs__msg__Oem7RawMsg *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Oem7RawMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__Oem7RawMsg));
  bool success = novatel_oem7_msgs__msg__Oem7RawMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__Oem7RawMsg__destroy(novatel_oem7_msgs__msg__Oem7RawMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__Oem7RawMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__init(novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7RawMsg * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__Oem7RawMsg *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__Oem7RawMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__Oem7RawMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__Oem7RawMsg__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__fini(novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * array)
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
      novatel_oem7_msgs__msg__Oem7RawMsg__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__Oem7RawMsg__Sequence *
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * array = (novatel_oem7_msgs__msg__Oem7RawMsg__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Oem7RawMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__destroy(novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__are_equal(const novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * lhs, const novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__Oem7RawMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Oem7RawMsg__Sequence__copy(
  const novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * input,
  novatel_oem7_msgs__msg__Oem7RawMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__Oem7RawMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__Oem7RawMsg * data =
      (novatel_oem7_msgs__msg__Oem7RawMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__Oem7RawMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__Oem7RawMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__Oem7RawMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
