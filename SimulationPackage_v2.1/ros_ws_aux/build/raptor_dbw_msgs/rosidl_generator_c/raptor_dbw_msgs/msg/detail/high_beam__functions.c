// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/HighBeam.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/high_beam__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
raptor_dbw_msgs__msg__HighBeam__init(raptor_dbw_msgs__msg__HighBeam * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
raptor_dbw_msgs__msg__HighBeam__fini(raptor_dbw_msgs__msg__HighBeam * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
raptor_dbw_msgs__msg__HighBeam__are_equal(const raptor_dbw_msgs__msg__HighBeam * lhs, const raptor_dbw_msgs__msg__HighBeam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__HighBeam__copy(
  const raptor_dbw_msgs__msg__HighBeam * input,
  raptor_dbw_msgs__msg__HighBeam * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

raptor_dbw_msgs__msg__HighBeam *
raptor_dbw_msgs__msg__HighBeam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__HighBeam * msg = (raptor_dbw_msgs__msg__HighBeam *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__HighBeam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__HighBeam));
  bool success = raptor_dbw_msgs__msg__HighBeam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__HighBeam__destroy(raptor_dbw_msgs__msg__HighBeam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__HighBeam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__HighBeam__Sequence__init(raptor_dbw_msgs__msg__HighBeam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__HighBeam * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__HighBeam *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__HighBeam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__HighBeam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__HighBeam__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__HighBeam__Sequence__fini(raptor_dbw_msgs__msg__HighBeam__Sequence * array)
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
      raptor_dbw_msgs__msg__HighBeam__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__HighBeam__Sequence *
raptor_dbw_msgs__msg__HighBeam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__HighBeam__Sequence * array = (raptor_dbw_msgs__msg__HighBeam__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__HighBeam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__HighBeam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__HighBeam__Sequence__destroy(raptor_dbw_msgs__msg__HighBeam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__HighBeam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__HighBeam__Sequence__are_equal(const raptor_dbw_msgs__msg__HighBeam__Sequence * lhs, const raptor_dbw_msgs__msg__HighBeam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__HighBeam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__HighBeam__Sequence__copy(
  const raptor_dbw_msgs__msg__HighBeam__Sequence * input,
  raptor_dbw_msgs__msg__HighBeam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__HighBeam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__HighBeam * data =
      (raptor_dbw_msgs__msg__HighBeam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__HighBeam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__HighBeam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__HighBeam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
