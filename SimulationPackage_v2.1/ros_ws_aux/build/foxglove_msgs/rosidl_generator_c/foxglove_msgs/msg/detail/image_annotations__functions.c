// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/image_annotations__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `circles`
#include "foxglove_msgs/msg/detail/circle_annotation__functions.h"
// Member `points`
#include "foxglove_msgs/msg/detail/points_annotation__functions.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_annotation__functions.h"

bool
foxglove_msgs__msg__ImageAnnotations__init(foxglove_msgs__msg__ImageAnnotations * msg)
{
  if (!msg) {
    return false;
  }
  // circles
  if (!foxglove_msgs__msg__CircleAnnotation__Sequence__init(&msg->circles, 0)) {
    foxglove_msgs__msg__ImageAnnotations__fini(msg);
    return false;
  }
  // points
  if (!foxglove_msgs__msg__PointsAnnotation__Sequence__init(&msg->points, 0)) {
    foxglove_msgs__msg__ImageAnnotations__fini(msg);
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextAnnotation__Sequence__init(&msg->texts, 0)) {
    foxglove_msgs__msg__ImageAnnotations__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__ImageAnnotations__fini(foxglove_msgs__msg__ImageAnnotations * msg)
{
  if (!msg) {
    return;
  }
  // circles
  foxglove_msgs__msg__CircleAnnotation__Sequence__fini(&msg->circles);
  // points
  foxglove_msgs__msg__PointsAnnotation__Sequence__fini(&msg->points);
  // texts
  foxglove_msgs__msg__TextAnnotation__Sequence__fini(&msg->texts);
}

bool
foxglove_msgs__msg__ImageAnnotations__are_equal(const foxglove_msgs__msg__ImageAnnotations * lhs, const foxglove_msgs__msg__ImageAnnotations * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // circles
  if (!foxglove_msgs__msg__CircleAnnotation__Sequence__are_equal(
      &(lhs->circles), &(rhs->circles)))
  {
    return false;
  }
  // points
  if (!foxglove_msgs__msg__PointsAnnotation__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextAnnotation__Sequence__are_equal(
      &(lhs->texts), &(rhs->texts)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__ImageAnnotations__copy(
  const foxglove_msgs__msg__ImageAnnotations * input,
  foxglove_msgs__msg__ImageAnnotations * output)
{
  if (!input || !output) {
    return false;
  }
  // circles
  if (!foxglove_msgs__msg__CircleAnnotation__Sequence__copy(
      &(input->circles), &(output->circles)))
  {
    return false;
  }
  // points
  if (!foxglove_msgs__msg__PointsAnnotation__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // texts
  if (!foxglove_msgs__msg__TextAnnotation__Sequence__copy(
      &(input->texts), &(output->texts)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__ImageAnnotations *
foxglove_msgs__msg__ImageAnnotations__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageAnnotations * msg = (foxglove_msgs__msg__ImageAnnotations *)allocator.allocate(sizeof(foxglove_msgs__msg__ImageAnnotations), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__ImageAnnotations));
  bool success = foxglove_msgs__msg__ImageAnnotations__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__ImageAnnotations__destroy(foxglove_msgs__msg__ImageAnnotations * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__ImageAnnotations__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__ImageAnnotations__Sequence__init(foxglove_msgs__msg__ImageAnnotations__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageAnnotations * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__ImageAnnotations *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__ImageAnnotations), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__ImageAnnotations__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__ImageAnnotations__fini(&data[i - 1]);
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
foxglove_msgs__msg__ImageAnnotations__Sequence__fini(foxglove_msgs__msg__ImageAnnotations__Sequence * array)
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
      foxglove_msgs__msg__ImageAnnotations__fini(&array->data[i]);
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

foxglove_msgs__msg__ImageAnnotations__Sequence *
foxglove_msgs__msg__ImageAnnotations__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageAnnotations__Sequence * array = (foxglove_msgs__msg__ImageAnnotations__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__ImageAnnotations__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__ImageAnnotations__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__ImageAnnotations__Sequence__destroy(foxglove_msgs__msg__ImageAnnotations__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__ImageAnnotations__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__ImageAnnotations__Sequence__are_equal(const foxglove_msgs__msg__ImageAnnotations__Sequence * lhs, const foxglove_msgs__msg__ImageAnnotations__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__ImageAnnotations__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__ImageAnnotations__Sequence__copy(
  const foxglove_msgs__msg__ImageAnnotations__Sequence * input,
  foxglove_msgs__msg__ImageAnnotations__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__ImageAnnotations);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__ImageAnnotations * data =
      (foxglove_msgs__msg__ImageAnnotations *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__ImageAnnotations__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__ImageAnnotations__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__ImageAnnotations__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
