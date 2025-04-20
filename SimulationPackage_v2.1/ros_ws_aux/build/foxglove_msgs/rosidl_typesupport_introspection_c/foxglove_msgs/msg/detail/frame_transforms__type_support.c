// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/FrameTransforms.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/frame_transforms__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/frame_transforms__functions.h"
#include "foxglove_msgs/msg/detail/frame_transforms__struct.h"


// Include directives for member types
// Member `transforms`
#include "foxglove_msgs/msg/frame_transform.h"
// Member `transforms`
#include "foxglove_msgs/msg/detail/frame_transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__FrameTransforms__init(message_memory);
}

void foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_fini_function(void * message_memory)
{
  foxglove_msgs__msg__FrameTransforms__fini(message_memory);
}

size_t foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__size_function__FrameTransforms__transforms(
  const void * untyped_member)
{
  const foxglove_msgs__msg__FrameTransform__Sequence * member =
    (const foxglove_msgs__msg__FrameTransform__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_const_function__FrameTransforms__transforms(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__FrameTransform__Sequence * member =
    (const foxglove_msgs__msg__FrameTransform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_function__FrameTransforms__transforms(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__FrameTransform__Sequence * member =
    (foxglove_msgs__msg__FrameTransform__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__fetch_function__FrameTransforms__transforms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__FrameTransform * item =
    ((const foxglove_msgs__msg__FrameTransform *)
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_const_function__FrameTransforms__transforms(untyped_member, index));
  foxglove_msgs__msg__FrameTransform * value =
    (foxglove_msgs__msg__FrameTransform *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__assign_function__FrameTransforms__transforms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__FrameTransform * item =
    ((foxglove_msgs__msg__FrameTransform *)
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_function__FrameTransforms__transforms(untyped_member, index));
  const foxglove_msgs__msg__FrameTransform * value =
    (const foxglove_msgs__msg__FrameTransform *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__resize_function__FrameTransforms__transforms(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__FrameTransform__Sequence * member =
    (foxglove_msgs__msg__FrameTransform__Sequence *)(untyped_member);
  foxglove_msgs__msg__FrameTransform__Sequence__fini(member);
  return foxglove_msgs__msg__FrameTransform__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_member_array[1] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__FrameTransforms, transforms),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__size_function__FrameTransforms__transforms,  // size() function pointer
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_const_function__FrameTransforms__transforms,  // get_const(index) function pointer
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__get_function__FrameTransforms__transforms,  // get(index) function pointer
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__fetch_function__FrameTransforms__transforms,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__assign_function__FrameTransforms__transforms,  // assign(index, value) function pointer
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__resize_function__FrameTransforms__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "FrameTransforms",  // message name
  1,  // number of fields
  sizeof(foxglove_msgs__msg__FrameTransforms),
  foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_member_array,  // message members
  foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, FrameTransforms)() {
  foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, FrameTransform)();
  if (!foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__FrameTransforms__rosidl_typesupport_introspection_c__FrameTransforms_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
