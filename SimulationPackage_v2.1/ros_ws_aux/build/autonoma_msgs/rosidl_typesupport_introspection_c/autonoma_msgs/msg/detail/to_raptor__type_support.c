// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autonoma_msgs:msg/ToRaptor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autonoma_msgs/msg/detail/to_raptor__rosidl_typesupport_introspection_c.h"
#include "autonoma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autonoma_msgs/msg/detail/to_raptor__functions.h"
#include "autonoma_msgs/msg/detail/to_raptor__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autonoma_msgs__msg__ToRaptor__init(message_memory);
}

void autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_fini_function(void * message_memory)
{
  autonoma_msgs__msg__ToRaptor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__ToRaptor, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_cond_ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__ToRaptor, track_cond_ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_sig_ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__ToRaptor, veh_sig_ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ct_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__ToRaptor, ct_state),  // bytes offset in struct
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
    offsetof(autonoma_msgs__msg__ToRaptor, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__ToRaptor, veh_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_members = {
  "autonoma_msgs__msg",  // message namespace
  "ToRaptor",  // message name
  6,  // number of fields
  sizeof(autonoma_msgs__msg__ToRaptor),
  autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_member_array,  // message members
  autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_init_function,  // function to initialize message memory (memory has to be allocated)
  autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_type_support_handle = {
  0,
  &autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autonoma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autonoma_msgs, msg, ToRaptor)() {
  autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_type_support_handle.typesupport_identifier) {
    autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autonoma_msgs__msg__ToRaptor__rosidl_typesupport_introspection_c__ToRaptor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
