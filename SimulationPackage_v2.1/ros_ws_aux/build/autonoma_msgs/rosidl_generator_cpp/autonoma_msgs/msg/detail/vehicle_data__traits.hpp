// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fl_tire_temperature
  {
    out << "fl_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_temperature, out);
    out << ", ";
  }

  // member: fl_damper_linear_potentiometer
  {
    out << "fl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: fl_tire_pressure
  {
    out << "fl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure, out);
    out << ", ";
  }

  // member: fl_tire_pressure_gauge
  {
    out << "fl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: fl_wheel_load
  {
    out << "fl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_load, out);
    out << ", ";
  }

  // member: fr_tire_temperature
  {
    out << "fr_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_temperature, out);
    out << ", ";
  }

  // member: fr_damper_linear_potentiometer
  {
    out << "fr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: fr_tire_pressure
  {
    out << "fr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure, out);
    out << ", ";
  }

  // member: fr_tire_pressure_gauge
  {
    out << "fr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: fr_wheel_load
  {
    out << "fr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_load, out);
    out << ", ";
  }

  // member: rl_tire_temperature
  {
    out << "rl_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_temperature, out);
    out << ", ";
  }

  // member: rl_damper_linear_potentiometer
  {
    out << "rl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: rl_tire_pressure
  {
    out << "rl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure, out);
    out << ", ";
  }

  // member: rl_tire_pressure_gauge
  {
    out << "rl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: rl_wheel_load
  {
    out << "rl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_load, out);
    out << ", ";
  }

  // member: rr_tire_temperature
  {
    out << "rr_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_temperature, out);
    out << ", ";
  }

  // member: rr_damper_linear_potentiometer
  {
    out << "rr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: rr_tire_pressure
  {
    out << "rr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure, out);
    out << ", ";
  }

  // member: rr_tire_pressure_gauge
  {
    out << "rr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: rr_wheel_load
  {
    out << "rr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_load, out);
    out << ", ";
  }

  // member: fl_brake_temp
  {
    out << "fl_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_brake_temp, out);
    out << ", ";
  }

  // member: fr_brake_temp
  {
    out << "fr_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_brake_temp, out);
    out << ", ";
  }

  // member: rl_brake_temp
  {
    out << "rl_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_brake_temp, out);
    out << ", ";
  }

  // member: rr_brake_temp
  {
    out << "rr_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_brake_temp, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: safety_switch_state
  {
    out << "safety_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_state, out);
    out << ", ";
  }

  // member: mode_switch_state
  {
    out << "mode_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_switch_state, out);
    out << ", ";
  }

  // member: sys_state
  {
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << ", ";
  }

  // member: accel_pedal_input
  {
    out << "accel_pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_pedal_input, out);
    out << ", ";
  }

  // member: accel_pedal_output
  {
    out << "accel_pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_pedal_output, out);
    out << ", ";
  }

  // member: front_brake_pressure
  {
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << ", ";
  }

  // member: rear_brake_pressure
  {
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
    out << ", ";
  }

  // member: steering_wheel_angle
  {
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << ", ";
  }

  // member: steering_wheel_angle_cmd
  {
    out << "steering_wheel_angle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle_cmd, out);
    out << ", ";
  }

  // member: steering_wheel_torque
  {
    out << "steering_wheel_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_torque, out);
    out << ", ";
  }

  // member: ws_front_left
  {
    out << "ws_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_front_left, out);
    out << ", ";
  }

  // member: ws_front_right
  {
    out << "ws_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_front_right, out);
    out << ", ";
  }

  // member: ws_rear_left
  {
    out << "ws_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_rear_left, out);
    out << ", ";
  }

  // member: ws_rear_right
  {
    out << "ws_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_rear_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_temperature, out);
    out << "\n";
  }

  // member: fl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure, out);
    out << "\n";
  }

  // member: fl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_load, out);
    out << "\n";
  }

  // member: fr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_temperature, out);
    out << "\n";
  }

  // member: fr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure, out);
    out << "\n";
  }

  // member: fr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_load, out);
    out << "\n";
  }

  // member: rl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_temperature, out);
    out << "\n";
  }

  // member: rl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure, out);
    out << "\n";
  }

  // member: rl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_load, out);
    out << "\n";
  }

  // member: rr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_temperature, out);
    out << "\n";
  }

  // member: rr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure, out);
    out << "\n";
  }

  // member: rr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_load, out);
    out << "\n";
  }

  // member: fl_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_brake_temp, out);
    out << "\n";
  }

  // member: fr_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_brake_temp, out);
    out << "\n";
  }

  // member: rl_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_brake_temp, out);
    out << "\n";
  }

  // member: rr_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_brake_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_brake_temp, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: safety_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_switch_state, out);
    out << "\n";
  }

  // member: mode_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_switch_state, out);
    out << "\n";
  }

  // member: sys_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << "\n";
  }

  // member: accel_pedal_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_pedal_input: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_pedal_input, out);
    out << "\n";
  }

  // member: accel_pedal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_pedal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_pedal_output, out);
    out << "\n";
  }

  // member: front_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake_pressure, out);
    out << "\n";
  }

  // member: rear_brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_brake_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brake_pressure, out);
    out << "\n";
  }

  // member: steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << "\n";
  }

  // member: steering_wheel_angle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle_cmd, out);
    out << "\n";
  }

  // member: steering_wheel_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_torque, out);
    out << "\n";
  }

  // member: ws_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ws_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_front_left, out);
    out << "\n";
  }

  // member: ws_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ws_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_front_right, out);
    out << "\n";
  }

  // member: ws_rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ws_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_rear_left, out);
    out << "\n";
  }

  // member: ws_rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ws_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ws_rear_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autonoma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autonoma_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autonoma_msgs::msg::VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::VehicleData & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::VehicleData>()
{
  return "autonoma_msgs::msg::VehicleData";
}

template<>
inline const char * name<autonoma_msgs::msg::VehicleData>()
{
  return "autonoma_msgs/msg/VehicleData";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::VehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
