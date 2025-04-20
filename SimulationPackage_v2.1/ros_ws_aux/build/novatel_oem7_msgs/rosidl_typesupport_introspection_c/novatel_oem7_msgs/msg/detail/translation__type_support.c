// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/translation__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/translation__functions.h"
#include "novatel_oem7_msgs/msg/detail/translation__struct.h"


// Include directives for member types
// Member `translation`
#include "novatel_oem7_msgs/msg/translation_offset.h"
// Member `translation`
#include "novatel_oem7_msgs/msg/detail/translation_offset__rosidl_typesupport_introspection_c.h"
// Member `frame`
#include "novatel_oem7_msgs/msg/ins_frame.h"
// Member `frame`
#include "novatel_oem7_msgs/msg/detail/ins_frame__rosidl_typesupport_introspection_c.h"
// Member `translation_source`
#include "novatel_oem7_msgs/msg/ins_source_status.h"
// Member `translation_source`
#include "novatel_oem7_msgs/msg/detail/ins_source_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__Translation__init(message_memory);
}

void novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__Translation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_member_array[9] = {
  {
    "translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, x_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, y_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, z_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_uncertainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, x_uncertainty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_uncertainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, y_uncertainty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_uncertainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, z_uncertainty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__Translation, translation_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "Translation",  // message name
  9,  // number of fields
  sizeof(novatel_oem7_msgs__msg__Translation),
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_member_array,  // message members
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Translation)() {
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, TranslationOffset)();
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSFrame)();
  novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, INSSourceStatus)();
  if (!novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__Translation__rosidl_typesupport_introspection_c__Translation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
