// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message_name`
#include "rosidl_runtime_c/string_functions.h"

bool
novatel_oem7_msgs__msg__Oem7Header__init(novatel_oem7_msgs__msg__Oem7Header * msg)
{
  if (!msg) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__init(&msg->message_name)) {
    novatel_oem7_msgs__msg__Oem7Header__fini(msg);
    return false;
  }
  // message_id
  // message_type
  // sequence_number
  // time_status
  // gps_week_number
  // gps_week_milliseconds
  // idle_time
  return true;
}

void
novatel_oem7_msgs__msg__Oem7Header__fini(novatel_oem7_msgs__msg__Oem7Header * msg)
{
  if (!msg) {
    return;
  }
  // message_name
  rosidl_runtime_c__String__fini(&msg->message_name);
  // message_id
  // message_type
  // sequence_number
  // time_status
  // gps_week_number
  // gps_week_milliseconds
  // idle_time
}

bool
novatel_oem7_msgs__msg__Oem7Header__are_equal(const novatel_oem7_msgs__msg__Oem7Header * lhs, const novatel_oem7_msgs__msg__Oem7Header * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_name), &(rhs->message_name)))
  {
    return false;
  }
  // message_id
  if (lhs->message_id != rhs->message_id) {
    return false;
  }
  // message_type
  if (lhs->message_type != rhs->message_type) {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  // time_status
  if (lhs->time_status != rhs->time_status) {
    return false;
  }
  // gps_week_number
  if (lhs->gps_week_number != rhs->gps_week_number) {
    return false;
  }
  // gps_week_milliseconds
  if (lhs->gps_week_milliseconds != rhs->gps_week_milliseconds) {
    return false;
  }
  // idle_time
  if (lhs->idle_time != rhs->idle_time) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Oem7Header__copy(
  const novatel_oem7_msgs__msg__Oem7Header * input,
  novatel_oem7_msgs__msg__Oem7Header * output)
{
  if (!input || !output) {
    return false;
  }
  // message_name
  if (!rosidl_runtime_c__String__copy(
      &(input->message_name), &(output->message_name)))
  {
    return false;
  }
  // message_id
  output->message_id = input->message_id;
  // message_type
  output->message_type = input->message_type;
  // sequence_number
  output->sequence_number = input->sequence_number;
  // time_status
  output->time_status = input->time_status;
  // gps_week_number
  output->gps_week_number = input->gps_week_number;
  // gps_week_milliseconds
  output->gps_week_milliseconds = input->gps_week_milliseconds;
  // idle_time
  output->idle_time = input->idle_time;
  return true;
}

novatel_oem7_msgs__msg__Oem7Header *
novatel_oem7_msgs__msg__Oem7Header__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7Header * msg = (novatel_oem7_msgs__msg__Oem7Header *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Oem7Header), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__Oem7Header));
  bool success = novatel_oem7_msgs__msg__Oem7Header__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__Oem7Header__destroy(novatel_oem7_msgs__msg__Oem7Header * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__Oem7Header__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__Oem7Header__Sequence__init(novatel_oem7_msgs__msg__Oem7Header__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7Header * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__Oem7Header *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__Oem7Header), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__Oem7Header__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__Oem7Header__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__Oem7Header__Sequence__fini(novatel_oem7_msgs__msg__Oem7Header__Sequence * array)
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
      novatel_oem7_msgs__msg__Oem7Header__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__Oem7Header__Sequence *
novatel_oem7_msgs__msg__Oem7Header__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Oem7Header__Sequence * array = (novatel_oem7_msgs__msg__Oem7Header__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Oem7Header__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__Oem7Header__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__Oem7Header__Sequence__destroy(novatel_oem7_msgs__msg__Oem7Header__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__Oem7Header__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__Oem7Header__Sequence__are_equal(const novatel_oem7_msgs__msg__Oem7Header__Sequence * lhs, const novatel_oem7_msgs__msg__Oem7Header__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__Oem7Header__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Oem7Header__Sequence__copy(
  const novatel_oem7_msgs__msg__Oem7Header__Sequence * input,
  novatel_oem7_msgs__msg__Oem7Header__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__Oem7Header);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__Oem7Header * data =
      (novatel_oem7_msgs__msg__Oem7Header *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__Oem7Header__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__Oem7Header__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__Oem7Header__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
