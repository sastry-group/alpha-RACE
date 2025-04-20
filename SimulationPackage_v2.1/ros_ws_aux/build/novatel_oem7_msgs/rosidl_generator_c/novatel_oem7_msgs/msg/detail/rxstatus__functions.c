// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rxstatus__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"
// Member `error_bits`
// Member `rxstat_bits`
// Member `aux1_stat_bits`
// Member `aux2_stat_bits`
// Member `aux3_stat_bits`
// Member `aux4_stat_bits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_strs`
// Member `rxstat_strs`
// Member `aux1_stat_strs`
// Member `aux2_stat_strs`
// Member `aux3_stat_strs`
// Member `aux4_stat_strs`
#include "rosidl_runtime_c/string_functions.h"

bool
novatel_oem7_msgs__msg__RXSTATUS__init(novatel_oem7_msgs__msg__RXSTATUS * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // error
  // num_status_codes
  // rxstat
  // rxstat_pri_mask
  // rxstat_set_mask
  // rxstat_clr_mask
  // aux1_stat
  // aux1_stat_pri
  // aux1_stat_set
  // aux1_stat_clr
  // aux2_stat
  // aux2_stat_pri
  // aux2_stat_set
  // aux2_stat_clr
  // aux3_stat
  // aux3_stat_pri
  // aux3_stat_set
  // aux3_stat_clr
  // aux4_stat
  // aux4_stat_pri
  // aux4_stat_set
  // aux4_stat_clr
  // error_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->error_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // error_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->error_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // rxstat_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->rxstat_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // rxstat_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->rxstat_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux1_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->aux1_stat_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux1_stat_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->aux1_stat_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux2_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->aux2_stat_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux2_stat_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->aux2_stat_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux3_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->aux3_stat_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux3_stat_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->aux3_stat_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux4_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->aux4_stat_bits, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  // aux4_stat_strs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->aux4_stat_strs, 0)) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__RXSTATUS__fini(novatel_oem7_msgs__msg__RXSTATUS * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // error
  // num_status_codes
  // rxstat
  // rxstat_pri_mask
  // rxstat_set_mask
  // rxstat_clr_mask
  // aux1_stat
  // aux1_stat_pri
  // aux1_stat_set
  // aux1_stat_clr
  // aux2_stat
  // aux2_stat_pri
  // aux2_stat_set
  // aux2_stat_clr
  // aux3_stat
  // aux3_stat_pri
  // aux3_stat_set
  // aux3_stat_clr
  // aux4_stat
  // aux4_stat_pri
  // aux4_stat_set
  // aux4_stat_clr
  // error_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->error_bits);
  // error_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->error_strs);
  // rxstat_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->rxstat_bits);
  // rxstat_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->rxstat_strs);
  // aux1_stat_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->aux1_stat_bits);
  // aux1_stat_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->aux1_stat_strs);
  // aux2_stat_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->aux2_stat_bits);
  // aux2_stat_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->aux2_stat_strs);
  // aux3_stat_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->aux3_stat_bits);
  // aux3_stat_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->aux3_stat_strs);
  // aux4_stat_bits
  rosidl_runtime_c__uint8__Sequence__fini(&msg->aux4_stat_bits);
  // aux4_stat_strs
  rosidl_runtime_c__String__Sequence__fini(&msg->aux4_stat_strs);
}

