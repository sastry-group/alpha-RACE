// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rotation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rotation`
#include "novatel_oem7_msgs/msg/detail/rotational_offset__functions.h"
// Member `frame`
#include "novatel_oem7_msgs/msg/detail/ins_frame__functions.h"
// Member `rotation_source`
#include "novatel_oem7_msgs/msg/detail/ins_source_status__functions.h"

bool
novatel_oem7_msgs__msg__Rotation__init(novatel_oem7_msgs__msg__Rotation * msg)
{
  if (!msg) {
    return false;
  }
  // rotation
  if (!novatel_oem7_msgs__msg__RotationalOffset__init(&msg->rotation)) {
    novatel_oem7_msgs__msg__Rotation__fini(msg);
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__init(&msg->frame)) {
    novatel_oem7_msgs__msg__Rotation__fini(msg);
    return false;
  }
  // x_rotation
  // y_rotation
  // z_rotation
  // x_rotation_stdev
  // y_rotation_stdev
  // z_rotation_stdev
  // rotation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__init(&msg->rotation_source)) {
    novatel_oem7_msgs__msg__Rotation__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__Rotation__fini(novatel_oem7_msgs__msg__Rotation * msg)
{
  if (!msg) {
    return;
  }
  // rotation
  novatel_oem7_msgs__msg__RotationalOffset__fini(&msg->rotation);
  // frame
  novatel_oem7_msgs__msg__INSFrame__fini(&msg->frame);
  // x_rotation
  // y_rotation
  // z_rotation
  // x_rotation_stdev
  // y_rotation_stdev
  // z_rotation_stdev
  // rotation_source
  novatel_oem7_msgs__msg__INSSourceStatus__fini(&msg->rotation_source);
}

bool
novatel_oem7_msgs__msg__Rotation__are_equal(const novatel_oem7_msgs__msg__Rotation * lhs, const novatel_oem7_msgs__msg__Rotation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rotation
  if (!novatel_oem7_msgs__msg__RotationalOffset__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // x_rotation
  if (lhs->x_rotation != rhs->x_rotation) {
    return false;
  }
  // y_rotation
  if (lhs->y_rotation != rhs->y_rotation) {
    return false;
  }
  // z_rotation
  if (lhs->z_rotation != rhs->z_rotation) {
    return false;
  }
  // x_rotation_stdev
  if (lhs->x_rotation_stdev != rhs->x_rotation_stdev) {
    return false;
  }
  // y_rotation_stdev
  if (lhs->y_rotation_stdev != rhs->y_rotation_stdev) {
    return false;
  }
  // z_rotation_stdev
  if (lhs->z_rotation_stdev != rhs->z_rotation_stdev) {
    return false;
  }
  // rotation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__are_equal(
      &(lhs->rotation_source), &(rhs->rotation_source)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Rotation__copy(
  const novatel_oem7_msgs__msg__Rotation * input,
  novatel_oem7_msgs__msg__Rotation * output)
{
  if (!input || !output) {
    return false;
  }
  // rotation
  if (!novatel_oem7_msgs__msg__RotationalOffset__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // x_rotation
  output->x_rotation = input->x_rotation;
  // y_rotation
  output->y_rotation = input->y_rotation;
  // z_rotation
  output->z_rotation = input->z_rotation;
  // x_rotation_stdev
  output->x_rotation_stdev = input->x_rotation_stdev;
  // y_rotation_stdev
  output->y_rotation_stdev = input->y_rotation_stdev;
  // z_rotation_stdev
  output->z_rotation_stdev = input->z_rotation_stdev;
  // rotation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__copy(
      &(input->rotation_source), &(output->rotation_source)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__Rotation *
novatel_oem7_msgs__msg__Rotation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Rotation * msg = (novatel_oem7_msgs__msg__Rotation *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Rotation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__Rotation));
  bool success = novatel_oem7_msgs__msg__Rotation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__Rotation__destroy(novatel_oem7_msgs__msg__Rotation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__Rotation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__Rotation__Sequence__init(novatel_oem7_msgs__msg__Rotation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Rotation * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__Rotation *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__Rotation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__Rotation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__Rotation__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__Rotation__Sequence__fini(novatel_oem7_msgs__msg__Rotation__Sequence * array)
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
      novatel_oem7_msgs__msg__Rotation__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__Rotation__Sequence *
novatel_oem7_msgs__msg__Rotation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Rotation__Sequence * array = (novatel_oem7_msgs__msg__Rotation__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Rotation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__Rotation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__Rotation__Sequence__destroy(novatel_oem7_msgs__msg__Rotation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__Rotation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__Rotation__Sequence__are_equal(const novatel_oem7_msgs__msg__Rotation__Sequence * lhs, const novatel_oem7_msgs__msg__Rotation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__Rotation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Rotation__Sequence__copy(
  const novatel_oem7_msgs__msg__Rotation__Sequence * input,
  novatel_oem7_msgs__msg__Rotation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__Rotation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__Rotation * data =
      (novatel_oem7_msgs__msg__Rotation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__Rotation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__Rotation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__Rotation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
