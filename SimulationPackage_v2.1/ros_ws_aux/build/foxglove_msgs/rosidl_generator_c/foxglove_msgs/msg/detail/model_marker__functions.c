// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/ModelMarker.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/model_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `scale`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `color`
#include "foxglove_msgs/msg/detail/color__functions.h"
// Member `url`
// Member `mime_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
foxglove_msgs__msg__ModelMarker__init(foxglove_msgs__msg__ModelMarker * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  // scale
  if (!geometry_msgs__msg__Vector3__init(&msg->scale)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__init(&msg->color)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  // use_embedded_materials
  // url
  if (!rosidl_runtime_c__String__init(&msg->url)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  // mime_type
  if (!rosidl_runtime_c__String__init(&msg->mime_type)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__ModelMarker__fini(foxglove_msgs__msg__ModelMarker * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // scale
  geometry_msgs__msg__Vector3__fini(&msg->scale);
  // color
  foxglove_msgs__msg__Color__fini(&msg->color);
  // use_embedded_materials
  // url
  rosidl_runtime_c__String__fini(&msg->url);
  // mime_type
  rosidl_runtime_c__String__fini(&msg->mime_type);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
foxglove_msgs__msg__ModelMarker__are_equal(const foxglove_msgs__msg__ModelMarker * lhs, const foxglove_msgs__msg__ModelMarker * rhs)
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
  // scale
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->scale), &(rhs->scale)))
  {
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // use_embedded_materials
  if (lhs->use_embedded_materials != rhs->use_embedded_materials) {
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->url), &(rhs->url)))
  {
    return false;
  }
  // mime_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mime_type), &(rhs->mime_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__ModelMarker__copy(
  const foxglove_msgs__msg__ModelMarker * input,
  foxglove_msgs__msg__ModelMarker * output)
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
  // scale
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->scale), &(output->scale)))
  {
    return false;
  }
  // color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // use_embedded_materials
  output->use_embedded_materials = input->use_embedded_materials;
  // url
  if (!rosidl_runtime_c__String__copy(
      &(input->url), &(output->url)))
  {
    return false;
  }
  // mime_type
  if (!rosidl_runtime_c__String__copy(
      &(input->mime_type), &(output->mime_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__ModelMarker *
foxglove_msgs__msg__ModelMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ModelMarker * msg = (foxglove_msgs__msg__ModelMarker *)allocator.allocate(sizeof(foxglove_msgs__msg__ModelMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__ModelMarker));
  bool success = foxglove_msgs__msg__ModelMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__ModelMarker__destroy(foxglove_msgs__msg__ModelMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__ModelMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__ModelMarker__Sequence__init(foxglove_msgs__msg__ModelMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ModelMarker * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__ModelMarker *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__ModelMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__ModelMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__ModelMarker__fini(&data[i - 1]);
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
foxglove_msgs__msg__ModelMarker__Sequence__fini(foxglove_msgs__msg__ModelMarker__Sequence * array)
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
      foxglove_msgs__msg__ModelMarker__fini(&array->data[i]);
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

foxglove_msgs__msg__ModelMarker__Sequence *
foxglove_msgs__msg__ModelMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ModelMarker__Sequence * array = (foxglove_msgs__msg__ModelMarker__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__ModelMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__ModelMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__ModelMarker__Sequence__destroy(foxglove_msgs__msg__ModelMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__ModelMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__ModelMarker__Sequence__are_equal(const foxglove_msgs__msg__ModelMarker__Sequence * lhs, const foxglove_msgs__msg__ModelMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__ModelMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__ModelMarker__Sequence__copy(
  const foxglove_msgs__msg__ModelMarker__Sequence * input,
  foxglove_msgs__msg__ModelMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__ModelMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__ModelMarker * data =
      (foxglove_msgs__msg__ModelMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__ModelMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__ModelMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__ModelMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