bool
novatel_oem7_msgs__msg__RXSTATUS__are_equal(const novatel_oem7_msgs__msg__RXSTATUS * lhs, const novatel_oem7_msgs__msg__RXSTATUS * rhs)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__are_equal(
      &(lhs->nov_header), &(rhs->nov_header)))
  {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // num_status_codes
  if (lhs->num_status_codes != rhs->num_status_codes) {
    return false;
  }
  // rxstat
  if (lhs->rxstat != rhs->rxstat) {
    return false;
  }
  // rxstat_pri_mask
  if (lhs->rxstat_pri_mask != rhs->rxstat_pri_mask) {
    return false;
  }
  // rxstat_set_mask
  if (lhs->rxstat_set_mask != rhs->rxstat_set_mask) {
    return false;
  }
  // rxstat_clr_mask
  if (lhs->rxstat_clr_mask != rhs->rxstat_clr_mask) {
    return false;
  }
  // aux1_stat
  if (lhs->aux1_stat != rhs->aux1_stat) {
    return false;
  }
  // aux1_stat_pri
  if (lhs->aux1_stat_pri != rhs->aux1_stat_pri) {
    return false;
  }
  // aux1_stat_set
  if (lhs->aux1_stat_set != rhs->aux1_stat_set) {
    return false;
  }
  // aux1_stat_clr
  if (lhs->aux1_stat_clr != rhs->aux1_stat_clr) {
    return false;
  }
  // aux2_stat
  if (lhs->aux2_stat != rhs->aux2_stat) {
    return false;
  }
  // aux2_stat_pri
  if (lhs->aux2_stat_pri != rhs->aux2_stat_pri) {
    return false;
  }
  // aux2_stat_set
  if (lhs->aux2_stat_set != rhs->aux2_stat_set) {
    return false;
  }
  // aux2_stat_clr
  if (lhs->aux2_stat_clr != rhs->aux2_stat_clr) {
    return false;
  }
  // aux3_stat
  if (lhs->aux3_stat != rhs->aux3_stat) {
    return false;
  }
  // aux3_stat_pri
  if (lhs->aux3_stat_pri != rhs->aux3_stat_pri) {
    return false;
  }
  // aux3_stat_set
  if (lhs->aux3_stat_set != rhs->aux3_stat_set) {
    return false;
  }
  // aux3_stat_clr
  if (lhs->aux3_stat_clr != rhs->aux3_stat_clr) {
    return false;
  }
  // aux4_stat
  if (lhs->aux4_stat != rhs->aux4_stat) {
    return false;
  }
  // aux4_stat_pri
  if (lhs->aux4_stat_pri != rhs->aux4_stat_pri) {
    return false;
  }
  // aux4_stat_set
  if (lhs->aux4_stat_set != rhs->aux4_stat_set) {
    return false;
  }
  // aux4_stat_clr
  if (lhs->aux4_stat_clr != rhs->aux4_stat_clr) {
    return false;
  }
  // error_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->error_bits), &(rhs->error_bits)))
  {
    return false;
  }
  // error_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->error_strs), &(rhs->error_strs)))
  {
    return false;
  }
  // rxstat_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->rxstat_bits), &(rhs->rxstat_bits)))
  {
    return false;
  }
  // rxstat_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->rxstat_strs), &(rhs->rxstat_strs)))
  {
    return false;
  }
  // aux1_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->aux1_stat_bits), &(rhs->aux1_stat_bits)))
  {
    return false;
  }
  // aux1_stat_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->aux1_stat_strs), &(rhs->aux1_stat_strs)))
  {
    return false;
  }
  // aux2_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->aux2_stat_bits), &(rhs->aux2_stat_bits)))
  {
    return false;
  }
  // aux2_stat_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->aux2_stat_strs), &(rhs->aux2_stat_strs)))
  {
    return false;
  }
  // aux3_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->aux3_stat_bits), &(rhs->aux3_stat_bits)))
  {
    return false;
  }
  // aux3_stat_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->aux3_stat_strs), &(rhs->aux3_stat_strs)))
  {
    return false;
  }
  // aux4_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->aux4_stat_bits), &(rhs->aux4_stat_bits)))
  {
    return false;
  }
  // aux4_stat_strs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->aux4_stat_strs), &(rhs->aux4_stat_strs)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__RXSTATUS__copy(
  const novatel_oem7_msgs__msg__RXSTATUS * input,
  novatel_oem7_msgs__msg__RXSTATUS * output)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__copy(
      &(input->nov_header), &(output->nov_header)))
  {
    return false;
  }
  // error
  output->error = input->error;
  // num_status_codes
  output->num_status_codes = input->num_status_codes;
  // rxstat
  output->rxstat = input->rxstat;
  // rxstat_pri_mask
  output->rxstat_pri_mask = input->rxstat_pri_mask;
  // rxstat_set_mask
  output->rxstat_set_mask = input->rxstat_set_mask;
  // rxstat_clr_mask
  output->rxstat_clr_mask = input->rxstat_clr_mask;
  // aux1_stat
  output->aux1_stat = input->aux1_stat;
  // aux1_stat_pri
  output->aux1_stat_pri = input->aux1_stat_pri;
  // aux1_stat_set
  output->aux1_stat_set = input->aux1_stat_set;
  // aux1_stat_clr
  output->aux1_stat_clr = input->aux1_stat_clr;
  // aux2_stat
  output->aux2_stat = input->aux2_stat;
  // aux2_stat_pri
  output->aux2_stat_pri = input->aux2_stat_pri;
  // aux2_stat_set
  output->aux2_stat_set = input->aux2_stat_set;
  // aux2_stat_clr
  output->aux2_stat_clr = input->aux2_stat_clr;
  // aux3_stat
  output->aux3_stat = input->aux3_stat;
  // aux3_stat_pri
  output->aux3_stat_pri = input->aux3_stat_pri;
  // aux3_stat_set
  output->aux3_stat_set = input->aux3_stat_set;
  // aux3_stat_clr
  output->aux3_stat_clr = input->aux3_stat_clr;
  // aux4_stat
  output->aux4_stat = input->aux4_stat;
  // aux4_stat_pri
  output->aux4_stat_pri = input->aux4_stat_pri;
  // aux4_stat_set
  output->aux4_stat_set = input->aux4_stat_set;
  // aux4_stat_clr
  output->aux4_stat_clr = input->aux4_stat_clr;
  // error_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->error_bits), &(output->error_bits)))
  {
    return false;
  }
  // error_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->error_strs), &(output->error_strs)))
  {
    return false;
  }
  // rxstat_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->rxstat_bits), &(output->rxstat_bits)))
  {
    return false;
  }
  // rxstat_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->rxstat_strs), &(output->rxstat_strs)))
  {
    return false;
  }
  // aux1_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->aux1_stat_bits), &(output->aux1_stat_bits)))
  {
    return false;
  }
  // aux1_stat_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->aux1_stat_strs), &(output->aux1_stat_strs)))
  {
    return false;
  }
  // aux2_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->aux2_stat_bits), &(output->aux2_stat_bits)))
  {
    return false;
  }
  // aux2_stat_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->aux2_stat_strs), &(output->aux2_stat_strs)))
  {
    return false;
  }
  // aux3_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->aux3_stat_bits), &(output->aux3_stat_bits)))
  {
    return false;
  }
  // aux3_stat_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->aux3_stat_strs), &(output->aux3_stat_strs)))
  {
    return false;
  }
  // aux4_stat_bits
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->aux4_stat_bits), &(output->aux4_stat_bits)))
  {
    return false;
  }
  // aux4_stat_strs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->aux4_stat_strs), &(output->aux4_stat_strs)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__RXSTATUS *
