// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/insstdev__functions.h"

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
// Member `ext_sol_status`
#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__functions.h"

bool
novatel_oem7_msgs__msg__INSSTDEV__init(novatel_oem7_msgs__msg__INSSTDEV * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__INSSTDEV__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__INSSTDEV__fini(msg);
    return false;
  }
  // latitude_stdev
  // longitude_stdev
  // height_stdev
  // north_velocity_stdev
  // east_velocity_stdev
  // up_velocity_stdev
  // roll_stdev
  // pitch_stdev
  // azimuth_stdev
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__INSExtendedSolutionStatus__init(&msg->ext_sol_status)) {
    novatel_oem7_msgs__msg__INSSTDEV__fini(msg);
    return false;
  }
  // time_since_last_update
  // reserved1
  // reserved2
  // reserved3
  return true;
}

void
novatel_oem7_msgs__msg__INSSTDEV__fini(novatel_oem7_msgs__msg__INSSTDEV * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // latitude_stdev
  // longitude_stdev
  // height_stdev
  // north_velocity_stdev
  // east_velocity_stdev
  // up_velocity_stdev
  // roll_stdev
  // pitch_stdev
  // azimuth_stdev
  // ext_sol_status
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__fini(&msg->ext_sol_status);
  // time_since_last_update
  // reserved1
  // reserved2
  // reserved3
}

bool
novatel_oem7_msgs__msg__INSSTDEV__are_equal(const novatel_oem7_msgs__msg__INSSTDEV * lhs, const novatel_oem7_msgs__msg__INSSTDEV * rhs)
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
  // latitude_stdev
  if (lhs->latitude_stdev != rhs->latitude_stdev) {
    return false;
  }
  // longitude_stdev
  if (lhs->longitude_stdev != rhs->longitude_stdev) {
    return false;
  }
  // height_stdev
  if (lhs->height_stdev != rhs->height_stdev) {
    return false;
  }
  // north_velocity_stdev
  if (lhs->north_velocity_stdev != rhs->north_velocity_stdev) {
    return false;
  }
  // east_velocity_stdev
  if (lhs->east_velocity_stdev != rhs->east_velocity_stdev) {
    return false;
  }
  // up_velocity_stdev
  if (lhs->up_velocity_stdev != rhs->up_velocity_stdev) {
    return false;
  }
  // roll_stdev
  if (lhs->roll_stdev != rhs->roll_stdev) {
    return false;
  }
  // pitch_stdev
  if (lhs->pitch_stdev != rhs->pitch_stdev) {
    return false;
  }
  // azimuth_stdev
  if (lhs->azimuth_stdev != rhs->azimuth_stdev) {
    return false;
  }
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__INSExtendedSolutionStatus__are_equal(
      &(lhs->ext_sol_status), &(rhs->ext_sol_status)))
  {
    return false;
  }
  // time_since_last_update
  if (lhs->time_since_last_update != rhs->time_since_last_update) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // reserved2
  if (lhs->reserved2 != rhs->reserved2) {
    return false;
  }
  // reserved3
  if (lhs->reserved3 != rhs->reserved3) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSSTDEV__copy(
  const novatel_oem7_msgs__msg__INSSTDEV * input,
  novatel_oem7_msgs__msg__INSSTDEV * output)
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
  // latitude_stdev
  output->latitude_stdev = input->latitude_stdev;
  // longitude_stdev
  output->longitude_stdev = input->longitude_stdev;
  // height_stdev
  output->height_stdev = input->height_stdev;
  // north_velocity_stdev
  output->north_velocity_stdev = input->north_velocity_stdev;
  // east_velocity_stdev
  output->east_velocity_stdev = input->east_velocity_stdev;
  // up_velocity_stdev
  output->up_velocity_stdev = input->up_velocity_stdev;
  // roll_stdev
  output->roll_stdev = input->roll_stdev;
  // pitch_stdev
  output->pitch_stdev = input->pitch_stdev;
  // azimuth_stdev
  output->azimuth_stdev = input->azimuth_stdev;
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__INSExtendedSolutionStatus__copy(
      &(input->ext_sol_status), &(output->ext_sol_status)))
  {
    return false;
  }
  // time_since_last_update
  output->time_since_last_update = input->time_since_last_update;
  // reserved1
  output->reserved1 = input->reserved1;
  // reserved2
  output->reserved2 = input->reserved2;
  // reserved3
  output->reserved3 = input->reserved3;
  return true;
}

novatel_oem7_msgs__msg__INSSTDEV *
novatel_oem7_msgs__msg__INSSTDEV__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSSTDEV * msg = (novatel_oem7_msgs__msg__INSSTDEV *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSSTDEV), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__INSSTDEV));
  bool success = novatel_oem7_msgs__msg__INSSTDEV__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__INSSTDEV__destroy(novatel_oem7_msgs__msg__INSSTDEV * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__INSSTDEV__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__INSSTDEV__Sequence__init(novatel_oem7_msgs__msg__INSSTDEV__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSSTDEV * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__INSSTDEV *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__INSSTDEV), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__INSSTDEV__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__INSSTDEV__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__INSSTDEV__Sequence__fini(novatel_oem7_msgs__msg__INSSTDEV__Sequence * array)
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
      novatel_oem7_msgs__msg__INSSTDEV__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__INSSTDEV__Sequence *
novatel_oem7_msgs__msg__INSSTDEV__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSSTDEV__Sequence * array = (novatel_oem7_msgs__msg__INSSTDEV__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSSTDEV__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__INSSTDEV__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__INSSTDEV__Sequence__destroy(novatel_oem7_msgs__msg__INSSTDEV__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__INSSTDEV__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__INSSTDEV__Sequence__are_equal(const novatel_oem7_msgs__msg__INSSTDEV__Sequence * lhs, const novatel_oem7_msgs__msg__INSSTDEV__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSSTDEV__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSSTDEV__Sequence__copy(
  const novatel_oem7_msgs__msg__INSSTDEV__Sequence * input,
  novatel_oem7_msgs__msg__INSSTDEV__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__INSSTDEV);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__INSSTDEV * data =
      (novatel_oem7_msgs__msg__INSSTDEV *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__INSSTDEV__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__INSSTDEV__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSSTDEV__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
