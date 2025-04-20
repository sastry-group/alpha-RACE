// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/PackedElementField.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/packed_element_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_PackedElementField_type
{
public:
  explicit Init_PackedElementField_type(::foxglove_msgs::msg::PackedElementField & msg)
  : msg_(msg)
  {}
  ::foxglove_msgs::msg::PackedElementField type(::foxglove_msgs::msg::PackedElementField::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::PackedElementField msg_;
};

class Init_PackedElementField_offset
{
public:
  explicit Init_PackedElementField_offset(::foxglove_msgs::msg::PackedElementField & msg)
  : msg_(msg)
  {}
  Init_PackedElementField_type offset(::foxglove_msgs::msg::PackedElementField::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_PackedElementField_type(msg_);
  }

private:
  ::foxglove_msgs::msg::PackedElementField msg_;
};

class Init_PackedElementField_name
{
public:
  Init_PackedElementField_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PackedElementField_offset name(::foxglove_msgs::msg::PackedElementField::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PackedElementField_offset(msg_);
  }

private:
  ::foxglove_msgs::msg::PackedElementField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::PackedElementField>()
{
  return foxglove_msgs::msg::builder::Init_PackedElementField_name();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__PACKED_ELEMENT_FIELD__BUILDER_HPP_
