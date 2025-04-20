// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__BUILDER_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "npc_controller_msgs/msg/detail/tire_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace npc_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_TireReport_rr_wheel_load
{
public:
  explicit Init_TireReport_rr_wheel_load(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  ::npc_controller_msgs::msg::TireReport rr_wheel_load(::npc_controller_msgs::msg::TireReport::_rr_wheel_load_type arg)
  {
    msg_.rr_wheel_load = std::move(arg);
    return std::move(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rr_tire_pressure_gauge
{
public:
  explicit Init_TireReport_rr_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rr_wheel_load rr_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport::_rr_tire_pressure_gauge_type arg)
  {
    msg_.rr_tire_pressure_gauge = std::move(arg);
    return Init_TireReport_rr_wheel_load(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rr_tire_pressure
{
public:
  explicit Init_TireReport_rr_tire_pressure(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rr_tire_pressure_gauge rr_tire_pressure(::npc_controller_msgs::msg::TireReport::_rr_tire_pressure_type arg)
  {
    msg_.rr_tire_pressure = std::move(arg);
    return Init_TireReport_rr_tire_pressure_gauge(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rr_damper_linear_potentiometer
{
public:
  explicit Init_TireReport_rr_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rr_tire_pressure rr_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport::_rr_damper_linear_potentiometer_type arg)
  {
    msg_.rr_damper_linear_potentiometer = std::move(arg);
    return Init_TireReport_rr_tire_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rr_tire_temperature
{
public:
  explicit Init_TireReport_rr_tire_temperature(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rr_damper_linear_potentiometer rr_tire_temperature(::npc_controller_msgs::msg::TireReport::_rr_tire_temperature_type arg)
  {
    msg_.rr_tire_temperature = std::move(arg);
    return Init_TireReport_rr_damper_linear_potentiometer(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rl_wheel_load
{
public:
  explicit Init_TireReport_rl_wheel_load(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rr_tire_temperature rl_wheel_load(::npc_controller_msgs::msg::TireReport::_rl_wheel_load_type arg)
  {
    msg_.rl_wheel_load = std::move(arg);
    return Init_TireReport_rr_tire_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rl_tire_pressure_gauge
{
public:
  explicit Init_TireReport_rl_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rl_wheel_load rl_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport::_rl_tire_pressure_gauge_type arg)
  {
    msg_.rl_tire_pressure_gauge = std::move(arg);
    return Init_TireReport_rl_wheel_load(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rl_tire_pressure
{
public:
  explicit Init_TireReport_rl_tire_pressure(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rl_tire_pressure_gauge rl_tire_pressure(::npc_controller_msgs::msg::TireReport::_rl_tire_pressure_type arg)
  {
    msg_.rl_tire_pressure = std::move(arg);
    return Init_TireReport_rl_tire_pressure_gauge(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rl_damper_linear_potentiometer
{
public:
  explicit Init_TireReport_rl_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rl_tire_pressure rl_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport::_rl_damper_linear_potentiometer_type arg)
  {
    msg_.rl_damper_linear_potentiometer = std::move(arg);
    return Init_TireReport_rl_tire_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_rl_tire_temperature
{
public:
  explicit Init_TireReport_rl_tire_temperature(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rl_damper_linear_potentiometer rl_tire_temperature(::npc_controller_msgs::msg::TireReport::_rl_tire_temperature_type arg)
  {
    msg_.rl_tire_temperature = std::move(arg);
    return Init_TireReport_rl_damper_linear_potentiometer(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fr_wheel_load
{
public:
  explicit Init_TireReport_fr_wheel_load(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_rl_tire_temperature fr_wheel_load(::npc_controller_msgs::msg::TireReport::_fr_wheel_load_type arg)
  {
    msg_.fr_wheel_load = std::move(arg);
    return Init_TireReport_rl_tire_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fr_tire_pressure_gauge
{
public:
  explicit Init_TireReport_fr_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fr_wheel_load fr_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport::_fr_tire_pressure_gauge_type arg)
  {
    msg_.fr_tire_pressure_gauge = std::move(arg);
    return Init_TireReport_fr_wheel_load(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fr_tire_pressure
{
public:
  explicit Init_TireReport_fr_tire_pressure(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fr_tire_pressure_gauge fr_tire_pressure(::npc_controller_msgs::msg::TireReport::_fr_tire_pressure_type arg)
  {
    msg_.fr_tire_pressure = std::move(arg);
    return Init_TireReport_fr_tire_pressure_gauge(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fr_damper_linear_potentiometer
{
public:
  explicit Init_TireReport_fr_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fr_tire_pressure fr_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport::_fr_damper_linear_potentiometer_type arg)
  {
    msg_.fr_damper_linear_potentiometer = std::move(arg);
    return Init_TireReport_fr_tire_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fr_tire_temperature
{
public:
  explicit Init_TireReport_fr_tire_temperature(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fr_damper_linear_potentiometer fr_tire_temperature(::npc_controller_msgs::msg::TireReport::_fr_tire_temperature_type arg)
  {
    msg_.fr_tire_temperature = std::move(arg);
    return Init_TireReport_fr_damper_linear_potentiometer(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fl_wheel_load
{
public:
  explicit Init_TireReport_fl_wheel_load(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fr_tire_temperature fl_wheel_load(::npc_controller_msgs::msg::TireReport::_fl_wheel_load_type arg)
  {
    msg_.fl_wheel_load = std::move(arg);
    return Init_TireReport_fr_tire_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fl_tire_pressure_gauge
{
public:
  explicit Init_TireReport_fl_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fl_wheel_load fl_tire_pressure_gauge(::npc_controller_msgs::msg::TireReport::_fl_tire_pressure_gauge_type arg)
  {
    msg_.fl_tire_pressure_gauge = std::move(arg);
    return Init_TireReport_fl_wheel_load(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fl_tire_pressure
{
public:
  explicit Init_TireReport_fl_tire_pressure(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fl_tire_pressure_gauge fl_tire_pressure(::npc_controller_msgs::msg::TireReport::_fl_tire_pressure_type arg)
  {
    msg_.fl_tire_pressure = std::move(arg);
    return Init_TireReport_fl_tire_pressure_gauge(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fl_damper_linear_potentiometer
{
public:
  explicit Init_TireReport_fl_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fl_tire_pressure fl_damper_linear_potentiometer(::npc_controller_msgs::msg::TireReport::_fl_damper_linear_potentiometer_type arg)
  {
    msg_.fl_damper_linear_potentiometer = std::move(arg);
    return Init_TireReport_fl_tire_pressure(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_fl_tire_temperature
{
public:
  explicit Init_TireReport_fl_tire_temperature(::npc_controller_msgs::msg::TireReport & msg)
  : msg_(msg)
  {}
  Init_TireReport_fl_damper_linear_potentiometer fl_tire_temperature(::npc_controller_msgs::msg::TireReport::_fl_tire_temperature_type arg)
  {
    msg_.fl_tire_temperature = std::move(arg);
    return Init_TireReport_fl_damper_linear_potentiometer(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

class Init_TireReport_stamp
{
public:
  Init_TireReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireReport_fl_tire_temperature stamp(::npc_controller_msgs::msg::TireReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TireReport_fl_tire_temperature(msg_);
  }

private:
  ::npc_controller_msgs::msg::TireReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::npc_controller_msgs::msg::TireReport>()
{
  return npc_controller_msgs::msg::builder::Init_TireReport_stamp();
}

}  // namespace npc_controller_msgs

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__BUILDER_HPP_
