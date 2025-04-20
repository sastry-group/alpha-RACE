// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/scene_entity__functions.h"

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
// Member `arrows`
#include "foxglove_msgs/msg/detail/arrow_primitive__functions.h"
// Member `cubes`
#include "foxglove_msgs/msg/detail/cube_primitive__functions.h"
// Member `spheres`
#include "foxglove_msgs/msg/detail/sphere_primitive__functions.h"
// Member `cylinders`
#include "foxglove_msgs/msg/detail/cylinder_primitive__functions.h"
// Member `lines`
#include "foxglove_msgs/msg/detail/line_primitive__functions.h"
// Member `triangles`
#include "foxglove_msgs/msg/detail/triangle_list_primitive__functions.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_primitive__functions.h"
// Member `models`
#include "foxglove_msgs/msg/detail/model_primitive__functions.h"

bool
foxglove_msgs__msg__SceneEntity__init(foxglove_msgs__msg__SceneEntity * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // frame_locked
  // metadata
  if (!foxglove_msgs__msg__KeyValuePair__Sequence__init(&msg->metadata, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // arrows
  if (!foxglove_msgs__msg__ArrowPrimitive__Sequence__init(&msg->arrows, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubePrimitive__Sequence__init(&msg->cubes, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SpherePrimitive__Sequence__init(&msg->spheres, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // cylinders
  if (!foxglove_msgs__msg__CylinderPrimitive__Sequence__init(&msg->cylinders, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LinePrimitive__Sequence__init(&msg->lines, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListPrimitive__Sequence__init(&msg->triangles, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextPrimitive__Sequence__init(&msg->texts, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelPrimitive__Sequence__init(&msg->models, 0)) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__SceneEntity__fini(foxglove_msgs__msg__SceneEntity * msg)
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
  // arrows
  foxglove_msgs__msg__ArrowPrimitive__Sequence__fini(&msg->arrows);
  // cubes
  foxglove_msgs__msg__CubePrimitive__Sequence__fini(&msg->cubes);
  // spheres
  foxglove_msgs__msg__SpherePrimitive__Sequence__fini(&msg->spheres);
  // cylinders
  foxglove_msgs__msg__CylinderPrimitive__Sequence__fini(&msg->cylinders);
  // lines
  foxglove_msgs__msg__LinePrimitive__Sequence__fini(&msg->lines);
  // triangles
  foxglove_msgs__msg__TriangleListPrimitive__Sequence__fini(&msg->triangles);
  // texts
  foxglove_msgs__msg__TextPrimitive__Sequence__fini(&msg->texts);
  // models
  foxglove_msgs__msg__ModelPrimitive__Sequence__fini(&msg->models);
}

bool
foxglove_msgs__msg__SceneEntity__are_equal(const foxglove_msgs__msg__SceneEntity * lhs, const foxglove_msgs__msg__SceneEntity * rhs)
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
  // arrows
  if (!foxglove_msgs__msg__ArrowPrimitive__Sequence__are_equal(
      &(lhs->arrows), &(rhs->arrows)))
  {
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubePrimitive__Sequence__are_equal(
      &(lhs->cubes), &(rhs->cubes)))
  {
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SpherePrimitive__Sequence__are_equal(
      &(lhs->spheres), &(rhs->spheres)))
  {
    return false;
  }
  // cylinders
  if (!foxglove_msgs__msg__CylinderPrimitive__Sequence__are_equal(
      &(lhs->cylinders), &(rhs->cylinders)))
  {
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LinePrimitive__Sequence__are_equal(
      &(lhs->lines), &(rhs->lines)))
  {
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListPrimitive__Sequence__are_equal(
      &(lhs->triangles), &(rhs->triangles)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextPrimitive__Sequence__are_equal(
      &(lhs->texts), &(rhs->texts)))
  {
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelPrimitive__Sequence__are_equal(
      &(lhs->models), &(rhs->models)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__SceneEntity__copy(
  const foxglove_msgs__msg__SceneEntity * input,
  foxglove_msgs__msg__SceneEntity * output)
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
  // arrows
  if (!foxglove_msgs__msg__ArrowPrimitive__Sequence__copy(
      &(input->arrows), &(output->arrows)))
  {
    return false;
  }
  // cubes
  if (!foxglove_msgs__msg__CubePrimitive__Sequence__copy(
      &(input->cubes), &(output->cubes)))
  {
    return false;
  }
  // spheres
  if (!foxglove_msgs__msg__SpherePrimitive__Sequence__copy(
      &(input->spheres), &(output->spheres)))
  {
    return false;
  }
  // cylinders
  if (!foxglove_msgs__msg__CylinderPrimitive__Sequence__copy(
      &(input->cylinders), &(output->cylinders)))
  {
    return false;
  }
  // lines
  if (!foxglove_msgs__msg__LinePrimitive__Sequence__copy(
      &(input->lines), &(output->lines)))
  {
    return false;
  }
  // triangles
  if (!foxglove_msgs__msg__TriangleListPrimitive__Sequence__copy(
      &(input->triangles), &(output->triangles)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextPrimitive__Sequence__copy(
      &(input->texts), &(output->texts)))
  {
    return false;
  }
  // models
  if (!foxglove_msgs__msg__ModelPrimitive__Sequence__copy(
      &(input->models), &(output->models)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__SceneEntity *
foxglove_msgs__msg__SceneEntity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__SceneEntity * msg = (foxglove_msgs__msg__SceneEntity *)allocator.allocate(sizeof(foxglove_msgs__msg__SceneEntity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__SceneEntity));
  bool success = foxglove_msgs__msg__SceneEntity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__SceneEntity__destroy(foxglove_msgs__msg__SceneEntity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__SceneEntity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__SceneEntity__Sequence__init(foxglove_msgs__msg__SceneEntity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__SceneEntity * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__SceneEntity *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__SceneEntity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__SceneEntity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__SceneEntity__fini(&data[i - 1]);
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
foxglove_msgs__msg__SceneEntity__Sequence__fini(foxglove_msgs__msg__SceneEntity__Sequence * array)
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
      foxglove_msgs__msg__SceneEntity__fini(&array->data[i]);
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

foxglove_msgs__msg__SceneEntity__Sequence *
foxglove_msgs__msg__SceneEntity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__SceneEntity__Sequence * array = (foxglove_msgs__msg__SceneEntity__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__SceneEntity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__SceneEntity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__SceneEntity__Sequence__destroy(foxglove_msgs__msg__SceneEntity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__SceneEntity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__SceneEntity__Sequence__are_equal(const foxglove_msgs__msg__SceneEntity__Sequence * lhs, const foxglove_msgs__msg__SceneEntity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__SceneEntity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__SceneEntity__Sequence__copy(
  const foxglove_msgs__msg__SceneEntity__Sequence * input,
  foxglove_msgs__msg__SceneEntity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__SceneEntity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__SceneEntity * data =
      (foxglove_msgs__msg__SceneEntity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__SceneEntity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__SceneEntity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__SceneEntity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
