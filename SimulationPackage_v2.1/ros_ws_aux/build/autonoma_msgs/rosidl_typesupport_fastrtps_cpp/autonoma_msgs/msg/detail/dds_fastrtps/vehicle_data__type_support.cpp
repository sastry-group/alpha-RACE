// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/vehicle_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autonoma_msgs/msg/detail/vehicle_data__struct.hpp"

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
  const autonoma_msgs::msg::VehicleData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: fl_tire_temperature
  cdr << ros_message.fl_tire_temperature;
  // Member: fl_damper_linear_potentiometer
  cdr << ros_message.fl_damper_linear_potentiometer;
  // Member: fl_tire_pressure
  cdr << ros_message.fl_tire_pressure;
  // Member: fl_tire_pressure_gauge
  cdr << ros_message.fl_tire_pressure_gauge;
  // Member: fl_wheel_load
  cdr << ros_message.fl_wheel_load;
  // Member: fr_tire_temperature
  cdr << ros_message.fr_tire_temperature;
  // Member: fr_damper_linear_potentiometer
  cdr << ros_message.fr_damper_linear_potentiometer;
  // Member: fr_tire_pressure
  cdr << ros_message.fr_tire_pressure;
  // Member: fr_tire_pressure_gauge
  cdr << ros_message.fr_tire_pressure_gauge;
  // Member: fr_wheel_load
  cdr << ros_message.fr_wheel_load;
  // Member: rl_tire_temperature
  cdr << ros_message.rl_tire_temperature;
  // Member: rl_damper_linear_potentiometer
  cdr << ros_message.rl_damper_linear_potentiometer;
  // Member: rl_tire_pressure
  cdr << ros_message.rl_tire_pressure;
  // Member: rl_tire_pressure_gauge
  cdr << ros_message.rl_tire_pressure_gauge;
  // Member: rl_wheel_load
  cdr << ros_message.rl_wheel_load;
  // Member: rr_tire_temperature
  cdr << ros_message.rr_tire_temperature;
  // Member: rr_damper_linear_potentiometer
  cdr << ros_message.rr_damper_linear_potentiometer;
  // Member: rr_tire_pressure
  cdr << ros_message.rr_tire_pressure;
  // Member: rr_tire_pressure_gauge
  cdr << ros_message.rr_tire_pressure_gauge;
  // Member: rr_wheel_load
  cdr << ros_message.rr_wheel_load;
  // Member: fl_brake_temp
  cdr << ros_message.fl_brake_temp;
  // Member: fr_brake_temp
  cdr << ros_message.fr_brake_temp;
  // Member: rl_brake_temp
  cdr << ros_message.rl_brake_temp;
  // Member: rr_brake_temp
  cdr << ros_message.rr_brake_temp;
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: safety_switch_state
  cdr << ros_message.safety_switch_state;
  // Member: mode_switch_state
  cdr << (ros_message.mode_switch_state ? true : false);
  // Member: sys_state
  cdr << ros_message.sys_state;
  // Member: accel_pedal_input
  cdr << ros_message.accel_pedal_input;
  // Member: accel_pedal_output
  cdr << ros_message.accel_pedal_output;
  // Member: front_brake_pressure
  cdr << ros_message.front_brake_pressure;
  // Member: rear_brake_pressure
  cdr << ros_message.rear_brake_pressure;
  // Member: steering_wheel_angle
  cdr << ros_message.steering_wheel_angle;
  // Member: steering_wheel_angle_cmd
  cdr << ros_message.steering_wheel_angle_cmd;
  // Member: steering_wheel_torque
  cdr << ros_message.steering_wheel_torque;
  // Member: ws_front_left
  cdr << ros_message.ws_front_left;
  // Member: ws_front_right
  cdr << ros_message.ws_front_right;
  // Member: ws_rear_left
  cdr << ros_message.ws_rear_left;
  // Member: ws_rear_right
  cdr << ros_message.ws_rear_right;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autonoma_msgs::msg::VehicleData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: fl_tire_temperature
  cdr >> ros_message.fl_tire_temperature;

  // Member: fl_damper_linear_potentiometer
  cdr >> ros_message.fl_damper_linear_potentiometer;

  // Member: fl_tire_pressure
  cdr >> ros_message.fl_tire_pressure;

  // Member: fl_tire_pressure_gauge
  cdr >> ros_message.fl_tire_pressure_gauge;

  // Member: fl_wheel_load
  cdr >> ros_message.fl_wheel_load;

  // Member: fr_tire_temperature
  cdr >> ros_message.fr_tire_temperature;

  // Member: fr_damper_linear_potentiometer
  cdr >> ros_message.fr_damper_linear_potentiometer;

  // Member: fr_tire_pressure
  cdr >> ros_message.fr_tire_pressure;

  // Member: fr_tire_pressure_gauge
  cdr >> ros_message.fr_tire_pressure_gauge;

  // Member: fr_wheel_load
  cdr >> ros_message.fr_wheel_load;

  // Member: rl_tire_temperature
  cdr >> ros_message.rl_tire_temperature;

  // Member: rl_damper_linear_potentiometer
  cdr >> ros_message.rl_damper_linear_potentiometer;

  // Member: rl_tire_pressure
  cdr >> ros_message.rl_tire_pressure;

  // Member: rl_tire_pressure_gauge
  cdr >> ros_message.rl_tire_pressure_gauge;

  // Member: rl_wheel_load
  cdr >> ros_message.rl_wheel_load;

  // Member: rr_tire_temperature
  cdr >> ros_message.rr_tire_temperature;

  // Member: rr_damper_linear_potentiometer
  cdr >> ros_message.rr_damper_linear_potentiometer;

  // Member: rr_tire_pressure
  cdr >> ros_message.rr_tire_pressure;

  // Member: rr_tire_pressure_gauge
  cdr >> ros_message.rr_tire_pressure_gauge;

  // Member: rr_wheel_load
  cdr >> ros_message.rr_wheel_load;

  // Member: fl_brake_temp
  cdr >> ros_message.fl_brake_temp;

  // Member: fr_brake_temp
  cdr >> ros_message.fr_brake_temp;

  // Member: rl_brake_temp
  cdr >> ros_message.rl_brake_temp;

  // Member: rr_brake_temp
  cdr >> ros_message.rr_brake_temp;

  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: safety_switch_state
  cdr >> ros_message.safety_switch_state;

  // Member: mode_switch_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_switch_state = tmp ? true : false;
  }

  // Member: sys_state
  cdr >> ros_message.sys_state;

  // Member: accel_pedal_input
  cdr >> ros_message.accel_pedal_input;

  // Member: accel_pedal_output
  cdr >> ros_message.accel_pedal_output;

  // Member: front_brake_pressure
  cdr >> ros_message.front_brake_pressure;

  // Member: rear_brake_pressure
  cdr >> ros_message.rear_brake_pressure;

  // Member: steering_wheel_angle
  cdr >> ros_message.steering_wheel_angle;

  // Member: steering_wheel_angle_cmd
  cdr >> ros_message.steering_wheel_angle_cmd;

  // Member: steering_wheel_torque
  cdr >> ros_message.steering_wheel_torque;

  // Member: ws_front_left
  cdr >> ros_message.ws_front_left;

  // Member: ws_front_right
  cdr >> ros_message.ws_front_right;

  // Member: ws_rear_left
  cdr >> ros_message.ws_rear_left;

  // Member: ws_rear_right
  cdr >> ros_message.ws_rear_right;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
