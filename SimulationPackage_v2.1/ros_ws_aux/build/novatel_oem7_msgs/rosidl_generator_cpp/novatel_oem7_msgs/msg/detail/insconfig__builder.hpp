// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/insconfig__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_INSCONFIG_rotations
{
public:
  explicit Init_INSCONFIG_rotations(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  ::novatel_oem7_msgs::msg::INSCONFIG rotations(::novatel_oem7_msgs::msg::INSCONFIG::_rotations_type arg)
  {
    msg_.rotations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_number_of_rotations
{
public:
  explicit Init_INSCONFIG_number_of_rotations(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_rotations number_of_rotations(::novatel_oem7_msgs::msg::INSCONFIG::_number_of_rotations_type arg)
  {
    msg_.number_of_rotations = std::move(arg);
    return Init_INSCONFIG_rotations(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_translations
{
public:
  explicit Init_INSCONFIG_translations(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_number_of_rotations translations(::novatel_oem7_msgs::msg::INSCONFIG::_translations_type arg)
  {
    msg_.translations = std::move(arg);
    return Init_INSCONFIG_number_of_rotations(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_number_of_translations
{
public:
  explicit Init_INSCONFIG_number_of_translations(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_translations number_of_translations(::novatel_oem7_msgs::msg::INSCONFIG::_number_of_translations_type arg)
  {
    msg_.number_of_translations = std::move(arg);
    return Init_INSCONFIG_translations(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_7
{
public:
  explicit Init_INSCONFIG_reserved_7(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_number_of_translations reserved_7(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_7_type arg)
  {
    msg_.reserved_7 = std::move(arg);
    return Init_INSCONFIG_number_of_translations(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_6
{
public:
  explicit Init_INSCONFIG_reserved_6(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_7 reserved_6(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_6_type arg)
  {
    msg_.reserved_6 = std::move(arg);
    return Init_INSCONFIG_reserved_7(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_5
{
public:
  explicit Init_INSCONFIG_reserved_5(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_6 reserved_5(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_5_type arg)
  {
    msg_.reserved_5 = std::move(arg);
    return Init_INSCONFIG_reserved_6(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_4
{
public:
  explicit Init_INSCONFIG_reserved_4(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_5 reserved_4(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_4_type arg)
  {
    msg_.reserved_4 = std::move(arg);
    return Init_INSCONFIG_reserved_5(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_3
{
public:
  explicit Init_INSCONFIG_reserved_3(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_4 reserved_3(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_3_type arg)
  {
    msg_.reserved_3 = std::move(arg);
    return Init_INSCONFIG_reserved_4(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_2
{
public:
  explicit Init_INSCONFIG_reserved_2(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_3 reserved_2(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_2_type arg)
  {
    msg_.reserved_2 = std::move(arg);
    return Init_INSCONFIG_reserved_3(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_reserved_1
{
public:
  explicit Init_INSCONFIG_reserved_1(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_2 reserved_1(::novatel_oem7_msgs::msg::INSCONFIG::_reserved_1_type arg)
  {
    msg_.reserved_1 = std::move(arg);
    return Init_INSCONFIG_reserved_2(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_ins_seed_validation
{
public:
  explicit Init_INSCONFIG_ins_seed_validation(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_reserved_1 ins_seed_validation(::novatel_oem7_msgs::msg::INSCONFIG::_ins_seed_validation_type arg)
  {
    msg_.ins_seed_validation = std::move(arg);
    return Init_INSCONFIG_reserved_1(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_ins_seed_enabled
{
public:
  explicit Init_INSCONFIG_ins_seed_enabled(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_ins_seed_validation ins_seed_enabled(::novatel_oem7_msgs::msg::INSCONFIG::_ins_seed_enabled_type arg)
  {
    msg_.ins_seed_enabled = std::move(arg);
    return Init_INSCONFIG_ins_seed_validation(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_ins_receiver_status
{
public:
  explicit Init_INSCONFIG_ins_receiver_status(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_ins_seed_enabled ins_receiver_status(::novatel_oem7_msgs::msg::INSCONFIG::_ins_receiver_status_type arg)
  {
    msg_.ins_receiver_status = std::move(arg);
    return Init_INSCONFIG_ins_seed_enabled(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_relative_ins_output_direction
{
public:
  explicit Init_INSCONFIG_relative_ins_output_direction(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_ins_receiver_status relative_ins_output_direction(::novatel_oem7_msgs::msg::INSCONFIG::_relative_ins_output_direction_type arg)
  {
    msg_.relative_ins_output_direction = std::move(arg);
    return Init_INSCONFIG_ins_receiver_status(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_relative_ins_output_frame
{
public:
  explicit Init_INSCONFIG_relative_ins_output_frame(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_relative_ins_output_direction relative_ins_output_frame(::novatel_oem7_msgs::msg::INSCONFIG::_relative_ins_output_frame_type arg)
  {
    msg_.relative_ins_output_frame = std::move(arg);
    return Init_INSCONFIG_relative_ins_output_direction(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_alignment_mode
{
public:
  explicit Init_INSCONFIG_alignment_mode(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_relative_ins_output_frame alignment_mode(::novatel_oem7_msgs::msg::INSCONFIG::_alignment_mode_type arg)
  {
    msg_.alignment_mode = std::move(arg);
    return Init_INSCONFIG_relative_ins_output_frame(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_enabled_updates
{
public:
  explicit Init_INSCONFIG_enabled_updates(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_alignment_mode enabled_updates(::novatel_oem7_msgs::msg::INSCONFIG::_enabled_updates_type arg)
  {
    msg_.enabled_updates = std::move(arg);
    return Init_INSCONFIG_alignment_mode(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_profile
{
public:
  explicit Init_INSCONFIG_profile(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_enabled_updates profile(::novatel_oem7_msgs::msg::INSCONFIG::_profile_type arg)
  {
    msg_.profile = std::move(arg);
    return Init_INSCONFIG_enabled_updates(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_heave_window
{
public:
  explicit Init_INSCONFIG_heave_window(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_profile heave_window(::novatel_oem7_msgs::msg::INSCONFIG::_heave_window_type arg)
  {
    msg_.heave_window = std::move(arg);
    return Init_INSCONFIG_profile(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_initial_alignment_velocity
{
public:
  explicit Init_INSCONFIG_initial_alignment_velocity(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_heave_window initial_alignment_velocity(::novatel_oem7_msgs::msg::INSCONFIG::_initial_alignment_velocity_type arg)
  {
    msg_.initial_alignment_velocity = std::move(arg);
    return Init_INSCONFIG_heave_window(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_mapping
{
public:
  explicit Init_INSCONFIG_mapping(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_initial_alignment_velocity mapping(::novatel_oem7_msgs::msg::INSCONFIG::_mapping_type arg)
  {
    msg_.mapping = std::move(arg);
    return Init_INSCONFIG_initial_alignment_velocity(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_imu_type
{
public:
  explicit Init_INSCONFIG_imu_type(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_mapping imu_type(::novatel_oem7_msgs::msg::INSCONFIG::_imu_type_type arg)
  {
    msg_.imu_type = std::move(arg);
    return Init_INSCONFIG_mapping(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_nov_header
{
public:
  explicit Init_INSCONFIG_nov_header(::novatel_oem7_msgs::msg::INSCONFIG & msg)
  : msg_(msg)
  {}
  Init_INSCONFIG_imu_type nov_header(::novatel_oem7_msgs::msg::INSCONFIG::_nov_header_type arg)
  {
    msg_.nov_header = std::move(arg);
    return Init_INSCONFIG_imu_type(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

class Init_INSCONFIG_header
{
public:
  Init_INSCONFIG_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSCONFIG_nov_header header(::novatel_oem7_msgs::msg::INSCONFIG::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSCONFIG_nov_header(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::INSCONFIG msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::INSCONFIG>()
{
  return novatel_oem7_msgs::msg::builder::Init_INSCONFIG_header();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__BUILDER_HPP_
