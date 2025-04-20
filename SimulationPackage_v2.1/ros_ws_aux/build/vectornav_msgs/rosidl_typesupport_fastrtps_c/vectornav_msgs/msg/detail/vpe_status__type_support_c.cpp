// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vectornav_msgs:msg/VpeStatus.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/vpe_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vectornav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vectornav_msgs/msg/detail/vpe_status__struct.h"
#include "vectornav_msgs/msg/detail/vpe_status__functions.h"
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


// forward declare type support functions


using _VpeStatus__ros_msg_type = vectornav_msgs__msg__VpeStatus;

static bool _VpeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VpeStatus__ros_msg_type * ros_message = static_cast<const _VpeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: attitude_quality
  {
    cdr << ros_message->attitude_quality;
  }

  // Field name: gyro_saturation
  {
    cdr << (ros_message->gyro_saturation ? true : false);
  }

  // Field name: gyro_saturation_recovery
  {
    cdr << (ros_message->gyro_saturation_recovery ? true : false);
  }

  // Field name: mag_disturbance
  {
    cdr << ros_message->mag_disturbance;
  }

  // Field name: mag_saturation
  {
    cdr << (ros_message->mag_saturation ? true : false);
  }

  // Field name: acc_disturbance
  {
    cdr << ros_message->acc_disturbance;
  }

  // Field name: acc_saturation
  {
    cdr << (ros_message->acc_saturation ? true : false);
  }

  // Field name: known_mag_disturbance
  {
    cdr << (ros_message->known_mag_disturbance ? true : false);
  }

  // Field name: known_accel_disturbance
  {
    cdr << (ros_message->known_accel_disturbance ? true : false);
  }

  return true;
}

static bool _VpeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VpeStatus__ros_msg_type * ros_message = static_cast<_VpeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: attitude_quality
  {
    cdr >> ros_message->attitude_quality;
  }

  // Field name: gyro_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_saturation = tmp ? true : false;
  }

  // Field name: gyro_saturation_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_saturation_recovery = tmp ? true : false;
  }

  // Field name: mag_disturbance
  {
    cdr >> ros_message->mag_disturbance;
  }

  // Field name: mag_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_saturation = tmp ? true : false;
  }

  // Field name: acc_disturbance
  {
    cdr >> ros_message->acc_disturbance;
  }

  // Field name: acc_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_saturation = tmp ? true : false;
  }

  // Field name: known_mag_disturbance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->known_mag_disturbance = tmp ? true : false;
  }

  // Field name: known_accel_disturbance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->known_accel_disturbance = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t get_serialized_size_vectornav_msgs__msg__VpeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VpeStatus__ros_msg_type * ros_message = static_cast<const _VpeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name attitude_quality
  {
    size_t item_size = sizeof(ros_message->attitude_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_saturation
  {
    size_t item_size = sizeof(ros_message->gyro_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_saturation_recovery
  {
    size_t item_size = sizeof(ros_message->gyro_saturation_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_disturbance
  {
    size_t item_size = sizeof(ros_message->mag_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_saturation
  {
    size_t item_size = sizeof(ros_message->mag_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_disturbance
  {
    size_t item_size = sizeof(ros_message->acc_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_saturation
  {
    size_t item_size = sizeof(ros_message->acc_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name known_mag_disturbance
  {
    size_t item_size = sizeof(ros_message->known_mag_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name known_accel_disturbance
  {
    size_t item_size = sizeof(ros_message->known_accel_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VpeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vectornav_msgs__msg__VpeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t max_serialized_size_vectornav_msgs__msg__VpeStatus(
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

  // member: attitude_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_saturation_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: known_mag_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: known_accel_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vectornav_msgs__msg__VpeStatus;
    is_plain =
      (
      offsetof(DataType, known_accel_disturbance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VpeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vectornav_msgs__msg__VpeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VpeStatus = {
  "vectornav_msgs::msg",
  "VpeStatus",
  _VpeStatus__cdr_serialize,
  _VpeStatus__cdr_deserialize,
  _VpeStatus__get_serialized_size,
  _VpeStatus__max_serialized_size
};

static rosidl_message_type_support_t _VpeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VpeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, VpeStatus)() {
  return &_VpeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
