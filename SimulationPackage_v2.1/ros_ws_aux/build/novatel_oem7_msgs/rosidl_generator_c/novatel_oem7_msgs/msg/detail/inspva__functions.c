// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/INSPVA.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/inspva__functions.h"

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
// Member `status`
#include "novatel_oem7_msgs/msg/detail/inertial_solution_status__functions.h"

bool
novatel_oem7_msgs__msg__INSPVA__init(novatel_oem7_msgs__msg__INSPVA * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__INSPVA__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__INSPVA__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // height
  // north_velocity
  // east_velocity
  // up_velocity
  // roll
  // pitch
  // azimuth
  // status
  if (!novatel_oem7_msgs__msg__InertialSolutionStatus__init(&msg->status)) {
    novatel_oem7_msgs__msg__INSPVA__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__INSPVA__fini(novatel_oem7_msgs__msg__INSPVA * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // latitude
  // longitude
  // height
  // north_velocity
  // east_velocity
  // up_velocity
  // roll
  // pitch
  // azimuth
  // status
  novatel_oem7_msgs__msg__InertialSolutionStatus__fini(&msg->status);
}

bool
novatel_oem7_msgs__msg__INSPVA__are_equal(const novatel_oem7_msgs__msg__INSPVA * lhs, const novatel_oem7_msgs__msg__INSPVA * rhs)
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
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // north_velocity
  if (lhs->north_velocity != rhs->north_velocity) {
    return false;
  }
  // east_velocity
  if (lhs->east_velocity != rhs->east_velocity) {
    return false;
  }
  // up_velocity
  if (lhs->up_velocity != rhs->up_velocity) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // status
  if (!novatel_oem7_msgs__msg__InertialSolutionStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSPVA__copy(
  const novatel_oem7_msgs__msg__INSPVA * input,
  novatel_oem7_msgs__msg__INSPVA * output)
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
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height
  output->height = input->height;
  // north_velocity
  output->north_velocity = input->north_velocity;
  // east_velocity
  output->east_velocity = input->east_velocity;
  // up_velocity
  output->up_velocity = input->up_velocity;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // azimuth
  output->azimuth = input->azimuth;
  // status
  if (!novatel_oem7_msgs__msg__InertialSolutionStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__INSPVA *
novatel_oem7_msgs__msg__INSPVA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSPVA * msg = (novatel_oem7_msgs__msg__INSPVA *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSPVA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__INSPVA));
  bool success = novatel_oem7_msgs__msg__INSPVA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__INSPVA__destroy(novatel_oem7_msgs__msg__INSPVA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__INSPVA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__INSPVA__Sequence__init(novatel_oem7_msgs__msg__INSPVA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSPVA * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__INSPVA *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__INSPVA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__INSPVA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__INSPVA__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__INSPVA__Sequence__fini(novatel_oem7_msgs__msg__INSPVA__Sequence * array)
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
      novatel_oem7_msgs__msg__INSPVA__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__INSPVA__Sequence *
novatel_oem7_msgs__msg__INSPVA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSPVA__Sequence * array = (novatel_oem7_msgs__msg__INSPVA__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSPVA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__INSPVA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__INSPVA__Sequence__destroy(novatel_oem7_msgs__msg__INSPVA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__INSPVA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__INSPVA__Sequence__are_equal(const novatel_oem7_msgs__msg__INSPVA__Sequence * lhs, const novatel_oem7_msgs__msg__INSPVA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSPVA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSPVA__Sequence__copy(
  const novatel_oem7_msgs__msg__INSPVA__Sequence * input,
  novatel_oem7_msgs__msg__INSPVA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__INSPVA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__INSPVA * data =
      (novatel_oem7_msgs__msg__INSPVA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__INSPVA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__INSPVA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSPVA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
