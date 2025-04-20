// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/powertrain_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autonoma_msgs/msg/detail/powertrain_data__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace autonoma_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
cdr_serialize(
  const autonoma_msgs::msg::PowertrainData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: map_sensor
  cdr << ros_message.map_sensor;
  // Member: lambda_sensor
  cdr << ros_message.lambda_sensor;
  // Member: fuel_level
  cdr << ros_message.fuel_level;
  // Member: fuel_pressure
  cdr << ros_message.fuel_pressure;
  // Member: engine_oil_pressure
  cdr << ros_message.engine_oil_pressure;
  // Member: engine_oil_temperature
  cdr << ros_message.engine_oil_temperature;
  // Member: engine_coolant_temperature
  cdr << ros_message.engine_coolant_temperature;
  // Member: engine_coolant_pressure
  cdr << ros_message.engine_coolant_pressure;
  // Member: engine_rpm
  cdr << ros_message.engine_rpm;
  // Member: engine_on_status
  cdr << (ros_message.engine_on_status ? true : false);
  // Member: engine_run_switch_status
  cdr << (ros_message.engine_run_switch_status ? true : false);
  // Member: throttle_position
  cdr << ros_message.throttle_position;
  // Member: current_gear
  cdr << ros_message.current_gear;
  // Member: gear_shift_status
  cdr << ros_message.gear_shift_status;
  // Member: transmission_oil_pressure
  cdr << ros_message.transmission_oil_pressure;
  // Member: transmission_accumulator_pressure
  cdr << ros_message.transmission_accumulator_pressure;
  // Member: transmission_oil_temperature
  cdr << ros_message.transmission_oil_temperature;
  // Member: vehicle_speed_kmph
  cdr << ros_message.vehicle_speed_kmph;
  // Member: torque_wheels_nm
  cdr << ros_message.torque_wheels_nm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autonoma_msgs::msg::PowertrainData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: map_sensor
  cdr >> ros_message.map_sensor;

  // Member: lambda_sensor
  cdr >> ros_message.lambda_sensor;

  // Member: fuel_level
  cdr >> ros_message.fuel_level;

  // Member: fuel_pressure
  cdr >> ros_message.fuel_pressure;

  // Member: engine_oil_pressure
  cdr >> ros_message.engine_oil_pressure;

  // Member: engine_oil_temperature
  cdr >> ros_message.engine_oil_temperature;

  // Member: engine_coolant_temperature
  cdr >> ros_message.engine_coolant_temperature;

  // Member: engine_coolant_pressure
  cdr >> ros_message.engine_coolant_pressure;

  // Member: engine_rpm
  cdr >> ros_message.engine_rpm;

  // Member: engine_on_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_on_status = tmp ? true : false;
  }

  // Member: engine_run_switch_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_run_switch_status = tmp ? true : false;
  }

  // Member: throttle_position
  cdr >> ros_message.throttle_position;

  // Member: current_gear
  cdr >> ros_message.current_gear;

  // Member: gear_shift_status
  cdr >> ros_message.gear_shift_status;

  // Member: transmission_oil_pressure
  cdr >> ros_message.transmission_oil_pressure;

  // Member: transmission_accumulator_pressure
  cdr >> ros_message.transmission_accumulator_pressure;

  // Member: transmission_oil_temperature
  cdr >> ros_message.transmission_oil_temperature;

  // Member: vehicle_speed_kmph
  cdr >> ros_message.vehicle_speed_kmph;

  // Member: torque_wheels_nm
  cdr >> ros_message.torque_wheels_nm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
get_serialized_size(
  const autonoma_msgs::msg::PowertrainData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: map_sensor
  {
    size_t item_size = sizeof(ros_message.map_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_sensor
  {
    size_t item_size = sizeof(ros_message.lambda_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_level
  {
    size_t item_size = sizeof(ros_message.fuel_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure
  {
    size_t item_size = sizeof(ros_message.fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message.engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message.engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_coolant_temperature
  {
    size_t item_size = sizeof(ros_message.engine_coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_coolant_pressure
  {
    size_t item_size = sizeof(ros_message.engine_coolant_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_rpm
  {
    size_t item_size = sizeof(ros_message.engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_on_status
  {
    size_t item_size = sizeof(ros_message.engine_on_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_run_switch_status
  {
    size_t item_size = sizeof(ros_message.engine_run_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_position
  {
    size_t item_size = sizeof(ros_message.throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_gear
  {
    size_t item_size = sizeof(ros_message.current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_shift_status
  {
    size_t item_size = sizeof(ros_message.gear_shift_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_oil_pressure
  {
    size_t item_size = sizeof(ros_message.transmission_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_accumulator_pressure
  {
    size_t item_size = sizeof(ros_message.transmission_accumulator_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_oil_temperature
  {
    size_t item_size = sizeof(ros_message.transmission_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_kmph
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_kmph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_wheels_nm
  {
    size_t item_size = sizeof(ros_message.torque_wheels_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
max_serialized_size_PowertrainData(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: map_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lambda_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_coolant_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_on_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_run_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_shift_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmission_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transmission_accumulator_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transmission_oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed_kmph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque_wheels_nm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autonoma_msgs::msg::PowertrainData;
    is_plain =
      (
      offsetof(DataType, torque_wheels_nm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PowertrainData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autonoma_msgs::msg::PowertrainData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PowertrainData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autonoma_msgs::msg::PowertrainData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PowertrainData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autonoma_msgs::msg::PowertrainData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PowertrainData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PowertrainData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PowertrainData__callbacks = {
  "autonoma_msgs::msg",
  "PowertrainData",
  _PowertrainData__cdr_serialize,
  _PowertrainData__cdr_deserialize,
  _PowertrainData__get_serialized_size,
  _PowertrainData__max_serialized_size
};

static rosidl_message_type_support_t _PowertrainData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PowertrainData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autonoma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autonoma_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autonoma_msgs::msg::PowertrainData>()
{
  return &autonoma_msgs::msg::typesupport_fastrtps_cpp::_PowertrainData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autonoma_msgs, msg, PowertrainData)() {
  return &autonoma_msgs::msg::typesupport_fastrtps_cpp::_PowertrainData__handle;
}

#ifdef __cplusplus
}
#endif
