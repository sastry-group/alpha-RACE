// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/LineMarker.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/line_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `color`
// Member `colors`
#include "foxglove_msgs/msg/detail/color__functions.h"
// Member `indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
foxglove_msgs__msg__LineMarker__init(foxglove_msgs__msg__LineMarker * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__LineMarker__fini(msg);
    return false;
  }
  // thickness
  // scale_invariant
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    foxglove_msgs__msg__LineMarker__fini(msg);
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__init(&msg->color)) {
    foxglove_msgs__msg__LineMarker__fini(msg);
    return false;
  }
  // colors
  if (!foxglove_msgs__msg__Color__Sequence__init(&msg->colors, 0)) {
    foxglove_msgs__msg__LineMarker__fini(msg);
    return false;
  }
  // indices
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->indices, 0)) {
    foxglove_msgs__msg__LineMarker__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__LineMarker__fini(foxglove_msgs__msg__LineMarker * msg)
{
  if (!msg) {
    return;
  }
  // type
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // thickness
  // scale_invariant
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // color
  foxglove_msgs__msg__Color__fini(&msg->color);
  // colors
  foxglove_msgs__msg__Color__Sequence__fini(&msg->colors);
  // indices
  rosidl_runtime_c__uint32__Sequence__fini(&msg->indices);
}

bool
foxglove_msgs__msg__LineMarker__are_equal(const foxglove_msgs__msg__LineMarker * lhs, const foxglove_msgs__msg__LineMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // thickness
  if (lhs->thickness != rhs->thickness) {
    return false;
  }
  // scale_invariant
  if (lhs->scale_invariant != rhs->scale_invariant) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // colors
  if (!foxglove_msgs__msg__Color__Sequence__are_equal(
      &(lhs->colors), &(rhs->colors)))
  {
    return false;
  }
  // indices
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->indices), &(rhs->indices)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__LineMarker__copy(
  const foxglove_msgs__msg__LineMarker * input,
  foxglove_msgs__msg__LineMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // thickness
  output->thickness = input->thickness;
  // scale_invariant
  output->scale_invariant = input->scale_invariant;
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // colors
  if (!foxglove_msgs__msg__Color__Sequence__copy(
      &(input->colors), &(output->colors)))
  {
    return false;
  }
  // indices
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->indices), &(output->indices)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__LineMarker *
foxglove_msgs__msg__LineMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__LineMarker * msg = (foxglove_msgs__msg__LineMarker *)allocator.allocate(sizeof(foxglove_msgs__msg__LineMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__LineMarker));
  bool success = foxglove_msgs__msg__LineMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__LineMarker__destroy(foxglove_msgs__msg__LineMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__LineMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__LineMarker__Sequence__init(foxglove_msgs__msg__LineMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__LineMarker * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__LineMarker *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__LineMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__LineMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__LineMarker__fini(&data[i - 1]);
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
foxglove_msgs__msg__LineMarker__Sequence__fini(foxglove_msgs__msg__LineMarker__Sequence * array)
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
      foxglove_msgs__msg__LineMarker__fini(&array->data[i]);
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

foxglove_msgs__msg__LineMarker__Sequence *
foxglove_msgs__msg__LineMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__LineMarker__Sequence * array = (foxglove_msgs__msg__LineMarker__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__LineMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__LineMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__LineMarker__Sequence__destroy(foxglove_msgs__msg__LineMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__LineMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__LineMarker__Sequence__are_equal(const foxglove_msgs__msg__LineMarker__Sequence * lhs, const foxglove_msgs__msg__LineMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__LineMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__LineMarker__Sequence__copy(
  const foxglove_msgs__msg__LineMarker__Sequence * input,
  foxglove_msgs__msg__LineMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__LineMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__LineMarker * data =
      (foxglove_msgs__msg__LineMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__LineMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__LineMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__LineMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
