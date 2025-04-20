// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/INSReceiverStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__functions.h"
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__INSReceiverStatus__init(message_memory);
}

void novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__INSReceiverStatus__fini(message_memory);
}

size_t novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__size_function__INSReceiverStatus__status(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_const_function__INSReceiverStatus__status(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_function__INSReceiverStatus__status(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__fetch_function__INSReceiverStatus__status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_const_function__INSReceiverStatus__status(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__assign_function__INSReceiverStatus__status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_function__INSReceiverStatus__status(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSReceiverStatus, status),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__size_function__INSReceiverStatus__status,  // size() function pointer
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_const_function__INSReceiverStatus__status,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__get_function__INSReceiverStatus__status,  // get(index) function pointer
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__fetch_function__INSReceiverStatus__status,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__assign_function__INSReceiverStatus__status,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "INSReceiverStatus",  // message name
  1,  // number of fields
  sizeof(novatel_oem7_msgs__msg__INSReceiverStatus),
  novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_member_array,  // message members
  novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSReceiverStatus)() {
  if (!novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__INSReceiverStatus__rosidl_typesupport_introspection_c__INSReceiverStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
