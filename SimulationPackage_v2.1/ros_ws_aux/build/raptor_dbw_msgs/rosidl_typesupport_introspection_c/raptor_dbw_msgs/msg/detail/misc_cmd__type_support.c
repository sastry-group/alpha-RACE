// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/misc_cmd__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__functions.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.h"


// Include directives for member types
// Member `cmd`
#include "raptor_dbw_msgs/msg/turn_signal.h"
// Member `cmd`
#include "raptor_dbw_msgs/msg/detail/turn_signal__rosidl_typesupport_introspection_c.h"
// Member `door_request_right_rear`
// Member `door_request_left_rear`
// Member `door_request_lift_gate`
#include "raptor_dbw_msgs/msg/door_request.h"
// Member `door_request_right_rear`
// Member `door_request_left_rear`
// Member `door_request_lift_gate`
#include "raptor_dbw_msgs/msg/detail/door_request__rosidl_typesupport_introspection_c.h"
// Member `high_beam_cmd`
#include "raptor_dbw_msgs/msg/high_beam.h"
// Member `high_beam_cmd`
#include "raptor_dbw_msgs/msg/detail/high_beam__rosidl_typesupport_introspection_c.h"
// Member `front_wiper_cmd`
#include "raptor_dbw_msgs/msg/wiper_front.h"
// Member `front_wiper_cmd`
#include "raptor_dbw_msgs/msg/detail/wiper_front__rosidl_typesupport_introspection_c.h"
// Member `rear_wiper_cmd`
#include "raptor_dbw_msgs/msg/wiper_rear.h"
// Member `rear_wiper_cmd`
#include "raptor_dbw_msgs/msg/detail/wiper_rear__rosidl_typesupport_introspection_c.h"
// Member `ignition_cmd`
#include "raptor_dbw_msgs/msg/ignition.h"
// Member `ignition_cmd`
#include "raptor_dbw_msgs/msg/detail/ignition__rosidl_typesupport_introspection_c.h"
// Member `low_beam_cmd`
#include "raptor_dbw_msgs/msg/low_beam.h"
// Member `low_beam_cmd`
#include "raptor_dbw_msgs/msg/detail/low_beam__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__MiscCmd__init(message_memory);
}

void raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__MiscCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[14] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_request_right_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, door_request_right_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolling_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "high_beam_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, high_beam_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_wiper_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, front_wiper_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_wiper_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, rear_wiper_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignition_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, ignition_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_request_left_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, door_request_left_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_request_lift_gate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, door_request_lift_gate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block_standard_cruise_buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, block_standard_cruise_buttons),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block_adaptive_cruise_buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, block_adaptive_cruise_buttons),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block_turn_signal_stalk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, block_turn_signal_stalk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horn_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, horn_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_beam_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__MiscCmd, low_beam_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "MiscCmd",  // message name
  14,  // number of fields
  sizeof(raptor_dbw_msgs__msg__MiscCmd),
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array,  // message members
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_type_support_handle = {
  0,
  &raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, MiscCmd)() {
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, TurnSignal)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorRequest)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, HighBeam)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, WiperFront)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, WiperRear)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, Ignition)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorRequest)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorRequest)();
  raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, LowBeam)();
  if (!raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_type_support_handle.typesupport_identifier) {
    raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &raptor_dbw_msgs__msg__MiscCmd__rosidl_typesupport_introspection_c__MiscCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
