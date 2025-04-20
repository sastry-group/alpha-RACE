// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/oem7_header__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.h"


// Include directives for member types
// Member `message_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__Oem7Header__init(message_memory);
}

void novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__Oem7Header__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_member_array[8] = {
  {
    "message_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, message_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, message_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, time_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_week_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, gps_week_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_week_milliseconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, gps_week_milliseconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idle_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Oem7Header, idle_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "Oem7Header",  // message name
  8,  // number of fields
  sizeof(novatel_oem7_msgs__msg__Oem7Header),
  novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_member_array,  // message members
  novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Oem7Header)() {
  if (!novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__Oem7Header__rosidl_typesupport_introspection_c__Oem7Header_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
