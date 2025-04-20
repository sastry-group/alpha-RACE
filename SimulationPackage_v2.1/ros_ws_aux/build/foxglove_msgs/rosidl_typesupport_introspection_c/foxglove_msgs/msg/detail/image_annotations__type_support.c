// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/ImageAnnotations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/image_annotations__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/image_annotations__functions.h"
#include "foxglove_msgs/msg/detail/image_annotations__struct.h"


// Include directives for member types
// Member `circles`
#include "foxglove_msgs/msg/circle_annotation.h"
// Member `circles`
#include "foxglove_msgs/msg/detail/circle_annotation__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "foxglove_msgs/msg/points_annotation.h"
// Member `points`
#include "foxglove_msgs/msg/detail/points_annotation__rosidl_typesupport_introspection_c.h"
// Member `texts`
#include "foxglove_msgs/msg/text_annotation.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_annotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__ImageAnnotations__init(message_memory);
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_fini_function(void * message_memory)
{
  foxglove_msgs__msg__ImageAnnotations__fini(message_memory);
}

size_t foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__circles(
  const void * untyped_member)
{
  const foxglove_msgs__msg__CircleAnnotation__Sequence * member =
    (const foxglove_msgs__msg__CircleAnnotation__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__circles(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__CircleAnnotation__Sequence * member =
    (const foxglove_msgs__msg__CircleAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__circles(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__CircleAnnotation__Sequence * member =
    (foxglove_msgs__msg__CircleAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__CircleAnnotation * item =
    ((const foxglove_msgs__msg__CircleAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__circles(untyped_member, index));
  foxglove_msgs__msg__CircleAnnotation * value =
    (foxglove_msgs__msg__CircleAnnotation *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__CircleAnnotation * item =
    ((foxglove_msgs__msg__CircleAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__circles(untyped_member, index));
  const foxglove_msgs__msg__CircleAnnotation * value =
    (const foxglove_msgs__msg__CircleAnnotation *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__circles(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__CircleAnnotation__Sequence * member =
    (foxglove_msgs__msg__CircleAnnotation__Sequence *)(untyped_member);
  foxglove_msgs__msg__CircleAnnotation__Sequence__fini(member);
  return foxglove_msgs__msg__CircleAnnotation__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__points(
  const void * untyped_member)
{
  const foxglove_msgs__msg__PointsAnnotation__Sequence * member =
    (const foxglove_msgs__msg__PointsAnnotation__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__points(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__PointsAnnotation__Sequence * member =
    (const foxglove_msgs__msg__PointsAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__points(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__PointsAnnotation__Sequence * member =
    (foxglove_msgs__msg__PointsAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__PointsAnnotation * item =
    ((const foxglove_msgs__msg__PointsAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__points(untyped_member, index));
  foxglove_msgs__msg__PointsAnnotation * value =
    (foxglove_msgs__msg__PointsAnnotation *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__PointsAnnotation * item =
    ((foxglove_msgs__msg__PointsAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__points(untyped_member, index));
  const foxglove_msgs__msg__PointsAnnotation * value =
    (const foxglove_msgs__msg__PointsAnnotation *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__points(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__PointsAnnotation__Sequence * member =
    (foxglove_msgs__msg__PointsAnnotation__Sequence *)(untyped_member);
  foxglove_msgs__msg__PointsAnnotation__Sequence__fini(member);
  return foxglove_msgs__msg__PointsAnnotation__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__texts(
  const void * untyped_member)
{
  const foxglove_msgs__msg__TextAnnotation__Sequence * member =
    (const foxglove_msgs__msg__TextAnnotation__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__texts(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__TextAnnotation__Sequence * member =
    (const foxglove_msgs__msg__TextAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__texts(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__TextAnnotation__Sequence * member =
    (foxglove_msgs__msg__TextAnnotation__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__TextAnnotation * item =
    ((const foxglove_msgs__msg__TextAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__texts(untyped_member, index));
  foxglove_msgs__msg__TextAnnotation * value =
    (foxglove_msgs__msg__TextAnnotation *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__TextAnnotation * item =
    ((foxglove_msgs__msg__TextAnnotation *)
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__texts(untyped_member, index));
  const foxglove_msgs__msg__TextAnnotation * value =
    (const foxglove_msgs__msg__TextAnnotation *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__texts(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__TextAnnotation__Sequence * member =
    (foxglove_msgs__msg__TextAnnotation__Sequence *)(untyped_member);
  foxglove_msgs__msg__TextAnnotation__Sequence__fini(member);
  return foxglove_msgs__msg__TextAnnotation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_member_array[3] = {
  {
    "circles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__ImageAnnotations, circles),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__circles,  // size() function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__circles,  // get_const(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__circles,  // get(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__circles,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__circles,  // assign(index, value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__circles  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__ImageAnnotations, points),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__points,  // size() function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__points,  // get_const(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__points,  // get(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__points,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__points,  // assign(index, value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__points  // resize(index) function pointer
  },
  {
    "texts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__ImageAnnotations, texts),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__size_function__ImageAnnotations__texts,  // size() function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_const_function__ImageAnnotations__texts,  // get_const(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__get_function__ImageAnnotations__texts,  // get(index) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__fetch_function__ImageAnnotations__texts,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__assign_function__ImageAnnotations__texts,  // assign(index, value) function pointer
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__resize_function__ImageAnnotations__texts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "ImageAnnotations",  // message name
  3,  // number of fields
  sizeof(foxglove_msgs__msg__ImageAnnotations),
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_member_array,  // message members
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ImageAnnotations)() {
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, CircleAnnotation)();
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, PointsAnnotation)();
  foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, TextAnnotation)();
  if (!foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__ImageAnnotations__rosidl_typesupport_introspection_c__ImageAnnotations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
