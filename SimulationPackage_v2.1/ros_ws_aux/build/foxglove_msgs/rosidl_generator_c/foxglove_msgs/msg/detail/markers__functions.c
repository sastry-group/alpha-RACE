// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `deletions`
#include "foxglove_msgs/msg/detail/marker_deletion__functions.h"
// Member `arrows`
#include "foxglove_msgs/msg/detail/arrow_marker__functions.h"
// Member `cubes`
#include "foxglove_msgs/msg/detail/cube_list_marker__functions.h"
// Member `spheres`
#include "foxglove_msgs/msg/detail/sphere_list_marker__functions.h"
// Member `cones`
#include "foxglove_msgs/msg/detail/cone_list_marker__functions.h"
// Member `lines`
#include "foxglove_msgs/msg/detail/line_marker__functions.h"
// Member `triangles`
#include "foxglove_msgs/msg/detail/triangle_list_marker__functions.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_marker__functions.h"
// Member `models`
#include "foxglove_msgs/msg/detail/model_marker__functions.h"

bool
foxglove_msgs__msg__Markers__init(foxglove_msgs__msg__Markers * msg)
{
  if (!msg) {
    return false;
  }
  // deletions
  if (!foxglove_msgs__msg__MarkerDeletion__Sequence__init(&msg->deletions, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // arrows
  if (!foxglove_msgs__msg__ArrowMarker__Sequence__init(&msg->arrows, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubeListMarker__Sequence__init(&msg->cubes, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SphereListMarker__Sequence__init(&msg->spheres, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // cones
  if (!foxglove_msgs__msg__ConeListMarker__Sequence__init(&msg->cones, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LineMarker__Sequence__init(&msg->lines, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListMarker__Sequence__init(&msg->triangles, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextMarker__Sequence__init(&msg->texts, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelMarker__Sequence__init(&msg->models, 0)) {
    foxglove_msgs__msg__Markers__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__Markers__fini(foxglove_msgs__msg__Markers * msg)
{
  if (!msg) {
    return;
  }
  // deletions
  foxglove_msgs__msg__MarkerDeletion__Sequence__fini(&msg->deletions);
  // arrows
  foxglove_msgs__msg__ArrowMarker__Sequence__fini(&msg->arrows);
  // cubes
  foxglove_msgs__msg__CubeListMarker__Sequence__fini(&msg->cubes);
  // spheres
  foxglove_msgs__msg__SphereListMarker__Sequence__fini(&msg->spheres);
  // cones
  foxglove_msgs__msg__ConeListMarker__Sequence__fini(&msg->cones);
  // lines
  foxglove_msgs__msg__LineMarker__Sequence__fini(&msg->lines);
  // triangles
  foxglove_msgs__msg__TriangleListMarker__Sequence__fini(&msg->triangles);
  // texts
  foxglove_msgs__msg__TextMarker__Sequence__fini(&msg->texts);
  // models
  foxglove_msgs__msg__ModelMarker__Sequence__fini(&msg->models);
}

bool
foxglove_msgs__msg__Markers__are_equal(const foxglove_msgs__msg__Markers * lhs, const foxglove_msgs__msg__Markers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // deletions
  if (!foxglove_msgs__msg__MarkerDeletion__Sequence__are_equal(
      &(lhs->deletions), &(rhs->deletions)))
  {
    return false;
  }
  // arrows
  if (!foxglove_msgs__msg__ArrowMarker__Sequence__are_equal(
      &(lhs->arrows), &(rhs->arrows)))
  {
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubeListMarker__Sequence__are_equal(
      &(lhs->cubes), &(rhs->cubes)))
  {
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SphereListMarker__Sequence__are_equal(
      &(lhs->spheres), &(rhs->spheres)))
  {
    return false;
  }
  // cones
  if (!foxglove_msgs__msg__ConeListMarker__Sequence__are_equal(
      &(lhs->cones), &(rhs->cones)))
  {
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LineMarker__Sequence__are_equal(
      &(lhs->lines), &(rhs->lines)))
  {
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListMarker__Sequence__are_equal(
      &(lhs->triangles), &(rhs->triangles)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextMarker__Sequence__are_equal(
      &(lhs->texts), &(rhs->texts)))
  {
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelMarker__Sequence__are_equal(
      &(lhs->models), &(rhs->models)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__Markers__copy(
  const foxglove_msgs__msg__Markers * input,
  foxglove_msgs__msg__Markers * output)
{
  if (!input || !output) {
    return false;
  }
  // deletions
  if (!foxglove_msgs__msg__MarkerDeletion__Sequence__copy(
      &(input->deletions), &(output->deletions)))
  {
    return false;
  }
  // arrows
  if (!foxglove_msgs__msg__ArrowMarker__Sequence__copy(
      &(input->arrows), &(output->arrows)))
  {
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubeListMarker__Sequence__copy(
      &(input->cubes), &(output->cubes)))
  {
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SphereListMarker__Sequence__copy(
      &(input->spheres), &(output->spheres)))
  {
    return false;
  }
  // cones
  if (!foxglove_msgs__msg__ConeListMarker__Sequence__copy(
      &(input->cones), &(output->cones)))
  {
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LineMarker__Sequence__copy(
      &(input->lines), &(output->lines)))
  {
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListMarker__Sequence__copy(
      &(input->triangles), &(output->triangles)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextMarker__Sequence__copy(
      &(input->texts), &(output->texts)))
  {
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelMarker__Sequence__copy(
      &(input->models), &(output->models)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__Markers *
foxglove_msgs__msg__Markers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Markers * msg = (foxglove_msgs__msg__Markers *)allocator.allocate(sizeof(foxglove_msgs__msg__Markers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__Markers));
  bool success = foxglove_msgs__msg__Markers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__Markers__destroy(foxglove_msgs__msg__Markers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__Markers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__Markers__Sequence__init(foxglove_msgs__msg__Markers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Markers * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__Markers *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__Markers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__Markers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__Markers__fini(&data[i - 1]);
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
foxglove_msgs__msg__Markers__Sequence__fini(foxglove_msgs__msg__Markers__Sequence * array)
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
      foxglove_msgs__msg__Markers__fini(&array->data[i]);
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

foxglove_msgs__msg__Markers__Sequence *
foxglove_msgs__msg__Markers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Markers__Sequence * array = (foxglove_msgs__msg__Markers__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__Markers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__Markers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__Markers__Sequence__destroy(foxglove_msgs__msg__Markers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__Markers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__Markers__Sequence__are_equal(const foxglove_msgs__msg__Markers__Sequence * lhs, const foxglove_msgs__msg__Markers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__Markers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__Markers__Sequence__copy(
  const foxglove_msgs__msg__Markers__Sequence * input,
  foxglove_msgs__msg__Markers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__Markers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__Markers * data =
      (foxglove_msgs__msg__Markers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__Markers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__Markers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__Markers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
