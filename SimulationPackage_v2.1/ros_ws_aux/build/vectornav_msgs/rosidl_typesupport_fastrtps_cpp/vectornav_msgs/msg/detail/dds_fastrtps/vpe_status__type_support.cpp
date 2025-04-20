// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vectornav_msgs:msg/VpeStatus.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/vpe_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vectornav_msgs/msg/detail/vpe_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vectornav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
cdr_serialize(
  const vectornav_msgs::msg::VpeStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: attitude_quality
  cdr << ros_message.attitude_quality;
  // Member: gyro_saturation
  cdr << (ros_message.gyro_saturation ? true : false);
  // Member: gyro_saturation_recovery
  cdr << (ros_message.gyro_saturation_recovery ? true : false);
  // Member: mag_disturbance
  cdr << ros_message.mag_disturbance;
  // Member: mag_saturation
  cdr << (ros_message.mag_saturation ? true : false);
  // Member: acc_disturbance
  cdr << ros_message.acc_disturbance;
  // Member: acc_saturation
  cdr << (ros_message.acc_saturation ? true : false);
  // Member: known_mag_disturbance
  cdr << (ros_message.known_mag_disturbance ? true : false);
  // Member: known_accel_disturbance
  cdr << (ros_message.known_accel_disturbance ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vectornav_msgs::msg::VpeStatus & ros_message)
{
  // Member: attitude_quality
  cdr >> ros_message.attitude_quality;

  // Member: gyro_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_saturation = tmp ? true : false;
  }

  // Member: gyro_saturation_recovery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_saturation_recovery = tmp ? true : false;
  }

  // Member: mag_disturbance
  cdr >> ros_message.mag_disturbance;

  // Member: mag_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_saturation = tmp ? true : false;
  }

  // Member: acc_disturbance
  cdr >> ros_message.acc_disturbance;

  // Member: acc_saturation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acc_saturation = tmp ? true : false;
  }

  // Member: known_mag_disturbance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.known_mag_disturbance = tmp ? true : false;
  }

  // Member: known_accel_disturbance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.known_accel_disturbance = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
get_serialized_size(
  const vectornav_msgs::msg::VpeStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: attitude_quality
  {
    size_t item_size = sizeof(ros_message.attitude_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_saturation
  {
    size_t item_size = sizeof(ros_message.gyro_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_saturation_recovery
  {
    size_t item_size = sizeof(ros_message.gyro_saturation_recovery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_disturbance
  {
    size_t item_size = sizeof(ros_message.mag_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_saturation
  {
    size_t item_size = sizeof(ros_message.mag_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_disturbance
  {
    size_t item_size = sizeof(ros_message.acc_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_saturation
  {
    size_t item_size = sizeof(ros_message.acc_saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: known_mag_disturbance
  {
    size_t item_size = sizeof(ros_message.known_mag_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: known_accel_disturbance
  {
    size_t item_size = sizeof(ros_message.known_accel_disturbance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
max_serialized_size_VpeStatus(
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


  // Member: attitude_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_saturation_recovery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: known_mag_disturbance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: known_accel_disturbance
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
    using DataType = vectornav_msgs::msg::VpeStatus;
    is_plain =
      (
      offsetof(DataType, known_accel_disturbance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VpeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vectornav_msgs::msg::VpeStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VpeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vectornav_msgs::msg::VpeStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VpeStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vectornav_msgs::msg::VpeStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VpeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VpeStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VpeStatus__callbacks = {
  "vectornav_msgs::msg",
  "VpeStatus",
  _VpeStatus__cdr_serialize,
  _VpeStatus__cdr_deserialize,
  _VpeStatus__get_serialized_size,
  _VpeStatus__max_serialized_size
};

static rosidl_message_type_support_t _VpeStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VpeStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vectornav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vectornav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::msg::VpeStatus>()
{
  return &vectornav_msgs::msg::typesupport_fastrtps_cpp::_VpeStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, msg, VpeStatus)() {
  return &vectornav_msgs::msg::typesupport_fastrtps_cpp::_VpeStatus__handle;
}

#ifdef __cplusplus
}
#endif
