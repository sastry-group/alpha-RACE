// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "npc_controller_msgs/msg/detail/misc_report__rosidl_typesupport_introspection_c.h"
#include "npc_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "npc_controller_msgs/msg/detail/misc_report__functions.h"
#include "npc_controller_msgs/msg/detail/misc_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  npc_controller_msgs__msg__MiscReport__init(message_memory);
}

void npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_fini_function(void * message_memory)
{
  npc_controller_msgs__msg__MiscReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "off_grid_power_connection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, off_grid_power_connection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safety_switch_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, safety_switch_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_switch_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, mode_switch_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sys_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(npc_controller_msgs__msg__MiscReport, sys_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_members = {
  "npc_controller_msgs__msg",  // message namespace
  "MiscReport",  // message name
  6,  // number of fields
  sizeof(npc_controller_msgs__msg__MiscReport),
  npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_member_array,  // message members
  npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_init_function,  // function to initialize message memory (memory has to be allocated)
  npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_type_support_handle = {
  0,
  &npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_npc_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, npc_controller_msgs, msg, MiscReport)() {
  npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_type_support_handle.typesupport_identifier) {
    npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &npc_controller_msgs__msg__MiscReport__rosidl_typesupport_introspection_c__MiscReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
