// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autonoma_msgs:msg/ToRaptor.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__BUILDER_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autonoma_msgs/msg/detail/to_raptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autonoma_msgs
{

namespace msg
{

namespace builder
{

class Init_ToRaptor_veh_num
{
public:
  explicit Init_ToRaptor_veh_num(::autonoma_msgs::msg::ToRaptor & msg)
  : msg_(msg)
  {}
  ::autonoma_msgs::msg::ToRaptor veh_num(::autonoma_msgs::msg::ToRaptor::_veh_num_type arg)
  {
    msg_.veh_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

class Init_ToRaptor_rolling_counter
{
public:
  explicit Init_ToRaptor_rolling_counter(::autonoma_msgs::msg::ToRaptor & msg)
  : msg_(msg)
  {}
  Init_ToRaptor_veh_num rolling_counter(::autonoma_msgs::msg::ToRaptor::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_ToRaptor_veh_num(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

class Init_ToRaptor_ct_state
{
public:
  explicit Init_ToRaptor_ct_state(::autonoma_msgs::msg::ToRaptor & msg)
  : msg_(msg)
  {}
  Init_ToRaptor_rolling_counter ct_state(::autonoma_msgs::msg::ToRaptor::_ct_state_type arg)
  {
    msg_.ct_state = std::move(arg);
    return Init_ToRaptor_rolling_counter(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

class Init_ToRaptor_veh_sig_ack
{
public:
  explicit Init_ToRaptor_veh_sig_ack(::autonoma_msgs::msg::ToRaptor & msg)
  : msg_(msg)
  {}
  Init_ToRaptor_ct_state veh_sig_ack(::autonoma_msgs::msg::ToRaptor::_veh_sig_ack_type arg)
  {
    msg_.veh_sig_ack = std::move(arg);
    return Init_ToRaptor_ct_state(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

class Init_ToRaptor_track_cond_ack
{
public:
  explicit Init_ToRaptor_track_cond_ack(::autonoma_msgs::msg::ToRaptor & msg)
  : msg_(msg)
  {}
  Init_ToRaptor_veh_sig_ack track_cond_ack(::autonoma_msgs::msg::ToRaptor::_track_cond_ack_type arg)
  {
    msg_.track_cond_ack = std::move(arg);
    return Init_ToRaptor_veh_sig_ack(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

class Init_ToRaptor_header
{
public:
  Init_ToRaptor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToRaptor_track_cond_ack header(::autonoma_msgs::msg::ToRaptor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ToRaptor_track_cond_ack(msg_);
  }

private:
  ::autonoma_msgs::msg::ToRaptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autonoma_msgs::msg::ToRaptor>()
{
  return autonoma_msgs::msg::builder::Init_ToRaptor_header();
}

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__BUILDER_HPP_
