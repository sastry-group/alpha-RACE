// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from novatel_oem7_msgs:msg/TranslationOffset.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__BUILDER_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "novatel_oem7_msgs/msg/detail/translation_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace novatel_oem7_msgs
{

namespace msg
{

namespace builder
{

class Init_TranslationOffset_type
{
public:
  Init_TranslationOffset_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::novatel_oem7_msgs::msg::TranslationOffset type(::novatel_oem7_msgs::msg::TranslationOffset::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::novatel_oem7_msgs::msg::TranslationOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::novatel_oem7_msgs::msg::TranslationOffset>()
{
  return novatel_oem7_msgs::msg::builder::Init_TranslationOffset_type();
}

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__BUILDER_HPP_
