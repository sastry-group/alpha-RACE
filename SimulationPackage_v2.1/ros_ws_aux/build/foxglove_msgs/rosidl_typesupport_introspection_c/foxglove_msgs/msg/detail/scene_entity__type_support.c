// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/scene_entity__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/scene_entity__functions.h"
#include "foxglove_msgs/msg/detail/scene_entity__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `metadata`
#include "foxglove_msgs/msg/key_value_pair.h"
// Member `metadata`
#include "foxglove_msgs/msg/detail/key_value_pair__rosidl_typesupport_introspection_c.h"
// Member `arrows`
#include "foxglove_msgs/msg/arrow_primitive.h"
// Member `arrows`
#include "foxglove_msgs/msg/detail/arrow_primitive__rosidl_typesupport_introspection_c.h"
// Member `cubes`
#include "foxglove_msgs/msg/cube_primitive.h"
// Member `cubes`
#include "foxglove_msgs/msg/detail/cube_primitive__rosidl_typesupport_introspection_c.h"
// Member `spheres`
#include "foxglove_msgs/msg/sphere_primitive.h"
// Member `spheres`
#include "foxglove_msgs/msg/detail/sphere_primitive__rosidl_typesupport_introspection_c.h"
// Member `cylinders`
#include "foxglove_msgs/msg/cylinder_primitive.h"
// Member `cylinders`
#include "foxglove_msgs/msg/detail/cylinder_primitive__rosidl_typesupport_introspection_c.h"
// Member `lines`
#include "foxglove_msgs/msg/line_primitive.h"
// Member `lines`
#include "foxglove_msgs/msg/detail/line_primitive__rosidl_typesupport_introspection_c.h"
// Member `triangles`
#include "foxglove_msgs/msg/triangle_list_primitive.h"
// Member `triangles`
#include "foxglove_msgs/msg/detail/triangle_list_primitive__rosidl_typesupport_introspection_c.h"
// Member `texts`
#include "foxglove_msgs/msg/text_primitive.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_primitive__rosidl_typesupport_introspection_c.h"
// Member `models`
#include "foxglove_msgs/msg/model_primitive.h"
// Member `models`
#include "foxglove_msgs/msg/detail/model_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__SceneEntity__init(message_memory);
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_fini_function(void * message_memory)
{
  foxglove_msgs__msg__SceneEntity__fini(message_memory);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__metadata(
  const void * untyped_member)
{
  const foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (const foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__metadata(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (const foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__metadata(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__metadata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__KeyValuePair * item =
    ((const foxglove_msgs__msg__KeyValuePair *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__metadata(untyped_member, index));
  foxglove_msgs__msg__KeyValuePair * value =
    (foxglove_msgs__msg__KeyValuePair *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__metadata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__KeyValuePair * item =
    ((foxglove_msgs__msg__KeyValuePair *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__metadata(untyped_member, index));
  const foxglove_msgs__msg__KeyValuePair * value =
    (const foxglove_msgs__msg__KeyValuePair *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__metadata(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__KeyValuePair__Sequence * member =
    (foxglove_msgs__msg__KeyValuePair__Sequence *)(untyped_member);
  foxglove_msgs__msg__KeyValuePair__Sequence__fini(member);
  return foxglove_msgs__msg__KeyValuePair__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__arrows(
  const void * untyped_member)
{
  const foxglove_msgs__msg__ArrowPrimitive__Sequence * member =
    (const foxglove_msgs__msg__ArrowPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__arrows(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__ArrowPrimitive__Sequence * member =
    (const foxglove_msgs__msg__ArrowPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__arrows(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__ArrowPrimitive__Sequence * member =
    (foxglove_msgs__msg__ArrowPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__ArrowPrimitive * item =
    ((const foxglove_msgs__msg__ArrowPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__arrows(untyped_member, index));
  foxglove_msgs__msg__ArrowPrimitive * value =
    (foxglove_msgs__msg__ArrowPrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__ArrowPrimitive * item =
    ((foxglove_msgs__msg__ArrowPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__arrows(untyped_member, index));
  const foxglove_msgs__msg__ArrowPrimitive * value =
    (const foxglove_msgs__msg__ArrowPrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__arrows(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__ArrowPrimitive__Sequence * member =
    (foxglove_msgs__msg__ArrowPrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__ArrowPrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__ArrowPrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__cubes(
  const void * untyped_member)
{
  const foxglove_msgs__msg__CubePrimitive__Sequence * member =
    (const foxglove_msgs__msg__CubePrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cubes(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__CubePrimitive__Sequence * member =
    (const foxglove_msgs__msg__CubePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cubes(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__CubePrimitive__Sequence * member =
    (foxglove_msgs__msg__CubePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__cubes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__CubePrimitive * item =
    ((const foxglove_msgs__msg__CubePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cubes(untyped_member, index));
  foxglove_msgs__msg__CubePrimitive * value =
    (foxglove_msgs__msg__CubePrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__cubes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__CubePrimitive * item =
    ((foxglove_msgs__msg__CubePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cubes(untyped_member, index));
  const foxglove_msgs__msg__CubePrimitive * value =
    (const foxglove_msgs__msg__CubePrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__cubes(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__CubePrimitive__Sequence * member =
    (foxglove_msgs__msg__CubePrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__CubePrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__CubePrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__spheres(
  const void * untyped_member)
{
  const foxglove_msgs__msg__SpherePrimitive__Sequence * member =
    (const foxglove_msgs__msg__SpherePrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__spheres(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__SpherePrimitive__Sequence * member =
    (const foxglove_msgs__msg__SpherePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__spheres(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__SpherePrimitive__Sequence * member =
    (foxglove_msgs__msg__SpherePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__spheres(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__SpherePrimitive * item =
    ((const foxglove_msgs__msg__SpherePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__spheres(untyped_member, index));
  foxglove_msgs__msg__SpherePrimitive * value =
    (foxglove_msgs__msg__SpherePrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__spheres(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__SpherePrimitive * item =
    ((foxglove_msgs__msg__SpherePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__spheres(untyped_member, index));
  const foxglove_msgs__msg__SpherePrimitive * value =
    (const foxglove_msgs__msg__SpherePrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__spheres(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__SpherePrimitive__Sequence * member =
    (foxglove_msgs__msg__SpherePrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__SpherePrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__SpherePrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__cylinders(
  const void * untyped_member)
{
  const foxglove_msgs__msg__CylinderPrimitive__Sequence * member =
    (const foxglove_msgs__msg__CylinderPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cylinders(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__CylinderPrimitive__Sequence * member =
    (const foxglove_msgs__msg__CylinderPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cylinders(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__CylinderPrimitive__Sequence * member =
    (foxglove_msgs__msg__CylinderPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__cylinders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__CylinderPrimitive * item =
    ((const foxglove_msgs__msg__CylinderPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cylinders(untyped_member, index));
  foxglove_msgs__msg__CylinderPrimitive * value =
    (foxglove_msgs__msg__CylinderPrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__cylinders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__CylinderPrimitive * item =
    ((foxglove_msgs__msg__CylinderPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cylinders(untyped_member, index));
  const foxglove_msgs__msg__CylinderPrimitive * value =
    (const foxglove_msgs__msg__CylinderPrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__cylinders(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__CylinderPrimitive__Sequence * member =
    (foxglove_msgs__msg__CylinderPrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__CylinderPrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__CylinderPrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__lines(
  const void * untyped_member)
{
  const foxglove_msgs__msg__LinePrimitive__Sequence * member =
    (const foxglove_msgs__msg__LinePrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__lines(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__LinePrimitive__Sequence * member =
    (const foxglove_msgs__msg__LinePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__lines(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__LinePrimitive__Sequence * member =
    (foxglove_msgs__msg__LinePrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__LinePrimitive * item =
    ((const foxglove_msgs__msg__LinePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__lines(untyped_member, index));
  foxglove_msgs__msg__LinePrimitive * value =
    (foxglove_msgs__msg__LinePrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__LinePrimitive * item =
    ((foxglove_msgs__msg__LinePrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__lines(untyped_member, index));
  const foxglove_msgs__msg__LinePrimitive * value =
    (const foxglove_msgs__msg__LinePrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__lines(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__LinePrimitive__Sequence * member =
    (foxglove_msgs__msg__LinePrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__LinePrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__LinePrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__triangles(
  const void * untyped_member)
{
  const foxglove_msgs__msg__TriangleListPrimitive__Sequence * member =
    (const foxglove_msgs__msg__TriangleListPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__triangles(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__TriangleListPrimitive__Sequence * member =
    (const foxglove_msgs__msg__TriangleListPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__triangles(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__TriangleListPrimitive__Sequence * member =
    (foxglove_msgs__msg__TriangleListPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__TriangleListPrimitive * item =
    ((const foxglove_msgs__msg__TriangleListPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__triangles(untyped_member, index));
  foxglove_msgs__msg__TriangleListPrimitive * value =
    (foxglove_msgs__msg__TriangleListPrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__TriangleListPrimitive * item =
    ((foxglove_msgs__msg__TriangleListPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__triangles(untyped_member, index));
  const foxglove_msgs__msg__TriangleListPrimitive * value =
    (const foxglove_msgs__msg__TriangleListPrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__triangles(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__TriangleListPrimitive__Sequence * member =
    (foxglove_msgs__msg__TriangleListPrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__TriangleListPrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__TriangleListPrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__texts(
  const void * untyped_member)
{
  const foxglove_msgs__msg__TextPrimitive__Sequence * member =
    (const foxglove_msgs__msg__TextPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__texts(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__TextPrimitive__Sequence * member =
    (const foxglove_msgs__msg__TextPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__texts(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__TextPrimitive__Sequence * member =
    (foxglove_msgs__msg__TextPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__TextPrimitive * item =
    ((const foxglove_msgs__msg__TextPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__texts(untyped_member, index));
  foxglove_msgs__msg__TextPrimitive * value =
    (foxglove_msgs__msg__TextPrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__TextPrimitive * item =
    ((foxglove_msgs__msg__TextPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__texts(untyped_member, index));
  const foxglove_msgs__msg__TextPrimitive * value =
    (const foxglove_msgs__msg__TextPrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__texts(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__TextPrimitive__Sequence * member =
    (foxglove_msgs__msg__TextPrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__TextPrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__TextPrimitive__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__models(
  const void * untyped_member)
{
  const foxglove_msgs__msg__ModelPrimitive__Sequence * member =
    (const foxglove_msgs__msg__ModelPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__models(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__ModelPrimitive__Sequence * member =
    (const foxglove_msgs__msg__ModelPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__models(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__ModelPrimitive__Sequence * member =
    (foxglove_msgs__msg__ModelPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__ModelPrimitive * item =
    ((const foxglove_msgs__msg__ModelPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__models(untyped_member, index));
  foxglove_msgs__msg__ModelPrimitive * value =
    (foxglove_msgs__msg__ModelPrimitive *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__ModelPrimitive * item =
    ((foxglove_msgs__msg__ModelPrimitive *)
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__models(untyped_member, index));
  const foxglove_msgs__msg__ModelPrimitive * value =
    (const foxglove_msgs__msg__ModelPrimitive *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__models(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__ModelPrimitive__Sequence * member =
    (foxglove_msgs__msg__ModelPrimitive__Sequence *)(untyped_member);
  foxglove_msgs__msg__ModelPrimitive__Sequence__fini(member);
  return foxglove_msgs__msg__ModelPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[14] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_locked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, frame_locked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, metadata),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__metadata,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__metadata,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__metadata,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__metadata,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__metadata,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__metadata  // resize(index) function pointer
  },
  {
    "arrows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, arrows),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__arrows,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__arrows,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__arrows,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__arrows,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__arrows,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__arrows  // resize(index) function pointer
  },
  {
    "cubes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, cubes),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__cubes,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cubes,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cubes,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__cubes,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__cubes,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__cubes  // resize(index) function pointer
  },
  {
    "spheres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, spheres),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__spheres,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__spheres,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__spheres,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__spheres,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__spheres,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__spheres  // resize(index) function pointer
  },
  {
    "cylinders",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, cylinders),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__cylinders,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__cylinders,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__cylinders,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__cylinders,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__cylinders,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__cylinders  // resize(index) function pointer
  },
  {
    "lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, lines),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__lines,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__lines,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__lines,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__lines,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__lines,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__lines  // resize(index) function pointer
  },
  {
    "triangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, triangles),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__triangles,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__triangles,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__triangles,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__triangles,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__triangles,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__triangles  // resize(index) function pointer
  },
  {
    "texts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, texts),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__texts,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__texts,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__texts,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__texts,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__texts,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__texts  // resize(index) function pointer
  },
  {
    "models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__SceneEntity, models),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__size_function__SceneEntity__models,  // size() function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_const_function__SceneEntity__models,  // get_const(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__get_function__SceneEntity__models,  // get(index) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__fetch_function__SceneEntity__models,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__assign_function__SceneEntity__models,  // assign(index, value) function pointer
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__resize_function__SceneEntity__models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "SceneEntity",  // message name
  14,  // number of fields
  sizeof(foxglove_msgs__msg__SceneEntity),
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array,  // message members
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SceneEntity)() {
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, KeyValuePair)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ArrowPrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, CubePrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SpherePrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, CylinderPrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, LinePrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, TriangleListPrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, TextPrimitive)();
  foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ModelPrimitive)();
  if (!foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__SceneEntity__rosidl_typesupport_introspection_c__SceneEntity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
