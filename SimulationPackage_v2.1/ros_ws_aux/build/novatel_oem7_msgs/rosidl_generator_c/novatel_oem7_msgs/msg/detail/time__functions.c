// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/TIME.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"

bool
novatel_oem7_msgs__msg__TIME__init(novatel_oem7_msgs__msg__TIME * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__TIME__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__TIME__fini(msg);
    return false;
  }
  // clock_status
  // offset
  // offset_std
  // utc_offset
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_min
  // utc_msec
  // utc_status
  return true;
}

void
novatel_oem7_msgs__msg__TIME__fini(novatel_oem7_msgs__msg__TIME * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // clock_status
  // offset
  // offset_std
  // utc_offset
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_min
  // utc_msec
  // utc_status
}

bool
novatel_oem7_msgs__msg__TIME__are_equal(const novatel_oem7_msgs__msg__TIME * lhs, const novatel_oem7_msgs__msg__TIME * rhs)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__are_equal(
      &(lhs->nov_header), &(rhs->nov_header)))
  {
    return false;
  }
  // clock_status
  if (lhs->clock_status != rhs->clock_status) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // offset_std
  if (lhs->offset_std != rhs->offset_std) {
    return false;
  }
  // utc_offset
  if (lhs->utc_offset != rhs->utc_offset) {
    return false;
  }
  // utc_year
  if (lhs->utc_year != rhs->utc_year) {
    return false;
  }
  // utc_month
  if (lhs->utc_month != rhs->utc_month) {
    return false;
  }
  // utc_day
  if (lhs->utc_day != rhs->utc_day) {
    return false;
  }
  // utc_hour
  if (lhs->utc_hour != rhs->utc_hour) {
    return false;
  }
  // utc_min
  if (lhs->utc_min != rhs->utc_min) {
    return false;
  }
  // utc_msec
  if (lhs->utc_msec != rhs->utc_msec) {
    return false;
  }
  // utc_status
  if (lhs->utc_status != rhs->utc_status) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__TIME__copy(
  const novatel_oem7_msgs__msg__TIME * input,
  novatel_oem7_msgs__msg__TIME * output)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__copy(
      &(input->nov_header), &(output->nov_header)))
  {
    return false;
  }
  // clock_status
  output->clock_status = input->clock_status;
  // offset
  output->offset = input->offset;
  // offset_std
  output->offset_std = input->offset_std;
  // utc_offset
  output->utc_offset = input->utc_offset;
  // utc_year
  output->utc_year = input->utc_year;
  // utc_month
  output->utc_month = input->utc_month;
  // utc_day
  output->utc_day = input->utc_day;
  // utc_hour
  output->utc_hour = input->utc_hour;
  // utc_min
  output->utc_min = input->utc_min;
  // utc_msec
  output->utc_msec = input->utc_msec;
  // utc_status
  output->utc_status = input->utc_status;
  return true;
}

novatel_oem7_msgs__msg__TIME *
novatel_oem7_msgs__msg__TIME__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__TIME * msg = (novatel_oem7_msgs__msg__TIME *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__TIME), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__TIME));
  bool success = novatel_oem7_msgs__msg__TIME__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__TIME__destroy(novatel_oem7_msgs__msg__TIME * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__TIME__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__TIME__Sequence__init(novatel_oem7_msgs__msg__TIME__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__TIME * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__TIME *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__TIME), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__TIME__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__TIME__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__TIME__Sequence__fini(novatel_oem7_msgs__msg__TIME__Sequence * array)
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
      novatel_oem7_msgs__msg__TIME__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__TIME__Sequence *
novatel_oem7_msgs__msg__TIME__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__TIME__Sequence * array = (novatel_oem7_msgs__msg__TIME__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__TIME__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__TIME__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__TIME__Sequence__destroy(novatel_oem7_msgs__msg__TIME__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__TIME__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__TIME__Sequence__are_equal(const novatel_oem7_msgs__msg__TIME__Sequence * lhs, const novatel_oem7_msgs__msg__TIME__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__TIME__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__TIME__Sequence__copy(
  const novatel_oem7_msgs__msg__TIME__Sequence * input,
  novatel_oem7_msgs__msg__TIME__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__TIME);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__TIME * data =
      (novatel_oem7_msgs__msg__TIME *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__TIME__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__TIME__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__TIME__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
