// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__traits.hpp"

namespace novatel_oem7_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RXSTATUS & msg,
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

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: num_status_codes
  {
    out << "num_status_codes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_status_codes, out);
    out << ", ";
  }

  // member: rxstat
  {
    out << "rxstat: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat, out);
    out << ", ";
  }

  // member: rxstat_pri_mask
  {
    out << "rxstat_pri_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_pri_mask, out);
    out << ", ";
  }

  // member: rxstat_set_mask
  {
    out << "rxstat_set_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_set_mask, out);
    out << ", ";
  }

  // member: rxstat_clr_mask
  {
    out << "rxstat_clr_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_clr_mask, out);
    out << ", ";
  }

  // member: aux1_stat
  {
    out << "aux1_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat, out);
    out << ", ";
  }

  // member: aux1_stat_pri
  {
    out << "aux1_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_pri, out);
    out << ", ";
  }

  // member: aux1_stat_set
  {
    out << "aux1_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_set, out);
    out << ", ";
  }

  // member: aux1_stat_clr
  {
    out << "aux1_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_clr, out);
    out << ", ";
  }

  // member: aux2_stat
  {
    out << "aux2_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat, out);
    out << ", ";
  }

  // member: aux2_stat_pri
  {
    out << "aux2_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_pri, out);
    out << ", ";
  }

  // member: aux2_stat_set
  {
    out << "aux2_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_set, out);
    out << ", ";
  }

  // member: aux2_stat_clr
  {
    out << "aux2_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_clr, out);
    out << ", ";
  }

  // member: aux3_stat
  {
    out << "aux3_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat, out);
    out << ", ";
  }

  // member: aux3_stat_pri
  {
    out << "aux3_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_pri, out);
    out << ", ";
  }

  // member: aux3_stat_set
  {
    out << "aux3_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_set, out);
    out << ", ";
  }

  // member: aux3_stat_clr
  {
    out << "aux3_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_clr, out);
    out << ", ";
  }

  // member: aux4_stat
  {
    out << "aux4_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat, out);
    out << ", ";
  }

  // member: aux4_stat_pri
  {
    out << "aux4_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_pri, out);
    out << ", ";
  }

  // member: aux4_stat_set
  {
    out << "aux4_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_set, out);
    out << ", ";
  }

  // member: aux4_stat_clr
  {
    out << "aux4_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_clr, out);
    out << ", ";
  }

  // member: error_bits
  {
    if (msg.error_bits.size() == 0) {
      out << "error_bits: []";
    } else {
      out << "error_bits: [";
      size_t pending_items = msg.error_bits.size();
      for (auto item : msg.error_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_strs
  {
    if (msg.error_strs.size() == 0) {
      out << "error_strs: []";
    } else {
      out << "error_strs: [";
      size_t pending_items = msg.error_strs.size();
      for (auto item : msg.error_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rxstat_bits
  {
    if (msg.rxstat_bits.size() == 0) {
      out << "rxstat_bits: []";
    } else {
      out << "rxstat_bits: [";
      size_t pending_items = msg.rxstat_bits.size();
      for (auto item : msg.rxstat_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rxstat_strs
  {
    if (msg.rxstat_strs.size() == 0) {
      out << "rxstat_strs: []";
    } else {
      out << "rxstat_strs: [";
      size_t pending_items = msg.rxstat_strs.size();
      for (auto item : msg.rxstat_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux1_stat_bits
  {
    if (msg.aux1_stat_bits.size() == 0) {
      out << "aux1_stat_bits: []";
    } else {
      out << "aux1_stat_bits: [";
      size_t pending_items = msg.aux1_stat_bits.size();
      for (auto item : msg.aux1_stat_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux1_stat_strs
  {
    if (msg.aux1_stat_strs.size() == 0) {
      out << "aux1_stat_strs: []";
    } else {
      out << "aux1_stat_strs: [";
      size_t pending_items = msg.aux1_stat_strs.size();
      for (auto item : msg.aux1_stat_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux2_stat_bits
  {
    if (msg.aux2_stat_bits.size() == 0) {
      out << "aux2_stat_bits: []";
    } else {
      out << "aux2_stat_bits: [";
      size_t pending_items = msg.aux2_stat_bits.size();
      for (auto item : msg.aux2_stat_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux2_stat_strs
  {
    if (msg.aux2_stat_strs.size() == 0) {
      out << "aux2_stat_strs: []";
    } else {
      out << "aux2_stat_strs: [";
      size_t pending_items = msg.aux2_stat_strs.size();
      for (auto item : msg.aux2_stat_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux3_stat_bits
  {
    if (msg.aux3_stat_bits.size() == 0) {
      out << "aux3_stat_bits: []";
    } else {
      out << "aux3_stat_bits: [";
      size_t pending_items = msg.aux3_stat_bits.size();
      for (auto item : msg.aux3_stat_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux3_stat_strs
  {
    if (msg.aux3_stat_strs.size() == 0) {
      out << "aux3_stat_strs: []";
    } else {
      out << "aux3_stat_strs: [";
      size_t pending_items = msg.aux3_stat_strs.size();
      for (auto item : msg.aux3_stat_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux4_stat_bits
  {
    if (msg.aux4_stat_bits.size() == 0) {
      out << "aux4_stat_bits: []";
    } else {
      out << "aux4_stat_bits: [";
      size_t pending_items = msg.aux4_stat_bits.size();
      for (auto item : msg.aux4_stat_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux4_stat_strs
  {
    if (msg.aux4_stat_strs.size() == 0) {
      out << "aux4_stat_strs: []";
    } else {
      out << "aux4_stat_strs: [";
      size_t pending_items = msg.aux4_stat_strs.size();
      for (auto item : msg.aux4_stat_strs) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RXSTATUS & msg,
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

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: num_status_codes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_status_codes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_status_codes, out);
    out << "\n";
  }

  // member: rxstat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rxstat: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat, out);
    out << "\n";
  }

  // member: rxstat_pri_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rxstat_pri_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_pri_mask, out);
    out << "\n";
  }

  // member: rxstat_set_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rxstat_set_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_set_mask, out);
    out << "\n";
  }

  // member: rxstat_clr_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rxstat_clr_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.rxstat_clr_mask, out);
    out << "\n";
  }

  // member: aux1_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat, out);
    out << "\n";
  }

  // member: aux1_stat_pri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_pri, out);
    out << "\n";
  }

  // member: aux1_stat_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_set, out);
    out << "\n";
  }

  // member: aux1_stat_clr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1_stat_clr, out);
    out << "\n";
  }

  // member: aux2_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat, out);
    out << "\n";
  }

  // member: aux2_stat_pri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_pri, out);
    out << "\n";
  }

  // member: aux2_stat_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_set, out);
    out << "\n";
  }

  // member: aux2_stat_clr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2_stat_clr, out);
    out << "\n";
  }

  // member: aux3_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat, out);
    out << "\n";
  }

  // member: aux3_stat_pri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_pri, out);
    out << "\n";
  }

  // member: aux3_stat_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_set, out);
    out << "\n";
  }

  // member: aux3_stat_clr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3_stat_clr, out);
    out << "\n";
  }

  // member: aux4_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat, out);
    out << "\n";
  }

  // member: aux4_stat_pri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4_stat_pri: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_pri, out);
    out << "\n";
  }

  // member: aux4_stat_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4_stat_set: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_set, out);
    out << "\n";
  }

  // member: aux4_stat_clr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4_stat_clr: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4_stat_clr, out);
    out << "\n";
  }

  // member: error_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_bits.size() == 0) {
      out << "error_bits: []\n";
    } else {
      out << "error_bits:\n";
      for (auto item : msg.error_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_strs.size() == 0) {
      out << "error_strs: []\n";
    } else {
      out << "error_strs:\n";
      for (auto item : msg.error_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rxstat_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rxstat_bits.size() == 0) {
      out << "rxstat_bits: []\n";
    } else {
      out << "rxstat_bits:\n";
      for (auto item : msg.rxstat_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rxstat_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rxstat_strs.size() == 0) {
      out << "rxstat_strs: []\n";
    } else {
      out << "rxstat_strs:\n";
      for (auto item : msg.rxstat_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux1_stat_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux1_stat_bits.size() == 0) {
      out << "aux1_stat_bits: []\n";
    } else {
      out << "aux1_stat_bits:\n";
      for (auto item : msg.aux1_stat_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux1_stat_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux1_stat_strs.size() == 0) {
      out << "aux1_stat_strs: []\n";
    } else {
      out << "aux1_stat_strs:\n";
      for (auto item : msg.aux1_stat_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux2_stat_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux2_stat_bits.size() == 0) {
      out << "aux2_stat_bits: []\n";
    } else {
      out << "aux2_stat_bits:\n";
      for (auto item : msg.aux2_stat_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux2_stat_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux2_stat_strs.size() == 0) {
      out << "aux2_stat_strs: []\n";
    } else {
      out << "aux2_stat_strs:\n";
      for (auto item : msg.aux2_stat_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux3_stat_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux3_stat_bits.size() == 0) {
      out << "aux3_stat_bits: []\n";
    } else {
      out << "aux3_stat_bits:\n";
      for (auto item : msg.aux3_stat_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux3_stat_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux3_stat_strs.size() == 0) {
      out << "aux3_stat_strs: []\n";
    } else {
      out << "aux3_stat_strs:\n";
      for (auto item : msg.aux3_stat_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux4_stat_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux4_stat_bits.size() == 0) {
      out << "aux4_stat_bits: []\n";
    } else {
      out << "aux4_stat_bits:\n";
      for (auto item : msg.aux4_stat_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux4_stat_strs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux4_stat_strs.size() == 0) {
      out << "aux4_stat_strs: []\n";
    } else {
      out << "aux4_stat_strs:\n";
      for (auto item : msg.aux4_stat_strs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RXSTATUS & msg, bool use_flow_style = false)
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
  const novatel_oem7_msgs::msg::RXSTATUS & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::msg::RXSTATUS & msg)
{
  return novatel_oem7_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::msg::RXSTATUS>()
{
  return "novatel_oem7_msgs::msg::RXSTATUS";
}

template<>
inline const char * name<novatel_oem7_msgs::msg::RXSTATUS>()
{
  return "novatel_oem7_msgs/msg/RXSTATUS";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::msg::RXSTATUS>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::msg::RXSTATUS>
  : std::integral_constant<bool, has_bounded_size<novatel_oem7_msgs::msg::Oem7Header>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<novatel_oem7_msgs::msg::RXSTATUS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__TRAITS_HPP_
