// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/insconfig__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/insconfig__functions.h"
#include "novatel_oem7_msgs/msg/detail/insconfig__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/oem7_header.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__rosidl_typesupport_introspection_c.h"
// Member `alignment_mode`
#include "novatel_oem7_msgs/msg/ins_alignment_mode.h"
// Member `alignment_mode`
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__rosidl_typesupport_introspection_c.h"
// Member `relative_ins_output_frame`
#include "novatel_oem7_msgs/msg/ins_output_frame.h"
// Member `relative_ins_output_frame`
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__rosidl_typesupport_introspection_c.h"
// Member `ins_receiver_status`
#include "novatel_oem7_msgs/msg/ins_receiver_status.h"
// Member `ins_receiver_status`
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__rosidl_typesupport_introspection_c.h"
// Member `translations`
#include "novatel_oem7_msgs/msg/translation.h"
// Member `translations`
#include "novatel_oem7_msgs/msg/detail/translation__rosidl_typesupport_introspection_c.h"
// Member `rotations`
#include "novatel_oem7_msgs/msg/rotation.h"
// Member `rotations`
#include "novatel_oem7_msgs/msg/detail/rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__INSCONFIG__init(message_memory);
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__INSCONFIG__fini(message_memory);
}

size_t novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__enabled_updates(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__enabled_updates(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__enabled_updates(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__enabled_updates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__enabled_updates(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__enabled_updates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__enabled_updates(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__translations(
  const void * untyped_member)
{
  const novatel_oem7_msgs__msg__Translation__Sequence * member =
    (const novatel_oem7_msgs__msg__Translation__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__translations(
  const void * untyped_member, size_t index)
{
  const novatel_oem7_msgs__msg__Translation__Sequence * member =
    (const novatel_oem7_msgs__msg__Translation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__translations(
  void * untyped_member, size_t index)
{
  novatel_oem7_msgs__msg__Translation__Sequence * member =
    (novatel_oem7_msgs__msg__Translation__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__translations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const novatel_oem7_msgs__msg__Translation * item =
    ((const novatel_oem7_msgs__msg__Translation *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__translations(untyped_member, index));
  novatel_oem7_msgs__msg__Translation * value =
    (novatel_oem7_msgs__msg__Translation *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__translations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  novatel_oem7_msgs__msg__Translation * item =
    ((novatel_oem7_msgs__msg__Translation *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__translations(untyped_member, index));
  const novatel_oem7_msgs__msg__Translation * value =
    (const novatel_oem7_msgs__msg__Translation *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__resize_function__INSCONFIG__translations(
  void * untyped_member, size_t size)
{
  novatel_oem7_msgs__msg__Translation__Sequence * member =
    (novatel_oem7_msgs__msg__Translation__Sequence *)(untyped_member);
  novatel_oem7_msgs__msg__Translation__Sequence__fini(member);
  return novatel_oem7_msgs__msg__Translation__Sequence__init(member, size);
}

size_t novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__rotations(
  const void * untyped_member)
{
  const novatel_oem7_msgs__msg__Rotation__Sequence * member =
    (const novatel_oem7_msgs__msg__Rotation__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__rotations(
  const void * untyped_member, size_t index)
{
  const novatel_oem7_msgs__msg__Rotation__Sequence * member =
    (const novatel_oem7_msgs__msg__Rotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__rotations(
  void * untyped_member, size_t index)
{
  novatel_oem7_msgs__msg__Rotation__Sequence * member =
    (novatel_oem7_msgs__msg__Rotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__rotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const novatel_oem7_msgs__msg__Rotation * item =
    ((const novatel_oem7_msgs__msg__Rotation *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__rotations(untyped_member, index));
  novatel_oem7_msgs__msg__Rotation * value =
    (novatel_oem7_msgs__msg__Rotation *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__rotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  novatel_oem7_msgs__msg__Rotation * item =
    ((novatel_oem7_msgs__msg__Rotation *)
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__rotations(untyped_member, index));
  const novatel_oem7_msgs__msg__Rotation * value =
    (const novatel_oem7_msgs__msg__Rotation *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__resize_function__INSCONFIG__rotations(
  void * untyped_member, size_t size)
{
  novatel_oem7_msgs__msg__Rotation__Sequence * member =
    (novatel_oem7_msgs__msg__Rotation__Sequence *)(untyped_member);
  novatel_oem7_msgs__msg__Rotation__Sequence__fini(member);
  return novatel_oem7_msgs__msg__Rotation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[25] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, header),  // bytes offset in struct
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
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, nov_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, imu_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mapping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, mapping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_alignment_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, initial_alignment_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heave_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, heave_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, enabled_updates),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__enabled_updates,  // size() function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__enabled_updates,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__enabled_updates,  // get(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__enabled_updates,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__enabled_updates,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alignment_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, alignment_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_ins_output_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, relative_ins_output_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_ins_output_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, relative_ins_output_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ins_receiver_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, ins_receiver_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ins_seed_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, ins_seed_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ins_seed_validation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, ins_seed_validation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved_7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, reserved_7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_translations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, number_of_translations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, translations),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__translations,  // size() function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__translations,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__translations,  // get(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__translations,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__translations,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__resize_function__INSCONFIG__translations  // resize(index) function pointer
  },
  {
    "number_of_rotations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, number_of_rotations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSCONFIG, rotations),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__size_function__INSCONFIG__rotations,  // size() function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_const_function__INSCONFIG__rotations,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__get_function__INSCONFIG__rotations,  // get(index) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__fetch_function__INSCONFIG__rotations,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__assign_function__INSCONFIG__rotations,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__resize_function__INSCONFIG__rotations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "INSCONFIG",  // message name
  25,  // number of fields
  sizeof(novatel_oem7_msgs__msg__INSCONFIG),
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array,  // message members
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSCONFIG)() {
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Oem7Header)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSAlignmentMode)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSOutputFrame)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSReceiverStatus)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Translation)();
  novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Rotation)();
  if (!novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__INSCONFIG__rosidl_typesupport_introspection_c__INSCONFIG_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
