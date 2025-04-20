// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:srv/Oem7AbasciiCmd.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/srv/detail/oem7_abascii_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__init(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__are_equal(const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * lhs, const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__copy(
  const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * input,
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request *
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * msg = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request *)allocator.allocate(sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request));
  bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__destroy(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__init(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(&data[i - 1]);
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
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__fini(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * array)
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
      novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(&array->data[i]);
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

novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence *
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * array = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__destroy(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__are_equal(const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * lhs, const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence__copy(
  const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * input,
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * data =
      (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `rsp`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__init(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rsp
  if (!rosidl_runtime_c__String__init(&msg->rsp)) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // rsp
  rosidl_runtime_c__String__fini(&msg->rsp);
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__are_equal(const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * lhs, const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rsp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rsp), &(rhs->rsp)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__copy(
  const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * input,
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // rsp
  if (!rosidl_runtime_c__String__copy(
      &(input->rsp), &(output->rsp)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response *
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * msg = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response *)allocator.allocate(sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response));
  bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__destroy(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__init(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(&data[i - 1]);
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
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__fini(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * array)
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
      novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(&array->data[i]);
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

novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence *
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * array = (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__destroy(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__are_equal(const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * lhs, const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence__copy(
  const novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * input,
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * data =
      (novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
