// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/TrianglesMarker.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/triangles_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `metadata`
#include "foxglove_msgs/msg/detail/key_value_pair__functions.h"
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
foxglove_msgs__msg__TrianglesMarker__init(foxglove_msgs__msg__TrianglesMarker * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // frame_locked
  // metadata
  if (!foxglove_msgs__msg__KeyValuePair__Sequence__init(&msg->metadata, 0)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__init(&msg->color)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // colors
  if (!foxglove_msgs__msg__Color__Sequence__init(&msg->colors, 0)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  // indices
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->indices, 0)) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__TrianglesMarker__fini(foxglove_msgs__msg__TrianglesMarker * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // lifetime
  builtin_interfaces__msg__Duration__fini(&msg->lifetime);
  // frame_locked
  // metadata
  foxglove_msgs__msg__KeyValuePair__Sequence__fini(&msg->metadata);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
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
foxglove_msgs__msg__TrianglesMarker__are_equal(const foxglove_msgs__msg__TrianglesMarker * lhs, const foxglove_msgs__msg__TrianglesMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->lifetime), &(rhs->lifetime)))
  {
    return false;
  }
  // frame_locked
  if (lhs->frame_locked != rhs->frame_locked) {
    return false;
  }
  // metadata
  if (!foxglove_msgs__msg__KeyValuePair__Sequence__are_equal(
      &(lhs->metadata), &(rhs->metadata)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
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
foxglove_msgs__msg__TrianglesMarker__copy(
  const foxglove_msgs__msg__TrianglesMarker * input,
  foxglove_msgs__msg__TrianglesMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->lifetime), &(output->lifetime)))
  {
    return false;
  }
  // frame_locked
  output->frame_locked = input->frame_locked;
  // metadata
  if (!foxglove_msgs__msg__KeyValuePair__Sequence__copy(
      &(input->metadata), &(output->metadata)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
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

foxglove_msgs__msg__TrianglesMarker *
foxglove_msgs__msg__TrianglesMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TrianglesMarker * msg = (foxglove_msgs__msg__TrianglesMarker *)allocator.allocate(sizeof(foxglove_msgs__msg__TrianglesMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__TrianglesMarker));
  bool success = foxglove_msgs__msg__TrianglesMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__TrianglesMarker__destroy(foxglove_msgs__msg__TrianglesMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__TrianglesMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__TrianglesMarker__Sequence__init(foxglove_msgs__msg__TrianglesMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TrianglesMarker * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__TrianglesMarker *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__TrianglesMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__TrianglesMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__TrianglesMarker__fini(&data[i - 1]);
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
foxglove_msgs__msg__TrianglesMarker__Sequence__fini(foxglove_msgs__msg__TrianglesMarker__Sequence * array)
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
      foxglove_msgs__msg__TrianglesMarker__fini(&array->data[i]);
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

foxglove_msgs__msg__TrianglesMarker__Sequence *
foxglove_msgs__msg__TrianglesMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TrianglesMarker__Sequence * array = (foxglove_msgs__msg__TrianglesMarker__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__TrianglesMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__TrianglesMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__TrianglesMarker__Sequence__destroy(foxglove_msgs__msg__TrianglesMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__TrianglesMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__TrianglesMarker__Sequence__are_equal(const foxglove_msgs__msg__TrianglesMarker__Sequence * lhs, const foxglove_msgs__msg__TrianglesMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__TrianglesMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__TrianglesMarker__Sequence__copy(
  const foxglove_msgs__msg__TrianglesMarker__Sequence * input,
  foxglove_msgs__msg__TrianglesMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__TrianglesMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__TrianglesMarker * data =
      (foxglove_msgs__msg__TrianglesMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__TrianglesMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__TrianglesMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__TrianglesMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