get_serialized_size(
  const autonoma_msgs::msg::VehicleData & ros_message,
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
  // Member: fl_tire_temperature
  {
    size_t item_size = sizeof(ros_message.fl_tire_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.fl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_tire_pressure
  {
    size_t item_size = sizeof(ros_message.fl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.fl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_wheel_load
  {
    size_t item_size = sizeof(ros_message.fl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_temperature
  {
    size_t item_size = sizeof(ros_message.fr_tire_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.fr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_pressure
  {
    size_t item_size = sizeof(ros_message.fr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.fr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_wheel_load
  {
    size_t item_size = sizeof(ros_message.fr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_temperature
  {
    size_t item_size = sizeof(ros_message.rl_tire_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.rl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_pressure
  {
    size_t item_size = sizeof(ros_message.rl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.rl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_wheel_load
  {
    size_t item_size = sizeof(ros_message.rl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_temperature
  {
    size_t item_size = sizeof(ros_message.rr_tire_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.rr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_pressure
  {
    size_t item_size = sizeof(ros_message.rr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.rr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_wheel_load
  {
    size_t item_size = sizeof(ros_message.rr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_brake_temp
  {
    size_t item_size = sizeof(ros_message.fl_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_brake_temp
  {
    size_t item_size = sizeof(ros_message.fr_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_brake_temp
  {
    size_t item_size = sizeof(ros_message.rl_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_brake_temp
  {
    size_t item_size = sizeof(ros_message.rr_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_switch_state
  {
    size_t item_size = sizeof(ros_message.safety_switch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_switch_state
  {
    size_t item_size = sizeof(ros_message.mode_switch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sys_state
  {
    size_t item_size = sizeof(ros_message.sys_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_pedal_input
  {
    size_t item_size = sizeof(ros_message.accel_pedal_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_pedal_output
  {
    size_t item_size = sizeof(ros_message.accel_pedal_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_brake_pressure
  {
    size_t item_size = sizeof(ros_message.front_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_brake_pressure
  {
    size_t item_size = sizeof(ros_message.rear_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message.steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_wheel_angle_cmd
  {
    size_t item_size = sizeof(ros_message.steering_wheel_angle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_wheel_torque
  {
    size_t item_size = sizeof(ros_message.steering_wheel_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ws_front_left
  {
    size_t item_size = sizeof(ros_message.ws_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ws_front_right
  {
    size_t item_size = sizeof(ros_message.ws_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ws_rear_left
  {
    size_t item_size = sizeof(ros_message.ws_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ws_rear_right
  {
    size_t item_size = sizeof(ros_message.ws_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autonoma_msgs
max_serialized_size_VehicleData(
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

  // Member: fl_tire_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: safety_switch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_switch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sys_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_pedal_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_pedal_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_wheel_angle_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_wheel_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ws_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ws_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ws_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ws_rear_right
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
    using DataType = autonoma_msgs::msg::VehicleData;
    is_plain =
      (
      offsetof(DataType, ws_rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autonoma_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autonoma_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autonoma_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleData__callbacks = {
  "autonoma_msgs::msg",
  "VehicleData",
  _VehicleData__cdr_serialize,
  _VehicleData__cdr_deserialize,
  _VehicleData__get_serialized_size,
  _VehicleData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleData__callbacks,
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
get_message_type_support_handle<autonoma_msgs::msg::VehicleData>()
{
  return &autonoma_msgs::msg::typesupport_fastrtps_cpp::_VehicleData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autonoma_msgs, msg, VehicleData)() {
  return &autonoma_msgs::msg::typesupport_fastrtps_cpp::_VehicleData__handle;
}

#ifdef __cplusplus
}
#endif
