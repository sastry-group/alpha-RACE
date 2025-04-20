// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/diagnostic_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sd_system_warning
  {
    out << "sd_system_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_system_warning, out);
    out << ", ";
  }

  // member: sd_system_failure
  {
    out << "sd_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_system_failure, out);
    out << ", ";
  }

  // member: sd_brake_warning1
  {
    out << "sd_brake_warning1: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning1, out);
    out << ", ";
  }

  // member: sd_brake_warning2
  {
    out << "sd_brake_warning2: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning2, out);
    out << ", ";
  }

  // member: sd_brake_warning3
  {
    out << "sd_brake_warning3: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning3, out);
    out << ", ";
  }

  // member: sd_steer_warning1
  {
    out << "sd_steer_warning1: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning1, out);
    out << ", ";
  }

  // member: sd_steer_warning2
  {
    out << "sd_steer_warning2: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning2, out);
    out << ", ";
  }

  // member: sd_steer_warning3
  {
    out << "sd_steer_warning3: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning3, out);
    out << ", ";
  }

  // member: motec_warning
  {
    out << "motec_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.motec_warning, out);
    out << ", ";
  }

  // member: front_brk_failure
  {
    out << "front_brk_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brk_failure, out);
    out << ", ";
  }

  // member: rear_brk_failure
  {
    out << "rear_brk_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brk_failure, out);
    out << ", ";
  }

  // member: low_eng_speed
  {
    out << "low_eng_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.low_eng_speed, out);
    out << ", ";
  }

  // member: sd_comms_loss
  {
    out << "sd_comms_loss: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_comms_loss, out);
    out << ", ";
  }

  // member: motec_comms_loss
  {
    out << "motec_comms_loss: ";
    rosidl_generator_traits::value_to_yaml(msg.motec_comms_loss, out);
    out << ", ";
  }

  // member: sd_ebrake
  {
    out << "sd_ebrake: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_ebrake, out);
    out << ", ";
  }

  // member: adlink_hb_lost
  {
    out << "adlink_hb_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.adlink_hb_lost, out);
    out << ", ";
  }

  // member: rc_lost
  {
    out << "rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticReport & msg,
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

  // member: sd_system_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_system_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_system_warning, out);
    out << "\n";
  }

  // member: sd_system_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_system_failure, out);
    out << "\n";
  }

  // member: sd_brake_warning1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning1: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning1, out);
    out << "\n";
  }

  // member: sd_brake_warning2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning2: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning2, out);
    out << "\n";
  }

  // member: sd_brake_warning3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning3: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_brake_warning3, out);
    out << "\n";
  }

  // member: sd_steer_warning1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning1: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning1, out);
    out << "\n";
  }

  // member: sd_steer_warning2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning2: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning2, out);
    out << "\n";
  }

  // member: sd_steer_warning3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning3: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_steer_warning3, out);
    out << "\n";
  }

  // member: motec_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motec_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.motec_warning, out);
    out << "\n";
  }

  // member: front_brk_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_brk_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brk_failure, out);
    out << "\n";
  }

  // member: rear_brk_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_brk_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_brk_failure, out);
    out << "\n";
  }

  // member: low_eng_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_eng_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.low_eng_speed, out);
    out << "\n";
  }

  // member: sd_comms_loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_comms_loss: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_comms_loss, out);
    out << "\n";
  }

  // member: motec_comms_loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motec_comms_loss: ";
    rosidl_generator_traits::value_to_yaml(msg.motec_comms_loss, out);
    out << "\n";
  }

  // member: sd_ebrake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_ebrake: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_ebrake, out);
    out << "\n";
  }

  // member: adlink_hb_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adlink_hb_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.adlink_hb_lost, out);
    out << "\n";
  }

  // member: rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticReport & msg, bool use_flow_style = false)
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

}  // namespace raptor_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use raptor_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raptor_dbw_msgs::msg::DiagnosticReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::DiagnosticReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::DiagnosticReport>()
{
  return "raptor_dbw_msgs::msg::DiagnosticReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::DiagnosticReport>()
{
  return "raptor_dbw_msgs/msg/DiagnosticReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::DiagnosticReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::DiagnosticReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::DiagnosticReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_
