// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/translation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `translation`
#include "novatel_oem7_msgs/msg/detail/translation_offset__functions.h"
// Member `frame`
#include "novatel_oem7_msgs/msg/detail/ins_frame__functions.h"
// Member `translation_source`
#include "novatel_oem7_msgs/msg/detail/ins_source_status__functions.h"

bool
novatel_oem7_msgs__msg__Translation__init(novatel_oem7_msgs__msg__Translation * msg)
{
  if (!msg) {
    return false;
  }
  // translation
  if (!novatel_oem7_msgs__msg__TranslationOffset__init(&msg->translation)) {
    novatel_oem7_msgs__msg__Translation__fini(msg);
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__init(&msg->frame)) {
    novatel_oem7_msgs__msg__Translation__fini(msg);
    return false;
  }
  // x_offset
  // y_offset
  // z_offset
  // x_uncertainty
  // y_uncertainty
  // z_uncertainty
  // translation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__init(&msg->translation_source)) {
    novatel_oem7_msgs__msg__Translation__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__Translation__fini(novatel_oem7_msgs__msg__Translation * msg)
{
  if (!msg) {
    return;
  }
  // translation
  novatel_oem7_msgs__msg__TranslationOffset__fini(&msg->translation);
  // frame
  novatel_oem7_msgs__msg__INSFrame__fini(&msg->frame);
  // x_offset
  // y_offset
  // z_offset
  // x_uncertainty
  // y_uncertainty
  // z_uncertainty
  // translation_source
  novatel_oem7_msgs__msg__INSSourceStatus__fini(&msg->translation_source);
}

bool
novatel_oem7_msgs__msg__Translation__are_equal(const novatel_oem7_msgs__msg__Translation * lhs, const novatel_oem7_msgs__msg__Translation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // translation
  if (!novatel_oem7_msgs__msg__TranslationOffset__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // x_offset
  if (lhs->x_offset != rhs->x_offset) {
    return false;
  }
  // y_offset
  if (lhs->y_offset != rhs->y_offset) {
    return false;
  }
  // z_offset
  if (lhs->z_offset != rhs->z_offset) {
    return false;
  }
  // x_uncertainty
  if (lhs->x_uncertainty != rhs->x_uncertainty) {
    return false;
  }
  // y_uncertainty
  if (lhs->y_uncertainty != rhs->y_uncertainty) {
    return false;
  }
  // z_uncertainty
  if (lhs->z_uncertainty != rhs->z_uncertainty) {
    return false;
  }
  // translation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__are_equal(
      &(lhs->translation_source), &(rhs->translation_source)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Translation__copy(
  const novatel_oem7_msgs__msg__Translation * input,
  novatel_oem7_msgs__msg__Translation * output)
{
  if (!input || !output) {
    return false;
  }
  // translation
  if (!novatel_oem7_msgs__msg__TranslationOffset__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  // frame
  if (!novatel_oem7_msgs__msg__INSFrame__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // x_offset
  output->x_offset = input->x_offset;
  // y_offset
  output->y_offset = input->y_offset;
  // z_offset
  output->z_offset = input->z_offset;
  // x_uncertainty
  output->x_uncertainty = input->x_uncertainty;
  // y_uncertainty
  output->y_uncertainty = input->y_uncertainty;
  // z_uncertainty
  output->z_uncertainty = input->z_uncertainty;
  // translation_source
  if (!novatel_oem7_msgs__msg__INSSourceStatus__copy(
      &(input->translation_source), &(output->translation_source)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__Translation *
novatel_oem7_msgs__msg__Translation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Translation * msg = (novatel_oem7_msgs__msg__Translation *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Translation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__Translation));
  bool success = novatel_oem7_msgs__msg__Translation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__Translation__destroy(novatel_oem7_msgs__msg__Translation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__Translation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__Translation__Sequence__init(novatel_oem7_msgs__msg__Translation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Translation * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__Translation *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__Translation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__Translation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__Translation__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__Translation__Sequence__fini(novatel_oem7_msgs__msg__Translation__Sequence * array)
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
      novatel_oem7_msgs__msg__Translation__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__Translation__Sequence *
novatel_oem7_msgs__msg__Translation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__Translation__Sequence * array = (novatel_oem7_msgs__msg__Translation__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__Translation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__Translation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__Translation__Sequence__destroy(novatel_oem7_msgs__msg__Translation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__Translation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__Translation__Sequence__are_equal(const novatel_oem7_msgs__msg__Translation__Sequence * lhs, const novatel_oem7_msgs__msg__Translation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__Translation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__Translation__Sequence__copy(
  const novatel_oem7_msgs__msg__Translation__Sequence * input,
  novatel_oem7_msgs__msg__Translation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__Translation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__Translation * data =
      (novatel_oem7_msgs__msg__Translation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__Translation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__Translation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__Translation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
