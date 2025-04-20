// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/ImageMarkerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/image_marker_array__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/image_marker_array__functions.h"
#include "foxglove_msgs/msg/detail/image_marker_array__struct.h"


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/image_marker.h"
// Member `markers`
#include "visualization_msgs/msg/detail/image_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__ImageMarkerArray__init(message_memory);
}

void foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_fini_function(void * message_memory)
{
  foxglove_msgs__msg__ImageMarkerArray__fini(message_memory);
}

size_t foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__size_function__ImageMarkerArray__markers(
  const void * untyped_member)
{
  const visualization_msgs__msg__ImageMarker__Sequence * member =
    (const visualization_msgs__msg__ImageMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ImageMarkerArray__markers(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__ImageMarker__Sequence * member =
    (const visualization_msgs__msg__ImageMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_function__ImageMarkerArray__markers(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__ImageMarker__Sequence * member =
    (visualization_msgs__msg__ImageMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__fetch_function__ImageMarkerArray__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const visualization_msgs__msg__ImageMarker * item =
    ((const visualization_msgs__msg__ImageMarker *)
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ImageMarkerArray__markers(untyped_member, index));
  visualization_msgs__msg__ImageMarker * value =
    (visualization_msgs__msg__ImageMarker *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__assign_function__ImageMarkerArray__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  visualization_msgs__msg__ImageMarker * item =
    ((visualization_msgs__msg__ImageMarker *)
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_function__ImageMarkerArray__markers(untyped_member, index));
  const visualization_msgs__msg__ImageMarker * value =
    (const visualization_msgs__msg__ImageMarker *)(untyped_value);
  *item = *value;
}

bool foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__resize_function__ImageMarkerArray__markers(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__ImageMarker__Sequence * member =
    (visualization_msgs__msg__ImageMarker__Sequence *)(untyped_member);
  visualization_msgs__msg__ImageMarker__Sequence__fini(member);
  return visualization_msgs__msg__ImageMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_member_array[1] = {
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__ImageMarkerArray, markers),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__size_function__ImageMarkerArray__markers,  // size() function pointer
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ImageMarkerArray__markers,  // get_const(index) function pointer
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__get_function__ImageMarkerArray__markers,  // get(index) function pointer
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__fetch_function__ImageMarkerArray__markers,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__assign_function__ImageMarkerArray__markers,  // assign(index, value) function pointer
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__resize_function__ImageMarkerArray__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "ImageMarkerArray",  // message name
  1,  // number of fields
  sizeof(foxglove_msgs__msg__ImageMarkerArray),
  foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_member_array,  // message members
  foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, ImageMarkerArray)() {
  foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, ImageMarker)();
  if (!foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__ImageMarkerArray__rosidl_typesupport_introspection_c__ImageMarkerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
