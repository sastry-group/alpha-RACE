// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/GroundTruth.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/ground_truth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_GroundTruth_del_z
{
public:
  explicit Init_GroundTruth_del_z(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::GroundTruth del_z(::autonoma_msgs::msg::GroundTruth::_del_z_type arg)
  {
    msg_.del_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_del_y
{
public:
  explicit Init_GroundTruth_del_y(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_del_z del_y(::autonoma_msgs::msg::GroundTruth::_del_y_type arg)
  {
    msg_.del_y = std::move(arg);
    return Init_GroundTruth_del_z(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_del_x
{
public:
  explicit Init_GroundTruth_del_x(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_del_y del_x(::autonoma_msgs::msg::GroundTruth::_del_x_type arg)
  {
    msg_.del_x = std::move(arg);
    return Init_GroundTruth_del_y(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_roll
{
public:
  explicit Init_GroundTruth_roll(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_del_x roll(::autonoma_msgs::msg::GroundTruth::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GroundTruth_del_x(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_pitch
{
public:
  explicit Init_GroundTruth_pitch(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_roll pitch(::autonoma_msgs::msg::GroundTruth::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GroundTruth_roll(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_yaw
{
public:
  explicit Init_GroundTruth_yaw(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_pitch yaw(::autonoma_msgs::msg::GroundTruth::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GroundTruth_pitch(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_vz
{
public:
  explicit Init_GroundTruth_vz(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_yaw vz(::autonoma_msgs::msg::GroundTruth::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_GroundTruth_yaw(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_vy
{
public:
  explicit Init_GroundTruth_vy(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_vz vy(::autonoma_msgs::msg::GroundTruth::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_GroundTruth_vz(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_vx
{
public:
  explicit Init_GroundTruth_vx(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_vy vx(::autonoma_msgs::msg::GroundTruth::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_GroundTruth_vy(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_hgt
{
public:
  explicit Init_GroundTruth_hgt(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_vx hgt(::autonoma_msgs::msg::GroundTruth::_hgt_type arg)
  {
    msg_.hgt = std::move(arg);
    return Init_GroundTruth_vx(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_lon
{
public:
  explicit Init_GroundTruth_lon(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_hgt lon(::autonoma_msgs::msg::GroundTruth::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GroundTruth_hgt(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_lat
{
public:
  explicit Init_GroundTruth_lat(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_lon lat(::autonoma_msgs::msg::GroundTruth::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GroundTruth_lon(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_car_num
{
public:
  explicit Init_GroundTruth_car_num(::autonoma_msgs::msg::GroundTruth & msg)
  : msg_(msg)
  {}
  Init_GroundTruth_lat car_num(::autonoma_msgs::msg::GroundTruth::_car_num_type arg)
  {
    msg_.car_num = std::move(arg);
    return Init_GroundTruth_lat(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

class Init_GroundTruth_header
{
public:
  Init_GroundTruth_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroundTruth_car_num header(::autonoma_msgs::msg::GroundTruth::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GroundTruth_car_num(msg_);
  }

private:
  ::autonoma_msgs::msg::GroundTruth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::GroundTruth>()
{
  return autonoma_msgs::msg::builder::Init_GroundTruth_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__BUILDER_HPP_
