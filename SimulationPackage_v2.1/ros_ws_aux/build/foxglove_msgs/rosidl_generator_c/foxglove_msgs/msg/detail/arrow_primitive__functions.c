// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/ArrowPrimitive.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/arrow_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `color`
#include "foxglove_msgs/msg/detail/color__functions.h"

bool
foxglove_msgs__msg__ArrowPrimitive__init(foxglove_msgs__msg__ArrowPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__ArrowPrimitive__fini(msg);
    return false;
  }
  // shaft_length
  // shaft_diameter
  // head_length
  // head_diameter
  // color
  if (!foxglove_msgs__msg__Color__init(&msg->color)) {
    foxglove_msgs__msg__ArrowPrimitive__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__ArrowPrimitive__fini(foxglove_msgs__msg__ArrowPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // shaft_length
  // shaft_diameter
  // head_length
  // head_diameter
  // color
  foxglove_msgs__msg__Color__fini(&msg->color);
}

bool
foxglove_msgs__msg__ArrowPrimitive__are_equal(const foxglove_msgs__msg__ArrowPrimitive * lhs, const foxglove_msgs__msg__ArrowPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // shaft_length
  if (lhs->shaft_length != rhs->shaft_length) {
    return false;
  }
  // shaft_diameter
  if (lhs->shaft_diameter != rhs->shaft_diameter) {
    return false;
  }
  // head_length
  if (lhs->head_length != rhs->head_length) {
    return false;
  }
  // head_diameter
  if (lhs->head_diameter != rhs->head_diameter) {
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__ArrowPrimitive__copy(
  const foxglove_msgs__msg__ArrowPrimitive * input,
  foxglove_msgs__msg__ArrowPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // shaft_length
  output->shaft_length = input->shaft_length;
  // shaft_diameter
  output->shaft_diameter = input->shaft_diameter;
  // head_length
  output->head_length = input->head_length;
  // head_diameter
  output->head_diameter = input->head_diameter;
  // color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__ArrowPrimitive *
foxglove_msgs__msg__ArrowPrimitive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowPrimitive * msg = (foxglove_msgs__msg__ArrowPrimitive *)allocator.allocate(sizeof(foxglove_msgs__msg__ArrowPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__ArrowPrimitive));
  bool success = foxglove_msgs__msg__ArrowPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__ArrowPrimitive__destroy(foxglove_msgs__msg__ArrowPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__ArrowPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__ArrowPrimitive__Sequence__init(foxglove_msgs__msg__ArrowPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowPrimitive * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__ArrowPrimitive *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__ArrowPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__ArrowPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__ArrowPrimitive__fini(&data[i - 1]);
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
foxglove_msgs__msg__ArrowPrimitive__Sequence__fini(foxglove_msgs__msg__ArrowPrimitive__Sequence * array)
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
      foxglove_msgs__msg__ArrowPrimitive__fini(&array->data[i]);
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

foxglove_msgs__msg__ArrowPrimitive__Sequence *
foxglove_msgs__msg__ArrowPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowPrimitive__Sequence * array = (foxglove_msgs__msg__ArrowPrimitive__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__ArrowPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__ArrowPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__ArrowPrimitive__Sequence__destroy(foxglove_msgs__msg__ArrowPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__ArrowPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__ArrowPrimitive__Sequence__are_equal(const foxglove_msgs__msg__ArrowPrimitive__Sequence * lhs, const foxglove_msgs__msg__ArrowPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__ArrowPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__ArrowPrimitive__Sequence__copy(
  const foxglove_msgs__msg__ArrowPrimitive__Sequence * input,
  foxglove_msgs__msg__ArrowPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__ArrowPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__ArrowPrimitive * data =
      (foxglove_msgs__msg__ArrowPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__ArrowPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__ArrowPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__ArrowPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
