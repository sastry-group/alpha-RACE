// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `fields`
#include "foxglove_msgs/msg/detail/packed_element_field__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
foxglove_msgs__msg__PointCloud__init(foxglove_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    foxglove_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    foxglove_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // point_stride
  // fields
  if (!foxglove_msgs__msg__PackedElementField__Sequence__init(&msg->fields, 0)) {
    foxglove_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    foxglove_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__PointCloud__fini(foxglove_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // point_stride
  // fields
  foxglove_msgs__msg__PackedElementField__Sequence__fini(&msg->fields);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
foxglove_msgs__msg__PointCloud__are_equal(const foxglove_msgs__msg__PointCloud * lhs, const foxglove_msgs__msg__PointCloud * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // point_stride
  if (lhs->point_stride != rhs->point_stride) {
    return false;
  }
  // fields
  if (!foxglove_msgs__msg__PackedElementField__Sequence__are_equal(
      &(lhs->fields), &(rhs->fields)))
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
foxglove_msgs__msg__PointCloud__copy(
  const foxglove_msgs__msg__PointCloud * input,
  foxglove_msgs__msg__PointCloud * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // point_stride
  output->point_stride = input->point_stride;
  // fields
  if (!foxglove_msgs__msg__PackedElementField__Sequence__copy(
      &(input->fields), &(output->fields)))
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

foxglove_msgs__msg__PointCloud *
foxglove_msgs__msg__PointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PointCloud * msg = (foxglove_msgs__msg__PointCloud *)allocator.allocate(sizeof(foxglove_msgs__msg__PointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__PointCloud));
  bool success = foxglove_msgs__msg__PointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__PointCloud__destroy(foxglove_msgs__msg__PointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__PointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__PointCloud__Sequence__init(foxglove_msgs__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PointCloud * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__PointCloud *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__PointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__PointCloud__fini(&data[i - 1]);
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
foxglove_msgs__msg__PointCloud__Sequence__fini(foxglove_msgs__msg__PointCloud__Sequence * array)
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
      foxglove_msgs__msg__PointCloud__fini(&array->data[i]);
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

foxglove_msgs__msg__PointCloud__Sequence *
foxglove_msgs__msg__PointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PointCloud__Sequence * array = (foxglove_msgs__msg__PointCloud__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__PointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__PointCloud__Sequence__destroy(foxglove_msgs__msg__PointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__PointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__PointCloud__Sequence__are_equal(const foxglove_msgs__msg__PointCloud__Sequence * lhs, const foxglove_msgs__msg__PointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__PointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__PointCloud__Sequence__copy(
  const foxglove_msgs__msg__PointCloud__Sequence * input,
  foxglove_msgs__msg__PointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__PointCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__PointCloud * data =
      (foxglove_msgs__msg__PointCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__PointCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__PointCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__PointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
