// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/BESTUTM.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/bestutm__struct.hpp"
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
// Member 'ext_sol_stat'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BESTUTM & msg,
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

  // member: lon_zone_number
  {
    out << "lon_zone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_zone_number, out);
    out << ", ";
  }

  // member: lat_zone_letter
  {
    out << "lat_zone_letter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_zone_letter, out);
    out << ", ";
  }

  // member: northing
  {
    out << "northing: ";
    rosidl_generator_traits::value_to_yaml(msg.northing, out);
    out << ", ";
  }

  // member: easting
  {
    out << "easting: ";
    rosidl_generator_traits::value_to_yaml(msg.easting, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: datum_id
  {
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << ", ";
  }

  // member: northing_stddev
  {
    out << "northing_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.northing_stddev, out);
    out << ", ";
  }

  // member: easting_stddev
  {
    out << "easting_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.easting_stddev, out);
    out << ", ";
  }

  // member: height_stddev
  {
    out << "height_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_stddev, out);
    out << ", ";
  }

  // member: stn_id
  {
    if (msg.stn_id.size() == 0) {
      out << "stn_id: []";
    } else {
      out << "stn_id: [";
      size_t pending_items = msg.stn_id.size();
      for (auto item : msg.stn_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: sol_age
  {
    out << "sol_age: ";
    rosidl_generator_traits::value_to_yaml(msg.sol_age, out);
    out << ", ";
  }

  // member: num_svs
  {
    out << "num_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_svs, out);
    out << ", ";
  }

  // member: num_sol_svs
  {
    out << "num_sol_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_svs, out);
    out << ", ";
  }

  // member: num_sol_ggl1_svs
  {
    out << "num_sol_ggl1_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_ggl1_svs, out);
    out << ", ";
  }

  // member: num_sol_multi_svs
  {
    out << "num_sol_multi_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_multi_svs, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: ext_sol_stat
  {
    out << "ext_sol_stat: ";
    to_flow_style_yaml(msg.ext_sol_stat, out);
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
  const BESTUTM & msg,
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

  // member: lon_zone_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_zone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_zone_number, out);
    out << "\n";
  }

  // member: lat_zone_letter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_zone_letter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_zone_letter, out);
    out << "\n";
  }

  // member: northing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "northing: ";
    rosidl_generator_traits::value_to_yaml(msg.northing, out);
    out << "\n";
  }

  // member: easting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "easting: ";
    rosidl_generator_traits::value_to_yaml(msg.easting, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: datum_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << "\n";
  }

  // member: northing_stddev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "northing_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.northing_stddev, out);
    out << "\n";
  }

  // member: easting_stddev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "easting_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.easting_stddev, out);
    out << "\n";
  }

  // member: height_stddev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_stddev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_stddev, out);
    out << "\n";
  }

  // member: stn_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stn_id.size() == 0) {
      out << "stn_id: []\n";
    } else {
      out << "stn_id:\n";
      for (auto item : msg.stn_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: sol_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sol_age: ";
    rosidl_generator_traits::value_to_yaml(msg.sol_age, out);
    out << "\n";
  }

  // member: num_svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_svs, out);
    out << "\n";
  }

  // member: num_sol_svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sol_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_svs, out);
    out << "\n";
  }

  // member: num_sol_ggl1_svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sol_ggl1_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_ggl1_svs, out);
    out << "\n";
  }

  // member: num_sol_multi_svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sol_multi_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sol_multi_svs, out);
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

  // member: ext_sol_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_sol_stat:\n";
    to_block_style_yaml(msg.ext_sol_stat, out, indentation + 2);
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

inline std::string to_yaml(const BESTUTM & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::BESTUTM & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::BESTUTM & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::BESTUTM>()
{
  return "novatel_oem7_msgs::msg::BESTUTM";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::BESTUTM>()
{
  return "novatel_oem7_msgs/msg/BESTUTM";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::BESTUTM>
  : std::integral_constant<bool, has_fixed_size<novatel_oem7_msgs::msg::BestExtendedSolutionStatus>::value && has_fixed_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_fixed_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_fixed_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::BESTUTM>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::BestExtendedSolutionStatus>::value && has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<novatel_oem7_msgs::msg::PositionOrVelocityType>::value && has_bounded_size<novatel_oem7_msgs::msg::SolutionStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::BESTUTM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__TRAITS_HPP_
