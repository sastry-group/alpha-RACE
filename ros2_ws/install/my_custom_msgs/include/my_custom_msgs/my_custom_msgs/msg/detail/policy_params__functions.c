// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice
#include "my_custom_msgs/msg/detail/policy_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_custom_msgs__msg__PolicyParams__init(my_custom_msgs__msg__PolicyParams * msg)
{
  if (!msg) {
    return false;
  }
  // sf1
  // sf2
  // speed_factor
  // lookahead_factor
  // blocking_factor
  return true;
}

void
my_custom_msgs__msg__PolicyParams__fini(my_custom_msgs__msg__PolicyParams * msg)
{
  if (!msg) {
    return;
  }
  // sf1
  // sf2
  // speed_factor
  // lookahead_factor
  // blocking_factor
}

bool
my_custom_msgs__msg__PolicyParams__are_equal(const my_custom_msgs__msg__PolicyParams * lhs, const my_custom_msgs__msg__PolicyParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sf1
  if (lhs->sf1 != rhs->sf1) {
    return false;
  }
  // sf2
  if (lhs->sf2 != rhs->sf2) {
    return false;
  }
  // speed_factor
  if (lhs->speed_factor != rhs->speed_factor) {
    return false;
  }
  // lookahead_factor
  if (lhs->lookahead_factor != rhs->lookahead_factor) {
    return false;
  }
  // blocking_factor
  if (lhs->blocking_factor != rhs->blocking_factor) {
    return false;
  }
  return true;
}

bool
my_custom_msgs__msg__PolicyParams__copy(
  const my_custom_msgs__msg__PolicyParams * input,
  my_custom_msgs__msg__PolicyParams * output)
{
  if (!input || !output) {
    return false;
  }
  // sf1
  output->sf1 = input->sf1;
  // sf2
  output->sf2 = input->sf2;
  // speed_factor
  output->speed_factor = input->speed_factor;
  // lookahead_factor
  output->lookahead_factor = input->lookahead_factor;
  // blocking_factor
  output->blocking_factor = input->blocking_factor;
  return true;
}

my_custom_msgs__msg__PolicyParams *
my_custom_msgs__msg__PolicyParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_msgs__msg__PolicyParams * msg = (my_custom_msgs__msg__PolicyParams *)allocator.allocate(sizeof(my_custom_msgs__msg__PolicyParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_msgs__msg__PolicyParams));
  bool success = my_custom_msgs__msg__PolicyParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_msgs__msg__PolicyParams__destroy(my_custom_msgs__msg__PolicyParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_msgs__msg__PolicyParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_msgs__msg__PolicyParams__Sequence__init(my_custom_msgs__msg__PolicyParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_msgs__msg__PolicyParams * data = NULL;

  if (size) {
    data = (my_custom_msgs__msg__PolicyParams *)allocator.zero_allocate(size, sizeof(my_custom_msgs__msg__PolicyParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_msgs__msg__PolicyParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_msgs__msg__PolicyParams__fini(&data[i - 1]);
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
my_custom_msgs__msg__PolicyParams__Sequence__fini(my_custom_msgs__msg__PolicyParams__Sequence * array)
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
      my_custom_msgs__msg__PolicyParams__fini(&array->data[i]);
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

my_custom_msgs__msg__PolicyParams__Sequence *
my_custom_msgs__msg__PolicyParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_msgs__msg__PolicyParams__Sequence * array = (my_custom_msgs__msg__PolicyParams__Sequence *)allocator.allocate(sizeof(my_custom_msgs__msg__PolicyParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_msgs__msg__PolicyParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_msgs__msg__PolicyParams__Sequence__destroy(my_custom_msgs__msg__PolicyParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_msgs__msg__PolicyParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_msgs__msg__PolicyParams__Sequence__are_equal(const my_custom_msgs__msg__PolicyParams__Sequence * lhs, const my_custom_msgs__msg__PolicyParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_msgs__msg__PolicyParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_msgs__msg__PolicyParams__Sequence__copy(
  const my_custom_msgs__msg__PolicyParams__Sequence * input,
  my_custom_msgs__msg__PolicyParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_msgs__msg__PolicyParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_msgs__msg__PolicyParams * data =
      (my_custom_msgs__msg__PolicyParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_msgs__msg__PolicyParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_msgs__msg__PolicyParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_msgs__msg__PolicyParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
