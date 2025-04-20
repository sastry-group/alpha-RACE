// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/LineMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/line_marker__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/line_marker__functions.h"
#include "foxglove_msgs/msg/detail/line_marker__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `color`
// Member `colors`
#include "foxglove_msgs/msg/color.h"
// Member `color`
// Member `colors`
#include "foxglove_msgs/msg/detail/color__rosidl_typesupport_introspection_c.h"
// Member `indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__LineMarker__init(message_memory);
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_fini_function(void * message_memory)
{
  foxglove_msgs__msg__LineMarker__fini(message_memory);
}

size_t foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__colors(
  const void * untyped_member)
{
  const foxglove_msgs__msg__Color__Sequence * member =
    (const foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__colors(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__Color__Sequence * member =
    (const foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__colors(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__Color__Sequence * member =
    (foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__Color * item =
    ((const foxglove_msgs__msg__Color *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__colors(untyped_member, index));
  foxglove_msgs__msg__Color * value =
    (foxglove_msgs__msg__Color *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__Color * item =
    ((foxglove_msgs__msg__Color *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__colors(untyped_member, index));
  const foxglove_msgs__msg__Color * value =
    (const foxglove_msgs__msg__Color *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__colors(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__Color__Sequence * member =
    (foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  foxglove_msgs__msg__Color__Sequence__fini(member);
  return foxglove_msgs__msg__Color__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__indices(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__indices(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array[8] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thickness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, thickness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_invariant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, scale_invariant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, points),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__points,  // size() function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__points,  // get_const(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__points,  // get(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__points,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__points,  // assign(index, value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__points  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, colors),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__colors,  // size() function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__colors,  // get_const(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__colors,  // get(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__colors,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__colors,  // assign(index, value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__colors  // resize(index) function pointer
  },
  {
    "indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LineMarker, indices),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__size_function__LineMarker__indices,  // size() function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_const_function__LineMarker__indices,  // get_const(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__get_function__LineMarker__indices,  // get(index) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__fetch_function__LineMarker__indices,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__assign_function__LineMarker__indices,  // assign(index, value) function pointer
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__resize_function__LineMarker__indices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "LineMarker",  // message name
  8,  // number of fields
  sizeof(foxglove_msgs__msg__LineMarker),
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array,  // message members
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, LineMarker)() {
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Color)();
  foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Color)();
  if (!foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__LineMarker__rosidl_typesupport_introspection_c__LineMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
