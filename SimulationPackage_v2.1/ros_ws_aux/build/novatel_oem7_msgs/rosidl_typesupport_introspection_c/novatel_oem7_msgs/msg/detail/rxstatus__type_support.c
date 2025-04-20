// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/rxstatus__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/rxstatus__functions.h"
#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/oem7_header.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__rosidl_typesupport_introspection_c.h"
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

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__RXSTATUS__init(message_memory);
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__RXSTATUS__fini(message_memory);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__error_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__error_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__error_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__error_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__error_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__error_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__error_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__error_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__rxstat_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__rxstat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__rxstat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__rxstat_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__rxstat_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__rxstat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__rxstat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__rxstat_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux1_stat_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux1_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux1_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux1_stat_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux1_stat_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux1_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux1_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux1_stat_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux2_stat_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux2_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux2_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux2_stat_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux2_stat_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux2_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux2_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux2_stat_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux3_stat_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux3_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux3_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux3_stat_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux3_stat_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux3_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux3_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux3_stat_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux4_stat_bits(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_bits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_bits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux4_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux4_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux4_stat_bits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux4_stat_strs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_strs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_strs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux4_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_strs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux4_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_strs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux4_stat_strs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_member_array[36] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nov_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, nov_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_status_codes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, num_status_codes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rxstat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rxstat_pri_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat_pri_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rxstat_set_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat_set_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rxstat_clr_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat_clr_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux1_stat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux1_stat_pri",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat_pri),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux1_stat_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux1_stat_clr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat_clr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux2_stat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux2_stat_pri",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat_pri),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux2_stat_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux2_stat_clr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat_clr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux3_stat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux3_stat_pri",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat_pri),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux3_stat_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux3_stat_clr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat_clr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux4_stat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux4_stat_pri",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat_pri),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux4_stat_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux4_stat_clr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat_clr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, error_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__error_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__error_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__error_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__error_bits  // resize(index) function pointer
  },
  {
    "error_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, error_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__error_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__error_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__error_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__error_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__error_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__error_strs  // resize(index) function pointer
  },
  {
    "rxstat_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__rxstat_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__rxstat_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__rxstat_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__rxstat_bits  // resize(index) function pointer
  },
  {
    "rxstat_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, rxstat_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__rxstat_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__rxstat_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__rxstat_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__rxstat_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__rxstat_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__rxstat_strs  // resize(index) function pointer
  },
  {
    "aux1_stat_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux1_stat_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux1_stat_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux1_stat_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux1_stat_bits  // resize(index) function pointer
  },
  {
    "aux1_stat_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux1_stat_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux1_stat_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux1_stat_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux1_stat_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux1_stat_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux1_stat_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux1_stat_strs  // resize(index) function pointer
  },
  {
    "aux2_stat_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux2_stat_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux2_stat_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux2_stat_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux2_stat_bits  // resize(index) function pointer
  },
  {
    "aux2_stat_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux2_stat_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux2_stat_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux2_stat_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux2_stat_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux2_stat_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux2_stat_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux2_stat_strs  // resize(index) function pointer
  },
  {
    "aux3_stat_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux3_stat_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux3_stat_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux3_stat_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux3_stat_bits  // resize(index) function pointer
  },
  {
    "aux3_stat_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux3_stat_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux3_stat_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux3_stat_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux3_stat_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux3_stat_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux3_stat_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux3_stat_strs  // resize(index) function pointer
  },
  {
    "aux4_stat_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat_bits),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux4_stat_bits,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_bits,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_bits,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux4_stat_bits,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux4_stat_bits,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux4_stat_bits  // resize(index) function pointer
  },
  {
    "aux4_stat_strs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__RXSTATUS, aux4_stat_strs),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__size_function__RXSTATUS__aux4_stat_strs,  // size() function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_const_function__RXSTATUS__aux4_stat_strs,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__get_function__RXSTATUS__aux4_stat_strs,  // get(index) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__fetch_function__RXSTATUS__aux4_stat_strs,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__assign_function__RXSTATUS__aux4_stat_strs,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__resize_function__RXSTATUS__aux4_stat_strs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "RXSTATUS",  // message name
  36,  // number of fields
  sizeof(novatel_oem7_msgs__msg__RXSTATUS),
  novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_member_array,  // message members
  novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, RXSTATUS)() {
  novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Oem7Header)();
  if (!novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__RXSTATUS__rosidl_typesupport_introspection_c__RXSTATUS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
