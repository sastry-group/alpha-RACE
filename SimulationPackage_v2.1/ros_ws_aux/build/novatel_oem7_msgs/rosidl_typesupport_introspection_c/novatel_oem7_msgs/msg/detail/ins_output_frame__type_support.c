// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/INSOutputFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__functions.h"
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__INSOutputFrame__init(message_memory);
}

void novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__INSOutputFrame__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_member_array[1] = {
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__INSOutputFrame, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "INSOutputFrame",  // message name
  1,  // number of fields
  sizeof(novatel_oem7_msgs__msg__INSOutputFrame),
  novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_member_array,  // message members
  novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSOutputFrame)() {
  if (!novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__INSOutputFrame__rosidl_typesupport_introspection_c__INSOutputFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
