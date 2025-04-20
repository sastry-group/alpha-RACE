// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/LaserScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/laser_scan__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/laser_scan__functions.h"
#include "foxglove_msgs/msg/detail/laser_scan__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `ranges`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__LaserScan__init(message_memory);
}

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_fini_function(void * message_memory)
{
  foxglove_msgs__msg__LaserScan__fini(message_memory);
}

size_t foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__size_function__LaserScan__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__fetch_function__LaserScan__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__ranges(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__assign_function__LaserScan__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__ranges(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__resize_function__LaserScan__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__size_function__LaserScan__intensities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__intensities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__intensities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__fetch_function__LaserScan__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__intensities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__assign_function__LaserScan__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__intensities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__resize_function__LaserScan__intensities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, frame_id),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__LaserScan, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, end_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, ranges),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__size_function__LaserScan__ranges,  // size() function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__ranges,  // get_const(index) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__ranges,  // get(index) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__fetch_function__LaserScan__ranges,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__assign_function__LaserScan__ranges,  // assign(index, value) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__resize_function__LaserScan__ranges  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LaserScan, intensities),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__size_function__LaserScan__intensities,  // size() function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_const_function__LaserScan__intensities,  // get_const(index) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__get_function__LaserScan__intensities,  // get(index) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__fetch_function__LaserScan__intensities,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__assign_function__LaserScan__intensities,  // assign(index, value) function pointer
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__resize_function__LaserScan__intensities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "LaserScan",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs__msg__LaserScan),
  foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_member_array,  // message members
  foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, LaserScan)() {
  foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__LaserScan__rosidl_typesupport_introspection_c__LaserScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
