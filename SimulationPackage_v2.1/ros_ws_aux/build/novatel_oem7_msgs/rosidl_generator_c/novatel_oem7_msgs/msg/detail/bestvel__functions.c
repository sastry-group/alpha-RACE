// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/bestvel__functions.h"

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
// Member `sol_status`
#include "novatel_oem7_msgs/msg/detail/solution_status__functions.h"
// Member `vel_type`
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__functions.h"

bool
novatel_oem7_msgs__msg__BESTVEL__init(novatel_oem7_msgs__msg__BESTVEL * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__BESTVEL__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__BESTVEL__fini(msg);
    return false;
  }
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__init(&msg->sol_status)) {
    novatel_oem7_msgs__msg__BESTVEL__fini(msg);
    return false;
  }
  // vel_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__init(&msg->vel_type)) {
    novatel_oem7_msgs__msg__BESTVEL__fini(msg);
    return false;
  }
  // latency
  // diff_age
  // hor_speed
  // trk_gnd
  // ver_speed
  // reserved
  return true;
}

void
novatel_oem7_msgs__msg__BESTVEL__fini(novatel_oem7_msgs__msg__BESTVEL * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // sol_status
  novatel_oem7_msgs__msg__SolutionStatus__fini(&msg->sol_status);
  // vel_type
  novatel_oem7_msgs__msg__PositionOrVelocityType__fini(&msg->vel_type);
  // latency
  // diff_age
  // hor_speed
  // trk_gnd
  // ver_speed
  // reserved
}

bool
novatel_oem7_msgs__msg__BESTVEL__are_equal(const novatel_oem7_msgs__msg__BESTVEL * lhs, const novatel_oem7_msgs__msg__BESTVEL * rhs)
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
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__are_equal(
      &(lhs->sol_status), &(rhs->sol_status)))
  {
    return false;
  }
  // vel_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__are_equal(
      &(lhs->vel_type), &(rhs->vel_type)))
  {
    return false;
  }
  // latency
  if (lhs->latency != rhs->latency) {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // hor_speed
  if (lhs->hor_speed != rhs->hor_speed) {
    return false;
  }
  // trk_gnd
  if (lhs->trk_gnd != rhs->trk_gnd) {
    return false;
  }
  // ver_speed
  if (lhs->ver_speed != rhs->ver_speed) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__BESTVEL__copy(
  const novatel_oem7_msgs__msg__BESTVEL * input,
  novatel_oem7_msgs__msg__BESTVEL * output)
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
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__copy(
      &(input->sol_status), &(output->sol_status)))
  {
    return false;
  }
  // vel_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__copy(
      &(input->vel_type), &(output->vel_type)))
  {
    return false;
  }
  // latency
  output->latency = input->latency;
  // diff_age
  output->diff_age = input->diff_age;
  // hor_speed
  output->hor_speed = input->hor_speed;
  // trk_gnd
  output->trk_gnd = input->trk_gnd;
  // ver_speed
  output->ver_speed = input->ver_speed;
  // reserved
  output->reserved = input->reserved;
  return true;
}

novatel_oem7_msgs__msg__BESTVEL *
novatel_oem7_msgs__msg__BESTVEL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTVEL * msg = (novatel_oem7_msgs__msg__BESTVEL *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BESTVEL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__BESTVEL));
  bool success = novatel_oem7_msgs__msg__BESTVEL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__BESTVEL__destroy(novatel_oem7_msgs__msg__BESTVEL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__BESTVEL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__BESTVEL__Sequence__init(novatel_oem7_msgs__msg__BESTVEL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTVEL * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__BESTVEL *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__BESTVEL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__BESTVEL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__BESTVEL__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__BESTVEL__Sequence__fini(novatel_oem7_msgs__msg__BESTVEL__Sequence * array)
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
      novatel_oem7_msgs__msg__BESTVEL__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__BESTVEL__Sequence *
novatel_oem7_msgs__msg__BESTVEL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTVEL__Sequence * array = (novatel_oem7_msgs__msg__BESTVEL__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BESTVEL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__BESTVEL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__BESTVEL__Sequence__destroy(novatel_oem7_msgs__msg__BESTVEL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__BESTVEL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__BESTVEL__Sequence__are_equal(const novatel_oem7_msgs__msg__BESTVEL__Sequence * lhs, const novatel_oem7_msgs__msg__BESTVEL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__BESTVEL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__BESTVEL__Sequence__copy(
  const novatel_oem7_msgs__msg__BESTVEL__Sequence * input,
  novatel_oem7_msgs__msg__BESTVEL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__BESTVEL);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__BESTVEL * data =
      (novatel_oem7_msgs__msg__BESTVEL *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__BESTVEL__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__BESTVEL__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__BESTVEL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
