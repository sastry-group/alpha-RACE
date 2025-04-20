// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autonoma_msgs:msg/RaceControl.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__TRAITS_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autonoma_msgs/msg/detail/race_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autonoma_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RaceControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: base_to_car_heartbeat
  {
    out << "base_to_car_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.base_to_car_heartbeat, out);
    out << ", ";
  }

  // member: track_flag
  {
    out << "track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag, out);
    out << ", ";
  }

  // member: veh_flag
  {
    out << "veh_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag, out);
    out << ", ";
  }

  // member: veh_rank
  {
    out << "veh_rank: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_rank, out);
    out << ", ";
  }

  // member: sys_state
  {
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << ", ";
  }

  // member: lap_count
  {
    out << "lap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_count, out);
    out << ", ";
  }

  // member: lap_distance
  {
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
    out << ", ";
  }

  // member: round_target_speed
  {
    out << "round_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.round_target_speed, out);
    out << ", ";
  }

  // member: laps
  {
    out << "laps: ";
    rosidl_generator_traits::value_to_yaml(msg.laps, out);
    out << ", ";
  }

  // member: lap_time
  {
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << ", ";
  }

  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RaceControl & msg,
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

  // member: base_to_car_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_to_car_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.base_to_car_heartbeat, out);
    out << "\n";
  }

  // member: track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.track_flag, out);
    out << "\n";
  }

  // member: veh_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_flag, out);
    out << "\n";
  }

  // member: veh_rank
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_rank: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_rank, out);
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

  // member: lap_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_count, out);
    out << "\n";
  }

  // member: lap_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
    out << "\n";
  }

  // member: round_target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "round_target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.round_target_speed, out);
    out << "\n";
  }

  // member: laps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laps: ";
    rosidl_generator_traits::value_to_yaml(msg.laps, out);
    out << "\n";
  }

  // member: lap_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << "\n";
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RaceControl & msg, bool use_flow_style = false)
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
  const autonoma_msgs::msg::RaceControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  autonoma_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autonoma_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autonoma_msgs::msg::RaceControl & msg)
{
  return autonoma_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autonoma_msgs::msg::RaceControl>()
{
  return "autonoma_msgs::msg::RaceControl";
}

template<>
inline const char * name<autonoma_msgs::msg::RaceControl>()
{
  return "autonoma_msgs/msg/RaceControl";
}

template<>
struct has_fixed_size<autonoma_msgs::msg::RaceControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autonoma_msgs::msg::RaceControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autonoma_msgs::msg::RaceControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__TRAITS_HPP_
