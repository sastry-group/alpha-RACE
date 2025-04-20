// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/powertrain_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowertrainData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: map_sensor
  {
    out << "map_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.map_sensor, out);
    out << ", ";
  }

  // member: lambda_sensor
  {
    out << "lambda_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_sensor, out);
    out << ", ";
  }

  // member: fuel_level
  {
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << ", ";
  }

  // member: fuel_pressure
  {
    out << "fuel_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure, out);
    out << ", ";
  }

  // member: engine_oil_pressure
  {
    out << "engine_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure, out);
    out << ", ";
  }

  // member: engine_oil_temperature
  {
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << ", ";
  }

  // member: engine_coolant_temperature
  {
    out << "engine_coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_coolant_temperature, out);
    out << ", ";
  }

  // member: engine_coolant_pressure
  {
    out << "engine_coolant_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_coolant_pressure, out);
    out << ", ";
  }

  // member: engine_rpm
  {
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << ", ";
  }

  // member: engine_on_status
  {
    out << "engine_on_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_on_status, out);
    out << ", ";
  }

  // member: engine_run_switch_status
  {
    out << "engine_run_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_switch_status, out);
    out << ", ";
  }

  // member: throttle_position
  {
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << ", ";
  }

  // member: current_gear
  {
    out << "current_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.current_gear, out);
    out << ", ";
  }

  // member: gear_shift_status
  {
    out << "gear_shift_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift_status, out);
    out << ", ";
  }

  // member: transmission_oil_pressure
  {
    out << "transmission_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_oil_pressure, out);
    out << ", ";
  }

  // member: transmission_accumulator_pressure
  {
    out << "transmission_accumulator_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_accumulator_pressure, out);
    out << ", ";
  }

  // member: transmission_oil_temperature
  {
    out << "transmission_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_oil_temperature, out);
    out << ", ";
  }

  // member: vehicle_speed_kmph
  {
    out << "vehicle_speed_kmph: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_kmph, out);
    out << ", ";
  }

  // member: torque_wheels_nm
  {
    out << "torque_wheels_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_wheels_nm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowertrainData & msg,
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

  // member: map_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.map_sensor, out);
    out << "\n";
  }

  // member: lambda_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.lambda_sensor, out);
    out << "\n";
  }

  // member: fuel_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_level, out);
    out << "\n";
  }

  // member: fuel_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure, out);
    out << "\n";
  }

  // member: engine_oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure, out);
    out << "\n";
  }

  // member: engine_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << "\n";
  }

  // member: engine_coolant_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_coolant_temperature, out);
    out << "\n";
  }

  // member: engine_coolant_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_coolant_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_coolant_pressure, out);
    out << "\n";
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: engine_on_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_on_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_on_status, out);
    out << "\n";
  }

  // member: engine_run_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_run_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_switch_status, out);
    out << "\n";
  }

  // member: throttle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << "\n";
  }

  // member: current_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.current_gear, out);
    out << "\n";
  }

  // member: gear_shift_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_shift_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift_status, out);
    out << "\n";
  }

  // member: transmission_oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_oil_pressure, out);
    out << "\n";
  }

  // member: transmission_accumulator_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_accumulator_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_accumulator_pressure, out);
    out << "\n";
  }

  // member: transmission_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.transmission_oil_temperature, out);
    out << "\n";
  }

  // member: vehicle_speed_kmph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_kmph: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed_kmph, out);
    out << "\n";
  }

  // member: torque_wheels_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_wheels_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_wheels_nm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowertrainData & msg, bool use_flow_style = false)
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
  const autonoma_msgs::msg::PowertrainData & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::PowertrainData & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::PowertrainData>()
{
  return "autonoma_msgs::msg::PowertrainData";
}

template<>
inline const char * name<autonoma_msgs::msg::PowertrainData>()
{
  return "autonoma_msgs/msg/PowertrainData";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::PowertrainData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::PowertrainData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::PowertrainData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__TRAITS_HPP_
