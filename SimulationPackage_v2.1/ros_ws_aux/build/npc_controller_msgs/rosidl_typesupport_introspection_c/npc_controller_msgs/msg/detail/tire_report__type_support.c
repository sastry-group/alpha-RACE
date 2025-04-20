// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "npc_controller_msgs/msg/detail/tire_report__rosidl_typesupport_introspection_c.h"
#include "npc_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "npc_controller_msgs/msg/detail/tire_report__functions.h"
#include "npc_controller_msgs/msg/detail/tire_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `fl_tire_temperature`
// Member `fr_tire_temperature`
// Member `rl_tire_temperature`
// Member `rr_tire_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  npc_controller_msgs__msg__TireReport__init(message_memory);
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_fini_function(void * message_memory)
{
  npc_controller_msgs__msg__TireReport__fini(message_memory);
}

size_t npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__fl_tire_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fl_tire_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fl_tire_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__fl_tire_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fl_tire_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__fl_tire_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fl_tire_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__fl_tire_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__fr_tire_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fr_tire_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fr_tire_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__fr_tire_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fr_tire_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__fr_tire_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fr_tire_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__fr_tire_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__rl_tire_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rl_tire_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rl_tire_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__rl_tire_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rl_tire_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__rl_tire_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rl_tire_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__rl_tire_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__rr_tire_temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rr_tire_temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rr_tire_temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__rr_tire_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rr_tire_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__rr_tire_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rr_tire_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__rr_tire_temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_member_array[21] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fl_tire_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fl_tire_temperature),  // bytes offset in struct
    NULL,  // default value
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__fl_tire_temperature,  // size() function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fl_tire_temperature,  // get_const(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fl_tire_temperature,  // get(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__fl_tire_temperature,  // fetch(index, &value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__fl_tire_temperature,  // assign(index, value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__fl_tire_temperature  // resize(index) function pointer
  },
  {
    "fl_damper_linear_potentiometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fl_damper_linear_potentiometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fl_tire_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fl_tire_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fl_tire_pressure_gauge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fl_tire_pressure_gauge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fl_wheel_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fl_wheel_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_tire_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fr_tire_temperature),  // bytes offset in struct
    NULL,  // default value
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__fr_tire_temperature,  // size() function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__fr_tire_temperature,  // get_const(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__fr_tire_temperature,  // get(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__fr_tire_temperature,  // fetch(index, &value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__fr_tire_temperature,  // assign(index, value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__fr_tire_temperature  // resize(index) function pointer
  },
  {
    "fr_damper_linear_potentiometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fr_damper_linear_potentiometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_tire_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fr_tire_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_tire_pressure_gauge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fr_tire_pressure_gauge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_wheel_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, fr_wheel_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl_tire_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rl_tire_temperature),  // bytes offset in struct
    NULL,  // default value
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__rl_tire_temperature,  // size() function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rl_tire_temperature,  // get_const(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rl_tire_temperature,  // get(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__rl_tire_temperature,  // fetch(index, &value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__rl_tire_temperature,  // assign(index, value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__rl_tire_temperature  // resize(index) function pointer
  },
  {
    "rl_damper_linear_potentiometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rl_damper_linear_potentiometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl_tire_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rl_tire_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl_tire_pressure_gauge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rl_tire_pressure_gauge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rl_wheel_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rl_wheel_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_tire_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rr_tire_temperature),  // bytes offset in struct
    NULL,  // default value
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__size_function__TireReport__rr_tire_temperature,  // size() function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_const_function__TireReport__rr_tire_temperature,  // get_const(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__get_function__TireReport__rr_tire_temperature,  // get(index) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__fetch_function__TireReport__rr_tire_temperature,  // fetch(index, &value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__assign_function__TireReport__rr_tire_temperature,  // assign(index, value) function pointer
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__resize_function__TireReport__rr_tire_temperature  // resize(index) function pointer
  },
  {
    "rr_damper_linear_potentiometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rr_damper_linear_potentiometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_tire_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rr_tire_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_tire_pressure_gauge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rr_tire_pressure_gauge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_wheel_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__TireReport, rr_wheel_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_members = {
  "npc_controller_msgs__msg",  // message namespace
  "TireReport",  // message name
  21,  // number of fields
  sizeof(npc_controller_msgs__msg__TireReport),
  npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_member_array,  // message members
  npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_init_function,  // function to initialize message memory (memory has to be allocated)
  npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_type_support_handle = {
  0,
  &npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_npc_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, npc_controller_msgs, msg, TireReport)() {
  npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_type_support_handle.typesupport_identifier) {
    npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &npc_controller_msgs__msg__TireReport__rosidl_typesupport_introspection_c__TireReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
