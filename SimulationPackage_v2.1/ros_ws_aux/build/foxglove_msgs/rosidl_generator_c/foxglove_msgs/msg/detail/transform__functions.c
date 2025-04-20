// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/Transform.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `translation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `rotation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
foxglove_msgs__msg__Transform__init(foxglove_msgs__msg__Transform * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__Transform__fini(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Vector3__init(&msg->translation)) {
    foxglove_msgs__msg__Transform__fini(msg);
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->rotation)) {
    foxglove_msgs__msg__Transform__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__Transform__fini(foxglove_msgs__msg__Transform * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // translation
  geometry_msgs__msg__Vector3__fini(&msg->translation);
  // rotation
  geometry_msgs__msg__Quaternion__fini(&msg->rotation);
}

bool
foxglove_msgs__msg__Transform__are_equal(const foxglove_msgs__msg__Transform * lhs, const foxglove_msgs__msg__Transform * rhs)
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
  // translation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__Transform__copy(
  const foxglove_msgs__msg__Transform * input,
  foxglove_msgs__msg__Transform * output)
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
  // translation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__Transform *
foxglove_msgs__msg__Transform__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Transform * msg = (foxglove_msgs__msg__Transform *)allocator.allocate(sizeof(foxglove_msgs__msg__Transform), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__Transform));
  bool success = foxglove_msgs__msg__Transform__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__Transform__destroy(foxglove_msgs__msg__Transform * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__Transform__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__Transform__Sequence__init(foxglove_msgs__msg__Transform__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Transform * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__Transform *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__Transform), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__Transform__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__Transform__fini(&data[i - 1]);
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
foxglove_msgs__msg__Transform__Sequence__fini(foxglove_msgs__msg__Transform__Sequence * array)
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
      foxglove_msgs__msg__Transform__fini(&array->data[i]);
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

foxglove_msgs__msg__Transform__Sequence *
foxglove_msgs__msg__Transform__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__Transform__Sequence * array = (foxglove_msgs__msg__Transform__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__Transform__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__Transform__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__Transform__Sequence__destroy(foxglove_msgs__msg__Transform__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__Transform__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__Transform__Sequence__are_equal(const foxglove_msgs__msg__Transform__Sequence * lhs, const foxglove_msgs__msg__Transform__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__Transform__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__Transform__Sequence__copy(
  const foxglove_msgs__msg__Transform__Sequence * input,
  foxglove_msgs__msg__Transform__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__Transform);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__Transform * data =
      (foxglove_msgs__msg__Transform *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__Transform__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__Transform__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__Transform__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
