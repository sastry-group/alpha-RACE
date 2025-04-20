// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/ImageMarkerArray.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/image_marker_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/detail/image_marker__functions.h"

bool
foxglove_msgs__msg__ImageMarkerArray__init(foxglove_msgs__msg__ImageMarkerArray * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__ImageMarker__Sequence__init(&msg->markers, 0)) {
    foxglove_msgs__msg__ImageMarkerArray__fini(msg);
    return false;
  }
  return true;
}

void
foxglove_msgs__msg__ImageMarkerArray__fini(foxglove_msgs__msg__ImageMarkerArray * msg)
{
  if (!msg) {
    return;
  }
  // markers
  visualization_msgs__msg__ImageMarker__Sequence__fini(&msg->markers);
}

bool
foxglove_msgs__msg__ImageMarkerArray__are_equal(const foxglove_msgs__msg__ImageMarkerArray * lhs, const foxglove_msgs__msg__ImageMarkerArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__ImageMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__ImageMarkerArray__copy(
  const foxglove_msgs__msg__ImageMarkerArray * input,
  foxglove_msgs__msg__ImageMarkerArray * output)
{
  if (!input || !output) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__ImageMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

foxglove_msgs__msg__ImageMarkerArray *
foxglove_msgs__msg__ImageMarkerArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageMarkerArray * msg = (foxglove_msgs__msg__ImageMarkerArray *)allocator.allocate(sizeof(foxglove_msgs__msg__ImageMarkerArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__ImageMarkerArray));
  bool success = foxglove_msgs__msg__ImageMarkerArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__ImageMarkerArray__destroy(foxglove_msgs__msg__ImageMarkerArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__ImageMarkerArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__ImageMarkerArray__Sequence__init(foxglove_msgs__msg__ImageMarkerArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageMarkerArray * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__ImageMarkerArray *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__ImageMarkerArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__ImageMarkerArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__ImageMarkerArray__fini(&data[i - 1]);
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
foxglove_msgs__msg__ImageMarkerArray__Sequence__fini(foxglove_msgs__msg__ImageMarkerArray__Sequence * array)
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
      foxglove_msgs__msg__ImageMarkerArray__fini(&array->data[i]);
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

foxglove_msgs__msg__ImageMarkerArray__Sequence *
foxglove_msgs__msg__ImageMarkerArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__ImageMarkerArray__Sequence * array = (foxglove_msgs__msg__ImageMarkerArray__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__ImageMarkerArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__ImageMarkerArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__ImageMarkerArray__Sequence__destroy(foxglove_msgs__msg__ImageMarkerArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__ImageMarkerArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__ImageMarkerArray__Sequence__are_equal(const foxglove_msgs__msg__ImageMarkerArray__Sequence * lhs, const foxglove_msgs__msg__ImageMarkerArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__ImageMarkerArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__ImageMarkerArray__Sequence__copy(
  const foxglove_msgs__msg__ImageMarkerArray__Sequence * input,
  foxglove_msgs__msg__ImageMarkerArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__ImageMarkerArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__ImageMarkerArray * data =
      (foxglove_msgs__msg__ImageMarkerArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__ImageMarkerArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__ImageMarkerArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__ImageMarkerArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
