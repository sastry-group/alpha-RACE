// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/PointsAnnotation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/points_annotation__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/points_annotation__functions.h"
#include "foxglove_msgs/msg/detail/points_annotation__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "foxglove_msgs/msg/point2.h"
// Member `points`
#include "foxglove_msgs/msg/detail/point2__rosidl_typesupport_introspection_c.h"
// Member `outline_color`
// Member `outline_colors`
// Member `fill_color`
#include "foxglove_msgs/msg/color.h"
// Member `outline_color`
// Member `outline_colors`
// Member `fill_color`
#include "foxglove_msgs/msg/detail/color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__PointsAnnotation__init(message_memory);
}

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_fini_function(void * message_memory)
{
  foxglove_msgs__msg__PointsAnnotation__fini(message_memory);
}

size_t foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__size_function__PointsAnnotation__points(
  const void * untyped_member)
{
  const foxglove_msgs__msg__Point2__Sequence * member =
    (const foxglove_msgs__msg__Point2__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__points(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__Point2__Sequence * member =
    (const foxglove_msgs__msg__Point2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__points(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__Point2__Sequence * member =
    (foxglove_msgs__msg__Point2__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__fetch_function__PointsAnnotation__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__Point2 * item =
    ((const foxglove_msgs__msg__Point2 *)
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__points(untyped_member, index));
  foxglove_msgs__msg__Point2 * value =
    (foxglove_msgs__msg__Point2 *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__assign_function__PointsAnnotation__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__Point2 * item =
    ((foxglove_msgs__msg__Point2 *)
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__points(untyped_member, index));
  const foxglove_msgs__msg__Point2 * value =
    (const foxglove_msgs__msg__Point2 *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__resize_function__PointsAnnotation__points(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__Point2__Sequence * member =
    (foxglove_msgs__msg__Point2__Sequence *)(untyped_member);
  foxglove_msgs__msg__Point2__Sequence__fini(member);
  return foxglove_msgs__msg__Point2__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__size_function__PointsAnnotation__outline_colors(
  const void * untyped_member)
{
  const foxglove_msgs__msg__Color__Sequence * member =
    (const foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__outline_colors(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__Color__Sequence * member =
    (const foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__outline_colors(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__Color__Sequence * member =
    (foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__fetch_function__PointsAnnotation__outline_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__Color * item =
    ((const foxglove_msgs__msg__Color *)
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__outline_colors(untyped_member, index));
  foxglove_msgs__msg__Color * value =
    (foxglove_msgs__msg__Color *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__assign_function__PointsAnnotation__outline_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__Color * item =
    ((foxglove_msgs__msg__Color *)
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__outline_colors(untyped_member, index));
  const foxglove_msgs__msg__Color * value =
    (const foxglove_msgs__msg__Color *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__resize_function__PointsAnnotation__outline_colors(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__Color__Sequence * member =
    (foxglove_msgs__msg__Color__Sequence *)(untyped_member);
  foxglove_msgs__msg__Color__Sequence__fini(member);
  return foxglove_msgs__msg__Color__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PointsAnnotation, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PointsAnnotation, type),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__PointsAnnotation, points),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__size_function__PointsAnnotation__points,  // size() function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__points,  // get_const(index) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__points,  // get(index) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__fetch_function__PointsAnnotation__points,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__assign_function__PointsAnnotation__points,  // assign(index, value) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__resize_function__PointsAnnotation__points  // resize(index) function pointer
  },
  {
    "outline_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PointsAnnotation, outline_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outline_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PointsAnnotation, outline_colors),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__size_function__PointsAnnotation__outline_colors,  // size() function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_const_function__PointsAnnotation__outline_colors,  // get_const(index) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__get_function__PointsAnnotation__outline_colors,  // get(index) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__fetch_function__PointsAnnotation__outline_colors,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__assign_function__PointsAnnotation__outline_colors,  // assign(index, value) function pointer
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__resize_function__PointsAnnotation__outline_colors  // resize(index) function pointer
  },
  {
    "fill_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PointsAnnotation, fill_color),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__PointsAnnotation, thickness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "PointsAnnotation",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs__msg__PointsAnnotation),
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array,  // message members
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, PointsAnnotation)() {
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Point2)();
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Color)();
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Color)();
  foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Color)();
  if (!foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__PointsAnnotation__rosidl_typesupport_introspection_c__PointsAnnotation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
