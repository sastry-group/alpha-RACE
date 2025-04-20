// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from foxglove_msgs:msg/SceneEntities.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/scene_entities__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "foxglove_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "foxglove_msgs/msg/detail/scene_entities__struct.h"
#include "foxglove_msgs/msg/detail/scene_entities__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "foxglove_msgs/msg/detail/scene_entity__functions.h"  // entities
#include "foxglove_msgs/msg/detail/scene_entity_deletion__functions.h"  // deletions

// forward declare type support functions
size_t get_serialized_size_foxglove_msgs__msg__SceneEntity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__SceneEntity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntity)();
size_t get_serialized_size_foxglove_msgs__msg__SceneEntityDeletion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__SceneEntityDeletion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntityDeletion)();


using _SceneEntities__ros_msg_type = foxglove_msgs__msg__SceneEntities;

static bool _SceneEntities__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SceneEntities__ros_msg_type * ros_message = static_cast<const _SceneEntities__ros_msg_type *>(untyped_ros_message);
  // Field name: deletions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntityDeletion
      )()->data);
    size_t size = ros_message->deletions.size;
    auto array_ptr = ros_message->deletions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: entities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntity
      )()->data);
    size_t size = ros_message->entities.size;
    auto array_ptr = ros_message->entities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SceneEntities__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SceneEntities__ros_msg_type * ros_message = static_cast<_SceneEntities__ros_msg_type *>(untyped_ros_message);
  // Field name: deletions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntityDeletion
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deletions.data) {
      foxglove_msgs__msg__SceneEntityDeletion__Sequence__fini(&ros_message->deletions);
    }
    if (!foxglove_msgs__msg__SceneEntityDeletion__Sequence__init(&ros_message->deletions, size)) {
      fprintf(stderr, "failed to create array for field 'deletions'");
      return false;
    }
    auto array_ptr = ros_message->deletions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: entities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntity
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->entities.data) {
      foxglove_msgs__msg__SceneEntity__Sequence__fini(&ros_message->entities);
    }
    if (!foxglove_msgs__msg__SceneEntity__Sequence__init(&ros_message->entities, size)) {
      fprintf(stderr, "failed to create array for field 'entities'");
      return false;
    }
    auto array_ptr = ros_message->entities.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_foxglove_msgs
size_t get_serialized_size_foxglove_msgs__msg__SceneEntities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SceneEntities__ros_msg_type * ros_message = static_cast<const _SceneEntities__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name deletions
  {
    size_t array_size = ros_message->deletions.size;
    auto array_ptr = ros_message->deletions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__SceneEntityDeletion(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name entities
  {
    size_t array_size = ros_message->entities.size;
    auto array_ptr = ros_message->entities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__SceneEntity(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SceneEntities__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_foxglove_msgs__msg__SceneEntities(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_foxglove_msgs
size_t max_serialized_size_foxglove_msgs__msg__SceneEntities(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: deletions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_foxglove_msgs__msg__SceneEntityDeletion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: entities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_foxglove_msgs__msg__SceneEntity(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = foxglove_msgs__msg__SceneEntities;
    is_plain =
      (
      offsetof(DataType, entities) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SceneEntities__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_foxglove_msgs__msg__SceneEntities(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SceneEntities = {
  "foxglove_msgs::msg",
  "SceneEntities",
  _SceneEntities__cdr_serialize,
  _SceneEntities__cdr_deserialize,
  _SceneEntities__get_serialized_size,
  _SceneEntities__max_serialized_size
};

static rosidl_message_type_support_t _SceneEntities__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SceneEntities,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SceneEntities)() {
  return &_SceneEntities__type_support;
}

#if defined(__cplusplus)
}
#endif
