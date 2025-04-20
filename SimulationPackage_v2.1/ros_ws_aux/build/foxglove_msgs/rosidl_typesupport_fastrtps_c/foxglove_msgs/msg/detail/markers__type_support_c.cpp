// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/markers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "foxglove_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "foxglove_msgs/msg/detail/markers__struct.h"
#include "foxglove_msgs/msg/detail/markers__functions.h"
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

#include "foxglove_msgs/msg/detail/arrow_marker__functions.h"  // arrows
#include "foxglove_msgs/msg/detail/cone_list_marker__functions.h"  // cones
#include "foxglove_msgs/msg/detail/cube_list_marker__functions.h"  // cubes
#include "foxglove_msgs/msg/detail/line_marker__functions.h"  // lines
#include "foxglove_msgs/msg/detail/marker_deletion__functions.h"  // deletions
#include "foxglove_msgs/msg/detail/model_marker__functions.h"  // models
#include "foxglove_msgs/msg/detail/sphere_list_marker__functions.h"  // spheres
#include "foxglove_msgs/msg/detail/text_marker__functions.h"  // texts
#include "foxglove_msgs/msg/detail/triangle_list_marker__functions.h"  // triangles

// forward declare type support functions
size_t get_serialized_size_foxglove_msgs__msg__ArrowMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__ArrowMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ArrowMarker)();
size_t get_serialized_size_foxglove_msgs__msg__ConeListMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__ConeListMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ConeListMarker)();
size_t get_serialized_size_foxglove_msgs__msg__CubeListMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__CubeListMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, CubeListMarker)();
size_t get_serialized_size_foxglove_msgs__msg__LineMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__LineMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, LineMarker)();
size_t get_serialized_size_foxglove_msgs__msg__MarkerDeletion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__MarkerDeletion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, MarkerDeletion)();
size_t get_serialized_size_foxglove_msgs__msg__ModelMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__ModelMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ModelMarker)();
size_t get_serialized_size_foxglove_msgs__msg__SphereListMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__SphereListMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SphereListMarker)();
size_t get_serialized_size_foxglove_msgs__msg__TextMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__TextMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TextMarker)();
size_t get_serialized_size_foxglove_msgs__msg__TriangleListMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_foxglove_msgs__msg__TriangleListMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TriangleListMarker)();


using _Markers__ros_msg_type = foxglove_msgs__msg__Markers;

static bool _Markers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Markers__ros_msg_type * ros_message = static_cast<const _Markers__ros_msg_type *>(untyped_ros_message);
  // Field name: deletions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, MarkerDeletion
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

  // Field name: arrows
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ArrowMarker
      )()->data);
    size_t size = ros_message->arrows.size;
    auto array_ptr = ros_message->arrows.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cubes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, CubeListMarker
      )()->data);
    size_t size = ros_message->cubes.size;
    auto array_ptr = ros_message->cubes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: spheres
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SphereListMarker
      )()->data);
    size_t size = ros_message->spheres.size;
    auto array_ptr = ros_message->spheres.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cones
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ConeListMarker
      )()->data);
    size_t size = ros_message->cones.size;
    auto array_ptr = ros_message->cones.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, LineMarker
      )()->data);
    size_t size = ros_message->lines.size;
    auto array_ptr = ros_message->lines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: triangles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TriangleListMarker
      )()->data);
    size_t size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: texts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TextMarker
      )()->data);
    size_t size = ros_message->texts.size;
    auto array_ptr = ros_message->texts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ModelMarker
      )()->data);
    size_t size = ros_message->models.size;
    auto array_ptr = ros_message->models.data;
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

