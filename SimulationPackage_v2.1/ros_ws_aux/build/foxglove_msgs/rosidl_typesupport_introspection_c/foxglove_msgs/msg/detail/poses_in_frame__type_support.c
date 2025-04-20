// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/PosesInFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/poses_in_frame__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/poses_in_frame__functions.h"
#include "foxglove_msgs/msg/detail/poses_in_frame__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__PosesInFrame__init(message_memory);
}

void foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_fini_function(void * message_memory)
{
  foxglove_msgs__msg__PosesInFrame__fini(message_memory);
}

size_t foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__size_function__PosesInFrame__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_const_function__PosesInFrame__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_function__PosesInFrame__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__fetch_function__PosesInFrame__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_const_function__PosesInFrame__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__assign_function__PosesInFrame__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_function__PosesInFrame__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__resize_function__PosesInFrame__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PosesInFrame, timestamp),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__PosesInFrame, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__PosesInFrame, poses),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__size_function__PosesInFrame__poses,  // size() function pointer
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_const_function__PosesInFrame__poses,  // get_const(index) function pointer
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__get_function__PosesInFrame__poses,  // get(index) function pointer
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__fetch_function__PosesInFrame__poses,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__assign_function__PosesInFrame__poses,  // assign(index, value) function pointer
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__resize_function__PosesInFrame__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "PosesInFrame",  // message name
  3,  // number of fields
  sizeof(foxglove_msgs__msg__PosesInFrame),
  foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_member_array,  // message members
  foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, PosesInFrame)() {
  foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__PosesInFrame__rosidl_typesupport_introspection_c__PosesInFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
