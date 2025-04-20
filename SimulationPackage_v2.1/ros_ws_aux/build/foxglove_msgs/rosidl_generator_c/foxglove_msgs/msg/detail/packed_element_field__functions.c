// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/PackedElementField.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/packed_element_field__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
foxglove_msgs__msg__PackedElementField__init(foxglove_msgs__msg__PackedElementField * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    foxglove_msgs__msg__PackedElementField__fini(msg);
    return false;
  }
  // offset
  // type
  return true;
}

void
foxglove_msgs__msg__PackedElementField__fini(foxglove_msgs__msg__PackedElementField * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // offset
  // type
}

bool
foxglove_msgs__msg__PackedElementField__are_equal(const foxglove_msgs__msg__PackedElementField * lhs, const foxglove_msgs__msg__PackedElementField * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
foxglove_msgs__msg__PackedElementField__copy(
  const foxglove_msgs__msg__PackedElementField * input,
  foxglove_msgs__msg__PackedElementField * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // offset
  output->offset = input->offset;
  // type
  output->type = input->type;
  return true;
}

foxglove_msgs__msg__PackedElementField *
foxglove_msgs__msg__PackedElementField__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PackedElementField * msg = (foxglove_msgs__msg__PackedElementField *)allocator.allocate(sizeof(foxglove_msgs__msg__PackedElementField), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__PackedElementField));
  bool success = foxglove_msgs__msg__PackedElementField__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__PackedElementField__destroy(foxglove_msgs__msg__PackedElementField * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__PackedElementField__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__PackedElementField__Sequence__init(foxglove_msgs__msg__PackedElementField__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PackedElementField * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__PackedElementField *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__PackedElementField), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__PackedElementField__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__PackedElementField__fini(&data[i - 1]);
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
foxglove_msgs__msg__PackedElementField__Sequence__fini(foxglove_msgs__msg__PackedElementField__Sequence * array)
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
      foxglove_msgs__msg__PackedElementField__fini(&array->data[i]);
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

foxglove_msgs__msg__PackedElementField__Sequence *
foxglove_msgs__msg__PackedElementField__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__PackedElementField__Sequence * array = (foxglove_msgs__msg__PackedElementField__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__PackedElementField__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__PackedElementField__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__PackedElementField__Sequence__destroy(foxglove_msgs__msg__PackedElementField__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__PackedElementField__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__PackedElementField__Sequence__are_equal(const foxglove_msgs__msg__PackedElementField__Sequence * lhs, const foxglove_msgs__msg__PackedElementField__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__PackedElementField__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__PackedElementField__Sequence__copy(
  const foxglove_msgs__msg__PackedElementField__Sequence * input,
  foxglove_msgs__msg__PackedElementField__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__PackedElementField);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__PackedElementField * data =
      (foxglove_msgs__msg__PackedElementField *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__PackedElementField__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__PackedElementField__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__PackedElementField__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
