// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/RawImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/raw_image__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/raw_image__functions.h"
#include "foxglove_msgs/msg/detail/raw_image__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__RawImage__init(message_memory);
}

void foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_fini_function(void * message_memory)
{
  foxglove_msgs__msg__RawImage__fini(message_memory);
}

size_t foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__size_function__RawImage__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_const_function__RawImage__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_function__RawImage__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__fetch_function__RawImage__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_const_function__RawImage__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__assign_function__RawImage__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_function__RawImage__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__resize_function__RawImage__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, timestamp),  // bytes offset in struct
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
    offsetof(foxglove_msgs__msg__RawImage, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, encoding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__RawImage, data),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__size_function__RawImage__data,  // size() function pointer
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_const_function__RawImage__data,  // get_const(index) function pointer
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__get_function__RawImage__data,  // get(index) function pointer
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__fetch_function__RawImage__data,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__assign_function__RawImage__data,  // assign(index, value) function pointer
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__resize_function__RawImage__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "RawImage",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs__msg__RawImage),
  foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_member_array,  // message members
  foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, RawImage)() {
  foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__RawImage__rosidl_typesupport_introspection_c__RawImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
