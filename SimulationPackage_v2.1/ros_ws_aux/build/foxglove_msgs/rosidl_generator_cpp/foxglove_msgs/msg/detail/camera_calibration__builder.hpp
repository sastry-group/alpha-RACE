// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/CameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/camera_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCalibration_p
{
public:
  explicit Init_CameraCalibration_p(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::CameraCalibration p(::foxglove_msgs::msg::CameraCalibration::_p_type arg)
  {
    msg_.p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_r
{
public:
  explicit Init_CameraCalibration_r(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_p r(::foxglove_msgs::msg::CameraCalibration::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_CameraCalibration_p(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_k
{
public:
  explicit Init_CameraCalibration_k(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_r k(::foxglove_msgs::msg::CameraCalibration::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_CameraCalibration_r(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_d
{
public:
  explicit Init_CameraCalibration_d(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_k d(::foxglove_msgs::msg::CameraCalibration::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_CameraCalibration_k(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_distortion_model
{
public:
  explicit Init_CameraCalibration_distortion_model(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_d distortion_model(::foxglove_msgs::msg::CameraCalibration::_distortion_model_type arg)
  {
    msg_.distortion_model = std::move(arg);
    return Init_CameraCalibration_d(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_height
{
public:
  explicit Init_CameraCalibration_height(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_distortion_model height(::foxglove_msgs::msg::CameraCalibration::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraCalibration_distortion_model(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_width
{
public:
  explicit Init_CameraCalibration_width(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_height width(::foxglove_msgs::msg::CameraCalibration::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraCalibration_height(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_frame_id
{
public:
  explicit Init_CameraCalibration_frame_id(::foxglove_msgs::msg::CameraCalibration & msg)
  : msg_(msg)
  {}
  Init_CameraCalibration_width frame_id(::foxglove_msgs::msg::CameraCalibration::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CameraCalibration_width(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

class Init_CameraCalibration_timestamp
{
public:
  Init_CameraCalibration_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCalibration_frame_id timestamp(::foxglove_msgs::msg::CameraCalibration::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraCalibration_frame_id(msg_);
  }

private:
  ::foxglove_msgs::msg::CameraCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::CameraCalibration>()
{
  return foxglove_msgs::msg::builder::Init_CameraCalibration_timestamp();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CAMERA_CALIBRATION__BUILDER_HPP_
