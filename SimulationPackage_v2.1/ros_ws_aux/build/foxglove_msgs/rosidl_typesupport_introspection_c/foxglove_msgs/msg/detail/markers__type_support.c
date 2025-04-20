// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/markers__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/markers__functions.h"
#include "foxglove_msgs/msg/detail/markers__struct.h"


// Include directives for member types
// Member `deletions`
#include "foxglove_msgs/msg/marker_deletion.h"
// Member `deletions`
#include "foxglove_msgs/msg/detail/marker_deletion__rosidl_typesupport_introspection_c.h"
// Member `arrows`
#include "foxglove_msgs/msg/arrow_marker.h"
// Member `arrows`
#include "foxglove_msgs/msg/detail/arrow_marker__rosidl_typesupport_introspection_c.h"
// Member `cubes`
#include "foxglove_msgs/msg/cube_list_marker.h"
// Member `cubes`
#include "foxglove_msgs/msg/detail/cube_list_marker__rosidl_typesupport_introspection_c.h"
// Member `spheres`
#include "foxglove_msgs/msg/sphere_list_marker.h"
// Member `spheres`
#include "foxglove_msgs/msg/detail/sphere_list_marker__rosidl_typesupport_introspection_c.h"
// Member `cones`
#include "foxglove_msgs/msg/cone_list_marker.h"
// Member `cones`
#include "foxglove_msgs/msg/detail/cone_list_marker__rosidl_typesupport_introspection_c.h"
// Member `lines`
#include "foxglove_msgs/msg/line_marker.h"
// Member `lines`
#include "foxglove_msgs/msg/detail/line_marker__rosidl_typesupport_introspection_c.h"
// Member `triangles`
#include "foxglove_msgs/msg/triangle_list_marker.h"
// Member `triangles`
#include "foxglove_msgs/msg/detail/triangle_list_marker__rosidl_typesupport_introspection_c.h"
// Member `texts`
#include "foxglove_msgs/msg/text_marker.h"
// Member `texts`
#include "foxglove_msgs/msg/detail/text_marker__rosidl_typesupport_introspection_c.h"
// Member `models`
#include "foxglove_msgs/msg/model_marker.h"
// Member `models`
#include "foxglove_msgs/msg/detail/model_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__Markers__init(message_memory);
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function(void * message_memory)
{
  foxglove_msgs__msg__Markers__fini(message_memory);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__deletions(
  const void * untyped_member)
{
  const foxglove_msgs__msg__MarkerDeletion__Sequence * member =
    (const foxglove_msgs__msg__MarkerDeletion__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__deletions(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__MarkerDeletion__Sequence * member =
    (const foxglove_msgs__msg__MarkerDeletion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__deletions(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__MarkerDeletion__Sequence * member =
    (foxglove_msgs__msg__MarkerDeletion__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__deletions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__MarkerDeletion * item =
    ((const foxglove_msgs__msg__MarkerDeletion *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__deletions(untyped_member, index));
  foxglove_msgs__msg__MarkerDeletion * value =
    (foxglove_msgs__msg__MarkerDeletion *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__deletions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__MarkerDeletion * item =
    ((foxglove_msgs__msg__MarkerDeletion *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__deletions(untyped_member, index));
  const foxglove_msgs__msg__MarkerDeletion * value =
    (const foxglove_msgs__msg__MarkerDeletion *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__deletions(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__MarkerDeletion__Sequence * member =
    (foxglove_msgs__msg__MarkerDeletion__Sequence *)(untyped_member);
  foxglove_msgs__msg__MarkerDeletion__Sequence__fini(member);
  return foxglove_msgs__msg__MarkerDeletion__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__arrows(
  const void * untyped_member)
{
  const foxglove_msgs__msg__ArrowMarker__Sequence * member =
    (const foxglove_msgs__msg__ArrowMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__arrows(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__ArrowMarker__Sequence * member =
    (const foxglove_msgs__msg__ArrowMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__arrows(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__ArrowMarker__Sequence * member =
    (foxglove_msgs__msg__ArrowMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__ArrowMarker * item =
    ((const foxglove_msgs__msg__ArrowMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__arrows(untyped_member, index));
  foxglove_msgs__msg__ArrowMarker * value =
    (foxglove_msgs__msg__ArrowMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__ArrowMarker * item =
    ((foxglove_msgs__msg__ArrowMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__arrows(untyped_member, index));
  const foxglove_msgs__msg__ArrowMarker * value =
    (const foxglove_msgs__msg__ArrowMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__arrows(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__ArrowMarker__Sequence * member =
    (foxglove_msgs__msg__ArrowMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__ArrowMarker__Sequence__fini(member);
  return foxglove_msgs__msg__ArrowMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__cubes(
  const void * untyped_member)
{
  const foxglove_msgs__msg__CubeListMarker__Sequence * member =
    (const foxglove_msgs__msg__CubeListMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cubes(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__CubeListMarker__Sequence * member =
    (const foxglove_msgs__msg__CubeListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cubes(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__CubeListMarker__Sequence * member =
    (foxglove_msgs__msg__CubeListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__cubes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__CubeListMarker * item =
    ((const foxglove_msgs__msg__CubeListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cubes(untyped_member, index));
  foxglove_msgs__msg__CubeListMarker * value =
    (foxglove_msgs__msg__CubeListMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__cubes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__CubeListMarker * item =
    ((foxglove_msgs__msg__CubeListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cubes(untyped_member, index));
  const foxglove_msgs__msg__CubeListMarker * value =
    (const foxglove_msgs__msg__CubeListMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__cubes(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__CubeListMarker__Sequence * member =
    (foxglove_msgs__msg__CubeListMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__CubeListMarker__Sequence__fini(member);
  return foxglove_msgs__msg__CubeListMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__spheres(
  const void * untyped_member)
{
  const foxglove_msgs__msg__SphereListMarker__Sequence * member =
    (const foxglove_msgs__msg__SphereListMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__spheres(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__SphereListMarker__Sequence * member =
    (const foxglove_msgs__msg__SphereListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__spheres(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__SphereListMarker__Sequence * member =
    (foxglove_msgs__msg__SphereListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__spheres(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__SphereListMarker * item =
    ((const foxglove_msgs__msg__SphereListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__spheres(untyped_member, index));
  foxglove_msgs__msg__SphereListMarker * value =
    (foxglove_msgs__msg__SphereListMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__spheres(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__SphereListMarker * item =
    ((foxglove_msgs__msg__SphereListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__spheres(untyped_member, index));
  const foxglove_msgs__msg__SphereListMarker * value =
    (const foxglove_msgs__msg__SphereListMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__spheres(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__SphereListMarker__Sequence * member =
    (foxglove_msgs__msg__SphereListMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__SphereListMarker__Sequence__fini(member);
  return foxglove_msgs__msg__SphereListMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__cones(
  const void * untyped_member)
{
  const foxglove_msgs__msg__ConeListMarker__Sequence * member =
    (const foxglove_msgs__msg__ConeListMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cones(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__ConeListMarker__Sequence * member =
    (const foxglove_msgs__msg__ConeListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cones(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__ConeListMarker__Sequence * member =
    (foxglove_msgs__msg__ConeListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__cones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__ConeListMarker * item =
    ((const foxglove_msgs__msg__ConeListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cones(untyped_member, index));
  foxglove_msgs__msg__ConeListMarker * value =
    (foxglove_msgs__msg__ConeListMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__cones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__ConeListMarker * item =
    ((foxglove_msgs__msg__ConeListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cones(untyped_member, index));
  const foxglove_msgs__msg__ConeListMarker * value =
    (const foxglove_msgs__msg__ConeListMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__cones(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__ConeListMarker__Sequence * member =
    (foxglove_msgs__msg__ConeListMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__ConeListMarker__Sequence__fini(member);
  return foxglove_msgs__msg__ConeListMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__lines(
  const void * untyped_member)
{
  const foxglove_msgs__msg__LineMarker__Sequence * member =
    (const foxglove_msgs__msg__LineMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__lines(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__LineMarker__Sequence * member =
    (const foxglove_msgs__msg__LineMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__lines(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__LineMarker__Sequence * member =
    (foxglove_msgs__msg__LineMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__LineMarker * item =
    ((const foxglove_msgs__msg__LineMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__lines(untyped_member, index));
  foxglove_msgs__msg__LineMarker * value =
    (foxglove_msgs__msg__LineMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__LineMarker * item =
    ((foxglove_msgs__msg__LineMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__lines(untyped_member, index));
  const foxglove_msgs__msg__LineMarker * value =
    (const foxglove_msgs__msg__LineMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__lines(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__LineMarker__Sequence * member =
    (foxglove_msgs__msg__LineMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__LineMarker__Sequence__fini(member);
  return foxglove_msgs__msg__LineMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__triangles(
  const void * untyped_member)
{
  const foxglove_msgs__msg__TriangleListMarker__Sequence * member =
    (const foxglove_msgs__msg__TriangleListMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__triangles(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__TriangleListMarker__Sequence * member =
    (const foxglove_msgs__msg__TriangleListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__triangles(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__TriangleListMarker__Sequence * member =
    (foxglove_msgs__msg__TriangleListMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__triangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__TriangleListMarker * item =
    ((const foxglove_msgs__msg__TriangleListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__triangles(untyped_member, index));
  foxglove_msgs__msg__TriangleListMarker * value =
    (foxglove_msgs__msg__TriangleListMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__triangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__TriangleListMarker * item =
    ((foxglove_msgs__msg__TriangleListMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__triangles(untyped_member, index));
  const foxglove_msgs__msg__TriangleListMarker * value =
    (const foxglove_msgs__msg__TriangleListMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__triangles(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__TriangleListMarker__Sequence * member =
    (foxglove_msgs__msg__TriangleListMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__TriangleListMarker__Sequence__fini(member);
  return foxglove_msgs__msg__TriangleListMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__texts(
  const void * untyped_member)
{
  const foxglove_msgs__msg__TextMarker__Sequence * member =
    (const foxglove_msgs__msg__TextMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__texts(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__TextMarker__Sequence * member =
    (const foxglove_msgs__msg__TextMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__texts(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__TextMarker__Sequence * member =
    (foxglove_msgs__msg__TextMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__texts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__TextMarker * item =
    ((const foxglove_msgs__msg__TextMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__texts(untyped_member, index));
  foxglove_msgs__msg__TextMarker * value =
    (foxglove_msgs__msg__TextMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__texts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__TextMarker * item =
    ((foxglove_msgs__msg__TextMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__texts(untyped_member, index));
  const foxglove_msgs__msg__TextMarker * value =
    (const foxglove_msgs__msg__TextMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__texts(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__TextMarker__Sequence * member =
    (foxglove_msgs__msg__TextMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__TextMarker__Sequence__fini(member);
  return foxglove_msgs__msg__TextMarker__Sequence__init(member, size);
}

size_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__models(
  const void * untyped_member)
{
  const foxglove_msgs__msg__ModelMarker__Sequence * member =
    (const foxglove_msgs__msg__ModelMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__models(
  const void * untyped_member, size_t index)
{
  const foxglove_msgs__msg__ModelMarker__Sequence * member =
    (const foxglove_msgs__msg__ModelMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__models(
  void * untyped_member, size_t index)
{
  foxglove_msgs__msg__ModelMarker__Sequence * member =
    (foxglove_msgs__msg__ModelMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const foxglove_msgs__msg__ModelMarker * item =
    ((const foxglove_msgs__msg__ModelMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__models(untyped_member, index));
  foxglove_msgs__msg__ModelMarker * value =
    (foxglove_msgs__msg__ModelMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  foxglove_msgs__msg__ModelMarker * item =
    ((foxglove_msgs__msg__ModelMarker *)
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__models(untyped_member, index));
  const foxglove_msgs__msg__ModelMarker * value =
    (const foxglove_msgs__msg__ModelMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__models(
  void * untyped_member, size_t size)
{
  foxglove_msgs__msg__ModelMarker__Sequence * member =
    (foxglove_msgs__msg__ModelMarker__Sequence *)(untyped_member);
  foxglove_msgs__msg__ModelMarker__Sequence__fini(member);
  return foxglove_msgs__msg__ModelMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[9] = {
  {
    "deletions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, deletions),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__deletions,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__deletions,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__deletions,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__deletions,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__deletions,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__deletions  // resize(index) function pointer
  },
  {
    "arrows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, arrows),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__arrows,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__arrows,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__arrows,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__arrows,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__arrows,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__arrows  // resize(index) function pointer
  },
  {
    "cubes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, cubes),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__cubes,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cubes,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cubes,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__cubes,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__cubes,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__cubes  // resize(index) function pointer
  },
  {
    "spheres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, spheres),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__spheres,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__spheres,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__spheres,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__spheres,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__spheres,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__spheres  // resize(index) function pointer
  },
  {
    "cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, cones),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__cones,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__cones,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__cones,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__cones,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__cones,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__cones  // resize(index) function pointer
  },
  {
    "lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, lines),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__lines,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__lines,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__lines,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__lines,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__lines,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__lines  // resize(index) function pointer
  },
  {
    "triangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, triangles),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__triangles,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__triangles,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__triangles,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__triangles,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__triangles,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__triangles  // resize(index) function pointer
  },
  {
    "texts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, texts),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__texts,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__texts,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__texts,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__texts,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__texts,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__texts  // resize(index) function pointer
  },
  {
    "models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__Markers, models),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__models,  // size() function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__models,  // get_const(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__models,  // get(index) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__models,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__models,  // assign(index, value) function pointer
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "Markers",  // message name
  9,  // number of fields
  sizeof(foxglove_msgs__msg__Markers),
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array,  // message members
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, Markers)() {
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, MarkerDeletion)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ArrowMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, CubeListMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, SphereListMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ConeListMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, LineMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, TriangleListMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, TextMarker)();
  foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ModelMarker)();
  if (!foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
