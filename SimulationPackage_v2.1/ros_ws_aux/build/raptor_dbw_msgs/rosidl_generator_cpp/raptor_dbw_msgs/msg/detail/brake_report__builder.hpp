// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/brake_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeReport_control_type
{
public:
  explicit Init_BrakeReport_control_type(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::BrakeReport control_type(::raptor_dbw_msgs::msg::BrakeReport::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_parking_brake
{
public:
  explicit Init_BrakeReport_parking_brake(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_control_type parking_brake(::raptor_dbw_msgs::msg::BrakeReport::_parking_brake_type arg)
  {
    msg_.parking_brake = std::move(arg);
    return Init_BrakeReport_control_type(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_intervention_ready
{
public:
  explicit Init_BrakeReport_intervention_ready(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_parking_brake intervention_ready(::raptor_dbw_msgs::msg::BrakeReport::_intervention_ready_type arg)
  {
    msg_.intervention_ready = std::move(arg);
    return Init_BrakeReport_parking_brake(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_intervention_active
{
public:
  explicit Init_BrakeReport_intervention_active(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_intervention_ready intervention_active(::raptor_dbw_msgs::msg::BrakeReport::_intervention_active_type arg)
  {
    msg_.intervention_active = std::move(arg);
    return Init_BrakeReport_intervention_ready(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_brake_torque_actual
{
public:
  explicit Init_BrakeReport_brake_torque_actual(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_intervention_active brake_torque_actual(::raptor_dbw_msgs::msg::BrakeReport::_brake_torque_actual_type arg)
  {
    msg_.brake_torque_actual = std::move(arg);
    return Init_BrakeReport_intervention_active(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_rolling_counter
{
public:
  explicit Init_BrakeReport_rolling_counter(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_brake_torque_actual rolling_counter(::raptor_dbw_msgs::msg::BrakeReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_BrakeReport_brake_torque_actual(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_ch2
{
public:
  explicit Init_BrakeReport_fault_ch2(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_rolling_counter fault_ch2(::raptor_dbw_msgs::msg::BrakeReport::_fault_ch2_type arg)
  {
    msg_.fault_ch2 = std::move(arg);
    return Init_BrakeReport_rolling_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_ch1
{
public:
  explicit Init_BrakeReport_fault_ch1(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_ch2 fault_ch1(::raptor_dbw_msgs::msg::BrakeReport::_fault_ch1_type arg)
  {
    msg_.fault_ch1 = std::move(arg);
    return Init_BrakeReport_fault_ch2(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_fault_brake_system
{
public:
  explicit Init_BrakeReport_fault_brake_system(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_ch1 fault_brake_system(::raptor_dbw_msgs::msg::BrakeReport::_fault_brake_system_type arg)
  {
    msg_.fault_brake_system = std::move(arg);
    return Init_BrakeReport_fault_ch1(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_driver_activity
{
public:
  explicit Init_BrakeReport_driver_activity(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_fault_brake_system driver_activity(::raptor_dbw_msgs::msg::BrakeReport::_driver_activity_type arg)
  {
    msg_.driver_activity = std::move(arg);
    return Init_BrakeReport_fault_brake_system(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_enabled
{
public:
  explicit Init_BrakeReport_enabled(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_driver_activity enabled(::raptor_dbw_msgs::msg::BrakeReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_BrakeReport_driver_activity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_pedal_output
{
public:
  explicit Init_BrakeReport_pedal_output(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_enabled pedal_output(::raptor_dbw_msgs::msg::BrakeReport::_pedal_output_type arg)
  {
    msg_.pedal_output = std::move(arg);
    return Init_BrakeReport_enabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_pedal_position
{
public:
  explicit Init_BrakeReport_pedal_position(::raptor_dbw_msgs::msg::BrakeReport & msg)
  : msg_(msg)
  {}
  Init_BrakeReport_pedal_output pedal_position(::raptor_dbw_msgs::msg::BrakeReport::_pedal_position_type arg)
  {
    msg_.pedal_position = std::move(arg);
    return Init_BrakeReport_pedal_output(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

class Init_BrakeReport_header
{
public:
  Init_BrakeReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeReport_pedal_position header(::raptor_dbw_msgs::msg::BrakeReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeReport_pedal_position(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::BrakeReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::BrakeReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_BrakeReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__BUILDER_HPP_
