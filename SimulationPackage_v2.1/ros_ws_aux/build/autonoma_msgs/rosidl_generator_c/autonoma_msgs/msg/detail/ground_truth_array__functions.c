// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/ground_truth_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicles`
#include "autonoma_msgs/msg/detail/ground_truth__functions.h"

bool
autonoma_msgs__msg__GroundTruthArray__init(autonoma_msgs__msg__GroundTruthArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__GroundTruthArray__fini(msg);
    return false;
  }
  // vehicles
  if (!autonoma_msgs__msg__GroundTruth__Sequence__init(&msg->vehicles, 0)) {
    autonoma_msgs__msg__GroundTruthArray__fini(msg);
    return false;
  }
  return true;
}

void
autonoma_msgs__msg__GroundTruthArray__fini(autonoma_msgs__msg__GroundTruthArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicles
  autonoma_msgs__msg__GroundTruth__Sequence__fini(&msg->vehicles);
}

bool
autonoma_msgs__msg__GroundTruthArray__are_equal(const autonoma_msgs__msg__GroundTruthArray * lhs, const autonoma_msgs__msg__GroundTruthArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicles
  if (!autonoma_msgs__msg__GroundTruth__Sequence__are_equal(
      &(lhs->vehicles), &(rhs->vehicles)))
  {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__GroundTruthArray__copy(
  const autonoma_msgs__msg__GroundTruthArray * input,
  autonoma_msgs__msg__GroundTruthArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicles
  if (!autonoma_msgs__msg__GroundTruth__Sequence__copy(
      &(input->vehicles), &(output->vehicles)))
  {
    return false;
  }
  return true;
}

autonoma_msgs__msg__GroundTruthArray *
autonoma_msgs__msg__GroundTruthArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruthArray * msg = (autonoma_msgs__msg__GroundTruthArray *)allocator.allocate(sizeof(autonoma_msgs__msg__GroundTruthArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__GroundTruthArray));
  bool success = autonoma_msgs__msg__GroundTruthArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__GroundTruthArray__destroy(autonoma_msgs__msg__GroundTruthArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__GroundTruthArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__GroundTruthArray__Sequence__init(autonoma_msgs__msg__GroundTruthArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruthArray * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__GroundTruthArray *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__GroundTruthArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__GroundTruthArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__GroundTruthArray__fini(&data[i - 1]);
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
autonoma_msgs__msg__GroundTruthArray__Sequence__fini(autonoma_msgs__msg__GroundTruthArray__Sequence * array)
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
      autonoma_msgs__msg__GroundTruthArray__fini(&array->data[i]);
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

autonoma_msgs__msg__GroundTruthArray__Sequence *
autonoma_msgs__msg__GroundTruthArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruthArray__Sequence * array = (autonoma_msgs__msg__GroundTruthArray__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__GroundTruthArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__GroundTruthArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__GroundTruthArray__Sequence__destroy(autonoma_msgs__msg__GroundTruthArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__GroundTruthArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__GroundTruthArray__Sequence__are_equal(const autonoma_msgs__msg__GroundTruthArray__Sequence * lhs, const autonoma_msgs__msg__GroundTruthArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__GroundTruthArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__GroundTruthArray__Sequence__copy(
  const autonoma_msgs__msg__GroundTruthArray__Sequence * input,
  autonoma_msgs__msg__GroundTruthArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__GroundTruthArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__GroundTruthArray * data =
      (autonoma_msgs__msg__GroundTruthArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__GroundTruthArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__GroundTruthArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__GroundTruthArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
