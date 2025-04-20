// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__functions.h"
#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__Oem7RawMsg__init(message_memory);
}

void novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__Oem7RawMsg__fini(message_memory);
}

size_t novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__size_function__Oem7RawMsg__message_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_const_function__Oem7RawMsg__message_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_function__Oem7RawMsg__message_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__fetch_function__Oem7RawMsg__message_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_const_function__Oem7RawMsg__message_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__assign_function__Oem7RawMsg__message_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_function__Oem7RawMsg__message_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__resize_function__Oem7RawMsg__message_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7RawMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7RawMsg, message_data),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__size_function__Oem7RawMsg__message_data,  // size() function pointer
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_const_function__Oem7RawMsg__message_data,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__get_function__Oem7RawMsg__message_data,  // get(index) function pointer
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__fetch_function__Oem7RawMsg__message_data,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__assign_function__Oem7RawMsg__message_data,  // assign(index, value) function pointer
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__resize_function__Oem7RawMsg__message_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "Oem7RawMsg",  // message name
  2,  // number of fields
  sizeof(novatel_oem7_msgs__msg__Oem7RawMsg),
  novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_member_array,  // message members
  novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Oem7RawMsg)() {
  novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__Oem7RawMsg__rosidl_typesupport_introspection_c__Oem7RawMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