novatel_oem7_msgs__msg__RXSTATUS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RXSTATUS * msg = (novatel_oem7_msgs__msg__RXSTATUS *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__RXSTATUS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__RXSTATUS));
  bool success = novatel_oem7_msgs__msg__RXSTATUS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__RXSTATUS__destroy(novatel_oem7_msgs__msg__RXSTATUS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__RXSTATUS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__RXSTATUS__Sequence__init(novatel_oem7_msgs__msg__RXSTATUS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RXSTATUS * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__RXSTATUS *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__RXSTATUS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__RXSTATUS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__RXSTATUS__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__RXSTATUS__Sequence__fini(novatel_oem7_msgs__msg__RXSTATUS__Sequence * array)
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
      novatel_oem7_msgs__msg__RXSTATUS__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__RXSTATUS__Sequence *
novatel_oem7_msgs__msg__RXSTATUS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__RXSTATUS__Sequence * array = (novatel_oem7_msgs__msg__RXSTATUS__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__RXSTATUS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__RXSTATUS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__RXSTATUS__Sequence__destroy(novatel_oem7_msgs__msg__RXSTATUS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__RXSTATUS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__RXSTATUS__Sequence__are_equal(const novatel_oem7_msgs__msg__RXSTATUS__Sequence * lhs, const novatel_oem7_msgs__msg__RXSTATUS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__RXSTATUS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__RXSTATUS__Sequence__copy(
  const novatel_oem7_msgs__msg__RXSTATUS__Sequence * input,
  novatel_oem7_msgs__msg__RXSTATUS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__RXSTATUS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__RXSTATUS * data =
      (novatel_oem7_msgs__msg__RXSTATUS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__RXSTATUS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__RXSTATUS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__RXSTATUS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
