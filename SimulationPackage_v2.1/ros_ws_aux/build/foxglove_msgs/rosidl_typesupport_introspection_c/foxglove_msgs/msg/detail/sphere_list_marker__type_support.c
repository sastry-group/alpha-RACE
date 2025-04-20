// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/SphereListMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/sphere_list_marker__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/sphere_list_marker__functions.h"
#include "foxglove_msgs/msg/detail/sphere_list_marker__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `metadata`
#include "foxglove_msgs/msg/key_value_pair.h"
// Member `metadata`
#include "foxglove_msgs/msg/detail/key_value_pair__rosidl_typesupport_introspection_c.h"
// Member `attributes`
#include "foxglove_msgs/msg/sphere_attributes.h"
// Member `attributes`
#include "foxglove_msgs/msg/detail/sphere_attributes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__SphereListMarker__init(message_memory);
}

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_fini_function(void * message_memory)
{
  foxglove_msgs__msg__SphereListMarker__fini(message_memory);
}

size_t foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__size_function__SphereListMarker__metadata(
  const void * untyped_member)
{
  const foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (const foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__metadata(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (const foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__metadata(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__fetch_function__SphereListMarker__metadata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__KeyValuePair * item =
    ((const foxglove_msgs__msg__KeyValuePair *)
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__metadata(untyped_member, index));
  foxglove_msgs__msg__KeyValuePair * value =
    (foxglove_msgs__msg__KeyValuePair *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__assign_function__SphereListMarker__metadata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__KeyValuePair * item =
    ((foxglove_msgs__msg__KeyValuePair *)
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__metadata(untyped_member, index));
  const foxglove_msgs__msg__KeyValuePair * value =
    (const foxglove_msgs__msg__KeyValuePair *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__resize_function__SphereListMarker__metadata(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  foxglove_msgs__msg__KeyValuePair__Sequence__fini(member);
  return foxglove_msgs__msg__KeyValuePair__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__size_function__SphereListMarker__attributes(
  const void * untyped_member)
{
  const foxglove_msgs__msg__SphereAttributes__Sequence * member =
    (const foxglove_msgs__msg__SphereAttributes__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__attributes(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__SphereAttributes__Sequence * member =
    (const foxglove_msgs__msg__SphereAttributes__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__attributes(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__SphereAttributes__Sequence * member =
    (foxglove_msgs__msg__SphereAttributes__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__fetch_function__SphereListMarker__attributes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__SphereAttributes * item =
    ((const foxglove_msgs__msg__SphereAttributes *)
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__attributes(untyped_member, index));
  foxglove_msgs__msg__SphereAttributes * value =
    (foxglove_msgs__msg__SphereAttributes *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__assign_function__SphereListMarker__attributes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__SphereAttributes * item =
    ((foxglove_msgs__msg__SphereAttributes *)
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__attributes(untyped_member, index));
  const foxglove_msgs__msg__SphereAttributes * value =
    (const foxglove_msgs__msg__SphereAttributes *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__resize_function__SphereListMarker__attributes(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__SphereAttributes__Sequence * member =
    (foxglove_msgs__msg__SphereAttributes__Sequence *)(untyped_member);
  foxglove_msgs__msg__SphereAttributes__Sequence__fini(member);
  return foxglove_msgs__msg__SphereAttributes__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, timestamp),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__SphereListMarker, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_locked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, frame_locked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, metadata),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__size_function__SphereListMarker__metadata,  // size() function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__metadata,  // get_const(index) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__metadata,  // get(index) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__fetch_function__SphereListMarker__metadata,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__assign_function__SphereListMarker__metadata,  // assign(index, value) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__resize_function__SphereListMarker__metadata  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SphereListMarker, attributes),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__size_function__SphereListMarker__attributes,  // size() function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_const_function__SphereListMarker__attributes,  // get_const(index) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__get_function__SphereListMarker__attributes,  // get(index) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__fetch_function__SphereListMarker__attributes,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__assign_function__SphereListMarker__attributes,  // assign(index, value) function pointer
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__resize_function__SphereListMarker__attributes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "SphereListMarker",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs__msg__SphereListMarker),
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array,  // message members
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SphereListMarker)() {
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, KeyValuePair)();
  foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SphereAttributes)();
  if (!foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__SphereListMarker__rosidl_typesupport_introspection_c__SphereListMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
