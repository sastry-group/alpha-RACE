// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/TextAnnotation.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/text_annotation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `position`
#include "foxglove_msgs/msg/detail/point2__functions.h"
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `text_color`
// Member `background_color`
#include "foxglove_msgs/msg/detail/color__functions.h"

bool
foxglove_msgs__msg__TextAnnotation__init(foxglove_msgs__msg__TextAnnotation * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
    return false;
  }
  // position
  if (!foxglove_msgs__msg__Point2__init(&msg->position)) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
    return false;
  }
  // font_size
  // text_color
  if (!foxglove_msgs__msg__Color__init(&msg->text_color)) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
    return false;
  }
  // background_color
  if (!foxglove_msgs__msg__Color__init(&msg->background_color)) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__TextAnnotation__fini(foxglove_msgs__msg__TextAnnotation * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // position
  foxglove_msgs__msg__Point2__fini(&msg->position);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // font_size
  // text_color
  foxglove_msgs__msg__Color__fini(&msg->text_color);
  // background_color
  foxglove_msgs__msg__Color__fini(&msg->background_color);
}

bool
foxglove_msgs__msg__TextAnnotation__are_equal(const foxglove_msgs__msg__TextAnnotation * lhs, const foxglove_msgs__msg__TextAnnotation * rhs)
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
  // position
  if (!foxglove_msgs__msg__Point2__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // font_size
  if (lhs->font_size != rhs->font_size) {
    return false;
  }
  // text_color
  if (!foxglove_msgs__msg__Color__are_equal(
      &(lhs->text_color), &(rhs->text_color)))
  {
    return false;
  }
  // background_color
  if (!foxglove_msgs__msg__Color__are_equal(
      &(lhs->background_color), &(rhs->background_color)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__TextAnnotation__copy(
  const foxglove_msgs__msg__TextAnnotation * input,
  foxglove_msgs__msg__TextAnnotation * output)
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
  // position
  if (!foxglove_msgs__msg__Point2__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // font_size
  output->font_size = input->font_size;
  // text_color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->text_color), &(output->text_color)))
  {
    return false;
  }
  // background_color
  if (!foxglove_msgs__msg__Color__copy(
      &(input->background_color), &(output->background_color)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__TextAnnotation *
foxglove_msgs__msg__TextAnnotation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TextAnnotation * msg = (foxglove_msgs__msg__TextAnnotation *)allocator.allocate(sizeof(foxglove_msgs__msg__TextAnnotation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__TextAnnotation));
  bool success = foxglove_msgs__msg__TextAnnotation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__TextAnnotation__destroy(foxglove_msgs__msg__TextAnnotation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__TextAnnotation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__TextAnnotation__Sequence__init(foxglove_msgs__msg__TextAnnotation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TextAnnotation * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__TextAnnotation *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__TextAnnotation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__TextAnnotation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__TextAnnotation__fini(&data[i - 1]);
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
foxglove_msgs__msg__TextAnnotation__Sequence__fini(foxglove_msgs__msg__TextAnnotation__Sequence * array)
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
      foxglove_msgs__msg__TextAnnotation__fini(&array->data[i]);
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

foxglove_msgs__msg__TextAnnotation__Sequence *
foxglove_msgs__msg__TextAnnotation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__TextAnnotation__Sequence * array = (foxglove_msgs__msg__TextAnnotation__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__TextAnnotation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__TextAnnotation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__TextAnnotation__Sequence__destroy(foxglove_msgs__msg__TextAnnotation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__TextAnnotation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__TextAnnotation__Sequence__are_equal(const foxglove_msgs__msg__TextAnnotation__Sequence * lhs, const foxglove_msgs__msg__TextAnnotation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__TextAnnotation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__TextAnnotation__Sequence__copy(
  const foxglove_msgs__msg__TextAnnotation__Sequence * input,
  foxglove_msgs__msg__TextAnnotation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__TextAnnotation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__TextAnnotation * data =
      (foxglove_msgs__msg__TextAnnotation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__TextAnnotation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__TextAnnotation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__TextAnnotation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
