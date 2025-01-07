// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/attitude.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/msg/detail/attitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace msg
{

namespace builder
{

class Init_Attitude_yaw
{
public:
  explicit Init_Attitude_yaw(::hapthexa_msgs::msg::Attitude & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::msg::Attitude yaw(::hapthexa_msgs::msg::Attitude::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::msg::Attitude msg_;
};

class Init_Attitude_pitch
{
public:
  explicit Init_Attitude_pitch(::hapthexa_msgs::msg::Attitude & msg)
  : msg_(msg)
  {}
  Init_Attitude_yaw pitch(::hapthexa_msgs::msg::Attitude::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Attitude_yaw(msg_);
  }

private:
  ::hapthexa_msgs::msg::Attitude msg_;
};

class Init_Attitude_roll
{
public:
  Init_Attitude_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attitude_pitch roll(::hapthexa_msgs::msg::Attitude::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Attitude_pitch(msg_);
  }

private:
  ::hapthexa_msgs::msg::Attitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::msg::Attitude>()
{
  return hapthexa_msgs::msg::builder::Init_Attitude_roll();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_
