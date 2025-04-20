// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/insconfig__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"
// Member 'alignment_mode'
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__traits.hpp"
// Member 'relative_ins_output_frame'
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__traits.hpp"
// Member 'ins_receiver_status'
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__traits.hpp"
// Member 'translations'
#include "novatel_oem7_msgs/msg/detail/translation__traits.hpp"
// Member 'rotations'
#include "novatel_oem7_msgs/msg/detail/rotation__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const INSCONFIG & msg,
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

  // member: imu_type
  {
    out << "imu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_type, out);
    out << ", ";
  }

  // member: mapping
  {
    out << "mapping: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping, out);
    out << ", ";
  }

  // member: initial_alignment_velocity
  {
    out << "initial_alignment_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_alignment_velocity, out);
    out << ", ";
  }

  // member: heave_window
  {
    out << "heave_window: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_window, out);
    out << ", ";
  }

  // member: profile
  {
    out << "profile: ";
    rosidl_generator_traits::value_to_yaml(msg.profile, out);
    out << ", ";
  }

  // member: enabled_updates
  {
    if (msg.enabled_updates.size() == 0) {
      out << "enabled_updates: []";
    } else {
      out << "enabled_updates: [";
      size_t pending_items = msg.enabled_updates.size();
      for (auto item : msg.enabled_updates) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alignment_mode
  {
    out << "alignment_mode: ";
    to_flow_style_yaml(msg.alignment_mode, out);
    out << ", ";
  }

  // member: relative_ins_output_frame
  {
    out << "relative_ins_output_frame: ";
    to_flow_style_yaml(msg.relative_ins_output_frame, out);
    out << ", ";
  }

  // member: relative_ins_output_direction
  {
    out << "relative_ins_output_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_ins_output_direction, out);
    out << ", ";
  }

  // member: ins_receiver_status
  {
    out << "ins_receiver_status: ";
    to_flow_style_yaml(msg.ins_receiver_status, out);
    out << ", ";
  }

  // member: ins_seed_enabled
  {
    out << "ins_seed_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_seed_enabled, out);
    out << ", ";
  }

  // member: ins_seed_validation
  {
    out << "ins_seed_validation: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_seed_validation, out);
    out << ", ";
  }

  // member: reserved_1
  {
    out << "reserved_1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_1, out);
    out << ", ";
  }

  // member: reserved_2
  {
    out << "reserved_2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_2, out);
    out << ", ";
  }

  // member: reserved_3
  {
    out << "reserved_3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_3, out);
    out << ", ";
  }

  // member: reserved_4
  {
    out << "reserved_4: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_4, out);
    out << ", ";
  }

  // member: reserved_5
  {
    out << "reserved_5: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_5, out);
    out << ", ";
  }

  // member: reserved_6
  {
    out << "reserved_6: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_6, out);
    out << ", ";
  }

  // member: reserved_7
  {
    out << "reserved_7: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_7, out);
    out << ", ";
  }

  // member: number_of_translations
  {
    out << "number_of_translations: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_translations, out);
    out << ", ";
  }

  // member: translations
  {
    if (msg.translations.size() == 0) {
      out << "translations: []";
    } else {
      out << "translations: [";
      size_t pending_items = msg.translations.size();
      for (auto item : msg.translations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: number_of_rotations
  {
    out << "number_of_rotations: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_rotations, out);
    out << ", ";
  }

  // member: rotations
  {
    if (msg.rotations.size() == 0) {
      out << "rotations: []";
    } else {
      out << "rotations: [";
      size_t pending_items = msg.rotations.size();
      for (auto item : msg.rotations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INSCONFIG & msg,
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

  // member: imu_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_type: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_type, out);
    out << "\n";
  }

  // member: mapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapping: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping, out);
    out << "\n";
  }

  // member: initial_alignment_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_alignment_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_alignment_velocity, out);
    out << "\n";
  }

  // member: heave_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heave_window: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_window, out);
    out << "\n";
  }

  // member: profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile: ";
    rosidl_generator_traits::value_to_yaml(msg.profile, out);
    out << "\n";
  }

  // member: enabled_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled_updates.size() == 0) {
      out << "enabled_updates: []\n";
    } else {
      out << "enabled_updates:\n";
      for (auto item : msg.enabled_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: alignment_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment_mode:\n";
    to_block_style_yaml(msg.alignment_mode, out, indentation + 2);
  }

  // member: relative_ins_output_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_ins_output_frame:\n";
    to_block_style_yaml(msg.relative_ins_output_frame, out, indentation + 2);
  }

  // member: relative_ins_output_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_ins_output_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_ins_output_direction, out);
    out << "\n";
  }

  // member: ins_receiver_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_receiver_status:\n";
    to_block_style_yaml(msg.ins_receiver_status, out, indentation + 2);
  }

  // member: ins_seed_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_seed_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_seed_enabled, out);
    out << "\n";
  }

  // member: ins_seed_validation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_seed_validation: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_seed_validation, out);
    out << "\n";
  }

  // member: reserved_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_1, out);
    out << "\n";
  }

  // member: reserved_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_2, out);
    out << "\n";
  }

  // member: reserved_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_3, out);
    out << "\n";
  }

  // member: reserved_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_4: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_4, out);
    out << "\n";
  }

  // member: reserved_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_5: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_5, out);
    out << "\n";
  }

  // member: reserved_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_6: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_6, out);
    out << "\n";
  }

  // member: reserved_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_7: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_7, out);
    out << "\n";
  }

  // member: number_of_translations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_translations: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_translations, out);
    out << "\n";
  }

  // member: translations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.translations.size() == 0) {
      out << "translations: []\n";
    } else {
      out << "translations:\n";
      for (auto item : msg.translations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: number_of_rotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_rotations: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_rotations, out);
    out << "\n";
  }

  // member: rotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotations.size() == 0) {
      out << "rotations: []\n";
    } else {
      out << "rotations:\n";
      for (auto item : msg.rotations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INSCONFIG & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::INSCONFIG & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::INSCONFIG & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::INSCONFIG>()
{
  return "novatel_oem7_msgs::msg::INSCONFIG";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::INSCONFIG>()
{
  return "novatel_oem7_msgs/msg/INSCONFIG";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::INSCONFIG>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::INSCONFIG>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<novatel_oem7_msgs::msg::INSCONFIG>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__TRAITS_HPP_
