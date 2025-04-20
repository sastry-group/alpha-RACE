// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/heading2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"
// Member 'sol_status'
#include "novatel_oem7_msgs/msg/detail/solution_status__traits.hpp"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__traits.hpp"
// Member 'sol_source'
#include "novatel_oem7_msgs/msg/detail/solution_source__traits.hpp"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HEADING2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nov_header
  {
    out << "nov_header: ";
    to_flow_style_yaml(msg.nov_header, out);
    out << ", ";
  }

  // member: sol_status
  {
    out << "sol_status: ";
    to_flow_style_yaml(msg.sol_status, out);
    out << ", ";
  }

  // member: pos_type
  {
    out << "pos_type: ";
    to_flow_style_yaml(msg.pos_type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: heading_stdev
  {
    out << "heading_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_stdev, out);
    out << ", ";
  }

  // member: pitch_stdev
  {
    out << "pitch_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_stdev, out);
    out << ", ";
  }

  // member: rover_stn_id
  {
    if (msg.rover_stn_id.size() == 0) {
      out << "rover_stn_id: []";
    } else {
      out << "rover_stn_id: [";
      size_t pending_items = msg.rover_stn_id.size();
      for (auto item : msg.rover_stn_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: master_stn_id
  {
    if (msg.master_stn_id.size() == 0) {
      out << "master_stn_id: []";
    } else {
      out << "master_stn_id: [";
      size_t pending_items = msg.master_stn_id.size();
      for (auto item : msg.master_stn_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: num_sv_tracked
  {
    out << "num_sv_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_tracked, out);
    out << ", ";
  }

  // member: num_sv_in_sol
  {
    out << "num_sv_in_sol: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_in_sol, out);
    out << ", ";
  }

  // member: num_sv_obs
  {
    out << "num_sv_obs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_obs, out);
    out << ", ";
  }

  // member: num_sv_multi
  {
    out << "num_sv_multi: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_multi, out);
    out << ", ";
  }

  // member: sol_source
  {
    out << "sol_source: ";
    to_flow_style_yaml(msg.sol_source, out);
    out << ", ";
  }

  // member: ext_sol_status
  {
    out << "ext_sol_status: ";
    to_flow_style_yaml(msg.ext_sol_status, out);
    out << ", ";
  }

  // member: galileo_beidou_sig_mask
  {
    out << "galileo_beidou_sig_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_beidou_sig_mask, out);
    out << ", ";
  }

  // member: gps_glonass_sig_mask
  {
    out << "gps_glonass_sig_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_glonass_sig_mask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HEADING2 & msg,
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

  // member: nov_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nov_header:\n";
    to_block_style_yaml(msg.nov_header, out, indentation + 2);
  }

  // member: sol_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol_status:\n";
    to_block_style_yaml(msg.sol_status, out, indentation + 2);
  }

  // member: pos_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_type:\n";
    to_block_style_yaml(msg.pos_type, out, indentation + 2);
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: heading_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_stdev, out);
    out << "\n";
  }

  // member: pitch_stdev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_stdev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_stdev, out);
    out << "\n";
  }

  // member: rover_stn_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rover_stn_id.size() == 0) {
      out << "rover_stn_id: []\n";
    } else {
      out << "rover_stn_id:\n";
      for (auto item : msg.rover_stn_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: master_stn_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.master_stn_id.size() == 0) {
      out << "master_stn_id: []\n";
    } else {
      out << "master_stn_id:\n";
      for (auto item : msg.master_stn_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_sv_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_tracked, out);
    out << "\n";
  }

  // member: num_sv_in_sol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv_in_sol: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_in_sol, out);
    out << "\n";
  }

  // member: num_sv_obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv_obs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_obs, out);
    out << "\n";
  }

  // member: num_sv_multi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv_multi: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv_multi, out);
    out << "\n";
  }

  // member: sol_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol_source:\n";
    to_block_style_yaml(msg.sol_source, out, indentation + 2);
  }

  // member: ext_sol_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_sol_status:\n";
    to_block_style_yaml(msg.ext_sol_status, out, indentation + 2);
  }

  // member: galileo_beidou_sig_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_beidou_sig_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_beidou_sig_mask, out);
    out << "\n";
  }

  // member: gps_glonass_sig_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_glonass_sig_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_glonass_sig_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HEADING2 & msg, bool use_flow_style = false)
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

}  // namespace novatel_oem7_msgs

namespace rosidl_generator_traits
{

[[deprecated("use novatel_oem7_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const novatel_oem7_msgs::msg::HEADING2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::HEADING2 & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::HEADING2>()
{
  return "novatel_oem7_msgs::msg::HEADING2";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::HEADING2>()
{
  return "novatel_oem7_msgs/msg/HEADING2";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::HEADING2>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::BestExtendedSolutionStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_fixed_size<novatel_oem7_msgs::msg::SolutionSource>::value && has_fixed_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::HEADING2>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::BestExtendedSolutionStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_bounded_size<novatel_oem7_msgs::msg::SolutionSource>::value && has_bounded_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::HEADING2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__TRAITS_HPP_
