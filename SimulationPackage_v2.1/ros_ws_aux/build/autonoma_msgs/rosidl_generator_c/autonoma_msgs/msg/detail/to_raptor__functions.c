// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/ToRaptor.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/to_raptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autonoma_msgs__msg__ToRaptor__init(autonoma_msgs__msg__ToRaptor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__ToRaptor__fini(msg);
    return false;
  }
  // track_cond_ack
  // veh_sig_ack
  // ct_state
  // rolling_counter
  // veh_num
  return true;
}

void
autonoma_msgs__msg__ToRaptor__fini(autonoma_msgs__msg__ToRaptor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // track_cond_ack
  // veh_sig_ack
  // ct_state
  // rolling_counter
  // veh_num
}

bool
autonoma_msgs__msg__ToRaptor__are_equal(const autonoma_msgs__msg__ToRaptor * lhs, const autonoma_msgs__msg__ToRaptor * rhs)
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
  // track_cond_ack
  if (lhs->track_cond_ack != rhs->track_cond_ack) {
    return false;
  }
  // veh_sig_ack
  if (lhs->veh_sig_ack != rhs->veh_sig_ack) {
    return false;
  }
  // ct_state
  if (lhs->ct_state != rhs->ct_state) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // veh_num
  if (lhs->veh_num != rhs->veh_num) {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__ToRaptor__copy(
  const autonoma_msgs__msg__ToRaptor * input,
  autonoma_msgs__msg__ToRaptor * output)
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
  // track_cond_ack
  output->track_cond_ack = input->track_cond_ack;
  // veh_sig_ack
  output->veh_sig_ack = input->veh_sig_ack;
  // ct_state
  output->ct_state = input->ct_state;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // veh_num
  output->veh_num = input->veh_num;
  return true;
}

autonoma_msgs__msg__ToRaptor *
autonoma_msgs__msg__ToRaptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__ToRaptor * msg = (autonoma_msgs__msg__ToRaptor *)allocator.allocate(sizeof(autonoma_msgs__msg__ToRaptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__ToRaptor));
  bool success = autonoma_msgs__msg__ToRaptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__ToRaptor__destroy(autonoma_msgs__msg__ToRaptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__ToRaptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__ToRaptor__Sequence__init(autonoma_msgs__msg__ToRaptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__ToRaptor * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__ToRaptor *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__ToRaptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__ToRaptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__ToRaptor__fini(&data[i - 1]);
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
autonoma_msgs__msg__ToRaptor__Sequence__fini(autonoma_msgs__msg__ToRaptor__Sequence * array)
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
      autonoma_msgs__msg__ToRaptor__fini(&array->data[i]);
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

autonoma_msgs__msg__ToRaptor__Sequence *
autonoma_msgs__msg__ToRaptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__ToRaptor__Sequence * array = (autonoma_msgs__msg__ToRaptor__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__ToRaptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__ToRaptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__ToRaptor__Sequence__destroy(autonoma_msgs__msg__ToRaptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__ToRaptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__ToRaptor__Sequence__are_equal(const autonoma_msgs__msg__ToRaptor__Sequence * lhs, const autonoma_msgs__msg__ToRaptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__ToRaptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__ToRaptor__Sequence__copy(
  const autonoma_msgs__msg__ToRaptor__Sequence * input,
  autonoma_msgs__msg__ToRaptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__ToRaptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__ToRaptor * data =
      (autonoma_msgs__msg__ToRaptor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__ToRaptor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__ToRaptor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__ToRaptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
