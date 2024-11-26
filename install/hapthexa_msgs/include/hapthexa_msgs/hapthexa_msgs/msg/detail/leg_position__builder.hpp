// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_position.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/msg/detail/leg_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace msg
{

namespace builder
{

class Init_LegPosition_z
{
public:
  explicit Init_LegPosition_z(::hapthexa_msgs::msg::LegPosition & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::msg::LegPosition z(::hapthexa_msgs::msg::LegPosition::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegPosition msg_;
};

class Init_LegPosition_y
{
public:
  explicit Init_LegPosition_y(::hapthexa_msgs::msg::LegPosition & msg)
  : msg_(msg)
  {}
  Init_LegPosition_z y(::hapthexa_msgs::msg::LegPosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LegPosition_z(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegPosition msg_;
};

class Init_LegPosition_x
{
public:
  Init_LegPosition_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegPosition_y x(::hapthexa_msgs::msg::LegPosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LegPosition_y(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::msg::LegPosition>()
{
  return hapthexa_msgs::msg::builder::Init_LegPosition_x();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_