static bool _Markers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Markers__ros_msg_type * ros_message = static_cast<_Markers__ros_msg_type *>(untyped_ros_message);
  // Field name: deletions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, MarkerDeletion
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deletions.data) {
      foxglove_msgs__msg__MarkerDeletion__Sequence__fini(&ros_message->deletions);
    }
    if (!foxglove_msgs__msg__MarkerDeletion__Sequence__init(&ros_message->deletions, size)) {
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

  // Field name: arrows
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ArrowMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->arrows.data) {
      foxglove_msgs__msg__ArrowMarker__Sequence__fini(&ros_message->arrows);
    }
    if (!foxglove_msgs__msg__ArrowMarker__Sequence__init(&ros_message->arrows, size)) {
      fprintf(stderr, "failed to create array for field 'arrows'");
      return false;
    }
    auto array_ptr = ros_message->arrows.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cubes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, CubeListMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cubes.data) {
      foxglove_msgs__msg__CubeListMarker__Sequence__fini(&ros_message->cubes);
    }
    if (!foxglove_msgs__msg__CubeListMarker__Sequence__init(&ros_message->cubes, size)) {
      fprintf(stderr, "failed to create array for field 'cubes'");
      return false;
    }
    auto array_ptr = ros_message->cubes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: spheres
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, SphereListMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->spheres.data) {
      foxglove_msgs__msg__SphereListMarker__Sequence__fini(&ros_message->spheres);
    }
    if (!foxglove_msgs__msg__SphereListMarker__Sequence__init(&ros_message->spheres, size)) {
      fprintf(stderr, "failed to create array for field 'spheres'");
      return false;
    }
    auto array_ptr = ros_message->spheres.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cones
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ConeListMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cones.data) {
      foxglove_msgs__msg__ConeListMarker__Sequence__fini(&ros_message->cones);
    }
    if (!foxglove_msgs__msg__ConeListMarker__Sequence__init(&ros_message->cones, size)) {
      fprintf(stderr, "failed to create array for field 'cones'");
      return false;
    }
    auto array_ptr = ros_message->cones.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, LineMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lines.data) {
      foxglove_msgs__msg__LineMarker__Sequence__fini(&ros_message->lines);
    }
    if (!foxglove_msgs__msg__LineMarker__Sequence__init(&ros_message->lines, size)) {
      fprintf(stderr, "failed to create array for field 'lines'");
      return false;
    }
    auto array_ptr = ros_message->lines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: triangles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TriangleListMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->triangles.data) {
      foxglove_msgs__msg__TriangleListMarker__Sequence__fini(&ros_message->triangles);
    }
    if (!foxglove_msgs__msg__TriangleListMarker__Sequence__init(&ros_message->triangles, size)) {
      fprintf(stderr, "failed to create array for field 'triangles'");
      return false;
    }
    auto array_ptr = ros_message->triangles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: texts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, TextMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->texts.data) {
      foxglove_msgs__msg__TextMarker__Sequence__fini(&ros_message->texts);
    }
    if (!foxglove_msgs__msg__TextMarker__Sequence__init(&ros_message->texts, size)) {
      fprintf(stderr, "failed to create array for field 'texts'");
      return false;
    }
    auto array_ptr = ros_message->texts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, ModelMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->models.data) {
      foxglove_msgs__msg__ModelMarker__Sequence__fini(&ros_message->models);
    }
    if (!foxglove_msgs__msg__ModelMarker__Sequence__init(&ros_message->models, size)) {
      fprintf(stderr, "failed to create array for field 'models'");
      return false;
    }
    auto array_ptr = ros_message->models.data;
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
size_t get_serialized_size_foxglove_msgs__msg__Markers(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Markers__ros_msg_type * ros_message = static_cast<const _Markers__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_foxglove_msgs__msg__MarkerDeletion(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name arrows
  {
    size_t array_size = ros_message->arrows.size;
    auto array_ptr = ros_message->arrows.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__ArrowMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cubes
  {
    size_t array_size = ros_message->cubes.size;
    auto array_ptr = ros_message->cubes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__CubeListMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name spheres
  {
    size_t array_size = ros_message->spheres.size;
    auto array_ptr = ros_message->spheres.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__SphereListMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cones
  {
    size_t array_size = ros_message->cones.size;
    auto array_ptr = ros_message->cones.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__ConeListMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lines
  {
    size_t array_size = ros_message->lines.size;
    auto array_ptr = ros_message->lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__LineMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name triangles
  {
    size_t array_size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__TriangleListMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name texts
  {
    size_t array_size = ros_message->texts.size;
    auto array_ptr = ros_message->texts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__TextMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name models
  {
    size_t array_size = ros_message->models.size;
    auto array_ptr = ros_message->models.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_foxglove_msgs__msg__ModelMarker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Markers__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_foxglove_msgs__msg__Markers(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_foxglove_msgs
size_t max_serialized_size_foxglove_msgs__msg__Markers(
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
        max_serialized_size_foxglove_msgs__msg__MarkerDeletion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: arrows
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
        max_serialized_size_foxglove_msgs__msg__ArrowMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cubes
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
        max_serialized_size_foxglove_msgs__msg__CubeListMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: spheres
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
        max_serialized_size_foxglove_msgs__msg__SphereListMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cones
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
        max_serialized_size_foxglove_msgs__msg__ConeListMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lines
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
        max_serialized_size_foxglove_msgs__msg__LineMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: triangles
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
        max_serialized_size_foxglove_msgs__msg__TriangleListMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: texts
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
        max_serialized_size_foxglove_msgs__msg__TextMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: models
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
        max_serialized_size_foxglove_msgs__msg__ModelMarker(
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
    using DataType = foxglove_msgs__msg__Markers;
    is_plain =
      (
      offsetof(DataType, models) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Markers__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_foxglove_msgs__msg__Markers(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Markers = {
  "foxglove_msgs::msg",
  "Markers",
  _Markers__cdr_serialize,
  _Markers__cdr_deserialize,
  _Markers__get_serialized_size,
  _Markers__max_serialized_size
};

static rosidl_message_type_support_t _Markers__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Markers,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, foxglove_msgs, msg, Markers)() {
  return &_Markers__type_support;
}

#if defined(__cplusplus)
}
#endif
