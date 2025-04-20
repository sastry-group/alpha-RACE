// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autonoma_msgs/msg/detail/ground_truth_array__rosidl_typesupport_introspection_c.h"
#include "autonoma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autonoma_msgs/msg/detail/ground_truth_array__functions.h"
#include "autonoma_msgs/msg/detail/ground_truth_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vehicles`
#include "autonoma_msgs/msg/ground_truth.h"
// Member `vehicles`
#include "autonoma_msgs/msg/detail/ground_truth__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autonoma_msgs__msg__GroundTruthArray__init(message_memory);
}

void autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_fini_function(void * message_memory)
{
  autonoma_msgs__msg__GroundTruthArray__fini(message_memory);
}

size_t autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__size_function__GroundTruthArray__vehicles(
  const void * untyped_member)
{
  const autonoma_msgs__msg__GroundTruth__Sequence * member =
    (const autonoma_msgs__msg__GroundTruth__Sequence *)(untyped_member);
  return member->size;
}

const void * autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_const_function__GroundTruthArray__vehicles(
  const void * untyped_member, size_t index)
{
  const autonoma_msgs__msg__GroundTruth__Sequence * member =
    (const autonoma_msgs__msg__GroundTruth__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_function__GroundTruthArray__vehicles(
  void * untyped_member, size_t index)
{
  autonoma_msgs__msg__GroundTruth__Sequence * member =
    (autonoma_msgs__msg__GroundTruth__Sequence *)(untyped_member);
  return &member->data[index];
}

void autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__fetch_function__GroundTruthArray__vehicles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autonoma_msgs__msg__GroundTruth * item =
    ((const autonoma_msgs__msg__GroundTruth *)
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_const_function__GroundTruthArray__vehicles(untyped_member, index));
  autonoma_msgs__msg__GroundTruth * value =
    (autonoma_msgs__msg__GroundTruth *)(untyped_value);
  *value = *item;
}

void autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__assign_function__GroundTruthArray__vehicles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autonoma_msgs__msg__GroundTruth * item =
    ((autonoma_msgs__msg__GroundTruth *)
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_function__GroundTruthArray__vehicles(untyped_member, index));
  const autonoma_msgs__msg__GroundTruth * value =
    (const autonoma_msgs__msg__GroundTruth *)(untyped_value);
  *item = *value;
}

bool autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__resize_function__GroundTruthArray__vehicles(
  void * untyped_member, size_t size)
{
  autonoma_msgs__msg__GroundTruth__Sequence * member =
    (autonoma_msgs__msg__GroundTruth__Sequence *)(untyped_member);
  autonoma_msgs__msg__GroundTruth__Sequence__fini(member);
  return autonoma_msgs__msg__GroundTruth__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__GroundTruthArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autonoma_msgs__msg__GroundTruthArray, vehicles),  // bytes offset in struct
    NULL,  // default value
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__size_function__GroundTruthArray__vehicles,  // size() function pointer
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_const_function__GroundTruthArray__vehicles,  // get_const(index) function pointer
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__get_function__GroundTruthArray__vehicles,  // get(index) function pointer
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__fetch_function__GroundTruthArray__vehicles,  // fetch(index, &value) function pointer
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__assign_function__GroundTruthArray__vehicles,  // assign(index, value) function pointer
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__resize_function__GroundTruthArray__vehicles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_members = {
  "autonoma_msgs__msg",  // message namespace
  "GroundTruthArray",  // message name
  2,  // number of fields
  sizeof(autonoma_msgs__msg__GroundTruthArray),
  autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_member_array,  // message members
  autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_init_function,  // function to initialize message memory (memory has to be allocated)
  autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_type_support_handle = {
  0,
  &autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autonoma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autonoma_msgs, msg, GroundTruthArray)() {
  autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autonoma_msgs, msg, GroundTruth)();
  if (!autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_type_support_handle.typesupport_identifier) {
    autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autonoma_msgs__msg__GroundTruthArray__rosidl_typesupport_introspection_c__GroundTruthArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
