// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raptor_dbw_msgs/msg/detail/fault_actions_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_FaultActionsReport_warn_driver_only
{
public:
  explicit Init_FaultActionsReport_warn_driver_only(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::FaultActionsReport warn_driver_only(::raptor_dbw_msgs::msg::FaultActionsReport::_warn_driver_only_type arg)
  {
    msg_.warn_driver_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_prevent_enter_autonomous_mode
{
public:
  explicit Init_FaultActionsReport_prevent_enter_autonomous_mode(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  Init_FaultActionsReport_warn_driver_only prevent_enter_autonomous_mode(::raptor_dbw_msgs::msg::FaultActionsReport::_prevent_enter_autonomous_mode_type arg)
  {
    msg_.prevent_enter_autonomous_mode = std::move(arg);
    return Init_FaultActionsReport_warn_driver_only(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_inverter_contactor_disabled
{
public:
  explicit Init_FaultActionsReport_inverter_contactor_disabled(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  Init_FaultActionsReport_prevent_enter_autonomous_mode inverter_contactor_disabled(::raptor_dbw_msgs::msg::FaultActionsReport::_inverter_contactor_disabled_type arg)
  {
    msg_.inverter_contactor_disabled = std::move(arg);
    return Init_FaultActionsReport_prevent_enter_autonomous_mode(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_can_gateway_disabled
{
public:
  explicit Init_FaultActionsReport_can_gateway_disabled(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  Init_FaultActionsReport_inverter_contactor_disabled can_gateway_disabled(::raptor_dbw_msgs::msg::FaultActionsReport::_can_gateway_disabled_type arg)
  {
    msg_.can_gateway_disabled = std::move(arg);
    return Init_FaultActionsReport_inverter_contactor_disabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_autonomous_disabled_apply_brakes
{
public:
  explicit Init_FaultActionsReport_autonomous_disabled_apply_brakes(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  Init_FaultActionsReport_can_gateway_disabled autonomous_disabled_apply_brakes(::raptor_dbw_msgs::msg::FaultActionsReport::_autonomous_disabled_apply_brakes_type arg)
  {
    msg_.autonomous_disabled_apply_brakes = std::move(arg);
    return Init_FaultActionsReport_can_gateway_disabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_autonomous_disabled_no_brakes
{
public:
  explicit Init_FaultActionsReport_autonomous_disabled_no_brakes(::raptor_dbw_msgs::msg::FaultActionsReport & msg)
  : msg_(msg)
  {}
  Init_FaultActionsReport_autonomous_disabled_apply_brakes autonomous_disabled_no_brakes(::raptor_dbw_msgs::msg::FaultActionsReport::_autonomous_disabled_no_brakes_type arg)
  {
    msg_.autonomous_disabled_no_brakes = std::move(arg);
    return Init_FaultActionsReport_autonomous_disabled_apply_brakes(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

class Init_FaultActionsReport_header
{
public:
  Init_FaultActionsReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultActionsReport_autonomous_disabled_no_brakes header(::raptor_dbw_msgs::msg::FaultActionsReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaultActionsReport_autonomous_disabled_no_brakes(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::FaultActionsReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_FaultActionsReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__BUILDER_HPP_
