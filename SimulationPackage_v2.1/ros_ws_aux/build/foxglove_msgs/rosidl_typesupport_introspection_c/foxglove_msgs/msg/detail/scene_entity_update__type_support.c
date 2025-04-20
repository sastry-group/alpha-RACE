// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/SceneEntityUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/scene_entity_update__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/scene_entity_update__functions.h"
#include "foxglove_msgs/msg/detail/scene_entity_update__struct.h"


// Include directives for member types
// Member `deletions`
#include "foxglove_msgs/msg/scene_entity_deletion.h"
// Member `deletions`
#include "foxglove_msgs/msg/detail/scene_entity_deletion__rosidl_typesupport_introspection_c.h"
// Member `entities`
#include "foxglove_msgs/msg/scene_entity.h"
// Member `entities`
#include "foxglove_msgs/msg/detail/scene_entity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__SceneEntityUpdate__init(message_memory);
}

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_fini_function(void * message_memory)
{
  foxglove_msgs__msg__SceneEntityUpdate__fini(message_memory);
}

size_t foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__size_function__SceneEntityUpdate__deletions(
  const void * untyped_member)
{
  const foxglove_msgs__msg__SceneEntityDeletion__Sequence * member =
    (const foxglove_msgs__msg__SceneEntityDeletion__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__deletions(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__SceneEntityDeletion__Sequence * member =
    (const foxglove_msgs__msg__SceneEntityDeletion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__deletions(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__SceneEntityDeletion__Sequence * member =
    (foxglove_msgs__msg__SceneEntityDeletion__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__fetch_function__SceneEntityUpdate__deletions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__SceneEntityDeletion * item =
    ((const foxglove_msgs__msg__SceneEntityDeletion *)
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__deletions(untyped_member, index));
  foxglove_msgs__msg__SceneEntityDeletion * value =
    (foxglove_msgs__msg__SceneEntityDeletion *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__assign_function__SceneEntityUpdate__deletions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__SceneEntityDeletion * item =
    ((foxglove_msgs__msg__SceneEntityDeletion *)
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__deletions(untyped_member, index));
  const foxglove_msgs__msg__SceneEntityDeletion * value =
    (const foxglove_msgs__msg__SceneEntityDeletion *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__resize_function__SceneEntityUpdate__deletions(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__SceneEntityDeletion__Sequence * member =
    (foxglove_msgs__msg__SceneEntityDeletion__Sequence *)(untyped_member);
  foxglove_msgs__msg__SceneEntityDeletion__Sequence__fini(member);
  return foxglove_msgs__msg__SceneEntityDeletion__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__size_function__SceneEntityUpdate__entities(
  const void * untyped_member)
{
  const foxglove_msgs__msg__SceneEntity__Sequence * member =
    (const foxglove_msgs__msg__SceneEntity__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__entities(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__SceneEntity__Sequence * member =
    (const foxglove_msgs__msg__SceneEntity__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__entities(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__SceneEntity__Sequence * member =
    (foxglove_msgs__msg__SceneEntity__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__fetch_function__SceneEntityUpdate__entities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__SceneEntity * item =
    ((const foxglove_msgs__msg__SceneEntity *)
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__entities(untyped_member, index));
  foxglove_msgs__msg__SceneEntity * value =
    (foxglove_msgs__msg__SceneEntity *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__assign_function__SceneEntityUpdate__entities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__SceneEntity * item =
    ((foxglove_msgs__msg__SceneEntity *)
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__entities(untyped_member, index));
  const foxglove_msgs__msg__SceneEntity * value =
    (const foxglove_msgs__msg__SceneEntity *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__resize_function__SceneEntityUpdate__entities(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__SceneEntity__Sequence * member =
    (foxglove_msgs__msg__SceneEntity__Sequence *)(untyped_member);
  foxglove_msgs__msg__SceneEntity__Sequence__fini(member);
  return foxglove_msgs__msg__SceneEntity__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_member_array[2] = {
  {
    "deletions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntityUpdate, deletions),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__size_function__SceneEntityUpdate__deletions,  // size() function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__deletions,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__deletions,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__fetch_function__SceneEntityUpdate__deletions,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__assign_function__SceneEntityUpdate__deletions,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__resize_function__SceneEntityUpdate__deletions  // resize(index) function pointer
  },
  {
    "entities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntityUpdate, entities),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__size_function__SceneEntityUpdate__entities,  // size() function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_const_function__SceneEntityUpdate__entities,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__get_function__SceneEntityUpdate__entities,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__fetch_function__SceneEntityUpdate__entities,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__assign_function__SceneEntityUpdate__entities,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__resize_function__SceneEntityUpdate__entities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "SceneEntityUpdate",  // message name
  2,  // number of fields
  sizeof(foxglove_msgs__msg__SceneEntityUpdate),
  foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_member_array,  // message members
  foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SceneEntityUpdate)() {
  foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SceneEntityDeletion)();
  foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SceneEntity)();
  if (!foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__SceneEntityUpdate__rosidl_typesupport_introspection_c__SceneEntityUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
