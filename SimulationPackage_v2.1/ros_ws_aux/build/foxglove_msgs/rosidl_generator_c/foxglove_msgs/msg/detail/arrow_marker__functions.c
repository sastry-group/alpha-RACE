// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/ArrowMarker.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/arrow_marker__functions.h"

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
foxglove_msgs__msg__ArrowMarker__init(foxglove_msgs__msg__ArrowMarker * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__ArrowMarker__fini(msg);
    return false;
  }
  // length
  // shaft_diameter
  // head_diameter
  // head_length
  // color
  if (!foxglove_msgs__msg__Color__init(&msg->color)) {
    foxglove_msgs__msg__ArrowMarker__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__ArrowMarker__fini(foxglove_msgs__msg__ArrowMarker * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // length
  // shaft_diameter
  // head_diameter
  // head_length
  // color
  foxglove_msgs__msg__Color__fini(&msg->color);
}

bool
foxglove_msgs__msg__ArrowMarker__are_equal(const foxglove_msgs__msg__ArrowMarker * lhs, const foxglove_msgs__msg__ArrowMarker * rhs)
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
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // shaft_diameter
  if (lhs->shaft_diameter != rhs->shaft_diameter) {
    return false;
  }
  // head_diameter
  if (lhs->head_diameter != rhs->head_diameter) {
    return false;
  }
  // head_length
  if (lhs->head_length != rhs->head_length) {
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
foxglove_msgs__msg__ArrowMarker__copy(
  const foxglove_msgs__msg__ArrowMarker * input,
  foxglove_msgs__msg__ArrowMarker * output)
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
  // length
  output->length = input->length;
  // shaft_diameter
  output->shaft_diameter = input->shaft_diameter;
  // head_diameter
  output->head_diameter = input->head_diameter;
  // head_length
  output->head_length = input->head_length;
  // color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__ArrowMarker *
foxglove_msgs__msg__ArrowMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowMarker * msg = (foxglove_msgs__msg__ArrowMarker *)allocator.allocate(sizeof(foxglove_msgs__msg__ArrowMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__ArrowMarker));
  bool success = foxglove_msgs__msg__ArrowMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__ArrowMarker__destroy(foxglove_msgs__msg__ArrowMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__ArrowMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__ArrowMarker__Sequence__init(foxglove_msgs__msg__ArrowMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowMarker * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__ArrowMarker *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__ArrowMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__ArrowMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__ArrowMarker__fini(&data[i - 1]);
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
foxglove_msgs__msg__ArrowMarker__Sequence__fini(foxglove_msgs__msg__ArrowMarker__Sequence * array)
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
      foxglove_msgs__msg__ArrowMarker__fini(&array->data[i]);
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

foxglove_msgs__msg__ArrowMarker__Sequence *
foxglove_msgs__msg__ArrowMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ArrowMarker__Sequence * array = (foxglove_msgs__msg__ArrowMarker__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__ArrowMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__ArrowMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__ArrowMarker__Sequence__destroy(foxglove_msgs__msg__ArrowMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__ArrowMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__ArrowMarker__Sequence__are_equal(const foxglove_msgs__msg__ArrowMarker__Sequence * lhs, const foxglove_msgs__msg__ArrowMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__ArrowMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__ArrowMarker__Sequence__copy(
  const foxglove_msgs__msg__ArrowMarker__Sequence * input,
  foxglove_msgs__msg__ArrowMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__ArrowMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__ArrowMarker * data =
      (foxglove_msgs__msg__ArrowMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__ArrowMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__ArrowMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__ArrowMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
