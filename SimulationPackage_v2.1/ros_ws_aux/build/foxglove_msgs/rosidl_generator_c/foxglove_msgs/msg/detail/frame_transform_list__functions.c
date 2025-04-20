// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/FrameTransformList.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/frame_transform_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `transforms`
#include "foxglove_msgs/msg/detail/frame_transform__functions.h"

bool
foxglove_msgs__msg__FrameTransformList__init(foxglove_msgs__msg__FrameTransformList * msg)
{
  if (!msg) {
    return false;
  }
  // transforms
  if (!foxglove_msgs__msg__FrameTransform__Sequence__init(&msg->transforms, 0)) {
    foxglove_msgs__msg__FrameTransformList__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__FrameTransformList__fini(foxglove_msgs__msg__FrameTransformList * msg)
{
  if (!msg) {
    return;
  }
  // transforms
  foxglove_msgs__msg__FrameTransform__Sequence__fini(&msg->transforms);
}

bool
foxglove_msgs__msg__FrameTransformList__are_equal(const foxglove_msgs__msg__FrameTransformList * lhs, const foxglove_msgs__msg__FrameTransformList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transforms
  if (!foxglove_msgs__msg__FrameTransform__Sequence__are_equal(
      &(lhs->transforms), &(rhs->transforms)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__FrameTransformList__copy(
  const foxglove_msgs__msg__FrameTransformList * input,
  foxglove_msgs__msg__FrameTransformList * output)
{
  if (!input || !output) {
    return false;
  }
  // transforms
  if (!foxglove_msgs__msg__FrameTransform__Sequence__copy(
      &(input->transforms), &(output->transforms)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__FrameTransformList *
foxglove_msgs__msg__FrameTransformList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__FrameTransformList * msg = (foxglove_msgs__msg__FrameTransformList *)allocator.allocate(sizeof(foxglove_msgs__msg__FrameTransformList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__FrameTransformList));
  bool success = foxglove_msgs__msg__FrameTransformList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__FrameTransformList__destroy(foxglove_msgs__msg__FrameTransformList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__FrameTransformList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__FrameTransformList__Sequence__init(foxglove_msgs__msg__FrameTransformList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__FrameTransformList * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__FrameTransformList *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__FrameTransformList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__FrameTransformList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__FrameTransformList__fini(&data[i - 1]);
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
foxglove_msgs__msg__FrameTransformList__Sequence__fini(foxglove_msgs__msg__FrameTransformList__Sequence * array)
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
      foxglove_msgs__msg__FrameTransformList__fini(&array->data[i]);
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

foxglove_msgs__msg__FrameTransformList__Sequence *
foxglove_msgs__msg__FrameTransformList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__FrameTransformList__Sequence * array = (foxglove_msgs__msg__FrameTransformList__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__FrameTransformList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__FrameTransformList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__FrameTransformList__Sequence__destroy(foxglove_msgs__msg__FrameTransformList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__FrameTransformList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__FrameTransformList__Sequence__are_equal(const foxglove_msgs__msg__FrameTransformList__Sequence * lhs, const foxglove_msgs__msg__FrameTransformList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__FrameTransformList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__FrameTransformList__Sequence__copy(
  const foxglove_msgs__msg__FrameTransformList__Sequence * input,
  foxglove_msgs__msg__FrameTransformList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__FrameTransformList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__FrameTransformList * data =
      (foxglove_msgs__msg__FrameTransformList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__FrameTransformList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__FrameTransformList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__FrameTransformList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
