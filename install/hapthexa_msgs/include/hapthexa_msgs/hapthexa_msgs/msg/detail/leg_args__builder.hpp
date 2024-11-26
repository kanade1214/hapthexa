// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:msg/LegArgs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_args.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__BUILDER_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/msg/detail/leg_args__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace msg
{

namespace builder
{

class Init_LegArgs_tibia_arg
{
public:
  explicit Init_LegArgs_tibia_arg(::hapthexa_msgs::msg::LegArgs & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::msg::LegArgs tibia_arg(::hapthexa_msgs::msg::LegArgs::_tibia_arg_type arg)
  {
    msg_.tibia_arg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegArgs msg_;
};

class Init_LegArgs_femur_arg
{
public:
  explicit Init_LegArgs_femur_arg(::hapthexa_msgs::msg::LegArgs & msg)
  : msg_(msg)
  {}
  Init_LegArgs_tibia_arg femur_arg(::hapthexa_msgs::msg::LegArgs::_femur_arg_type arg)
  {
    msg_.femur_arg = std::move(arg);
    return Init_LegArgs_tibia_arg(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegArgs msg_;
};

class Init_LegArgs_coxa_arg
{
public:
  Init_LegArgs_coxa_arg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegArgs_femur_arg coxa_arg(::hapthexa_msgs::msg::LegArgs::_coxa_arg_type arg)
  {
    msg_.coxa_arg = std::move(arg);
    return Init_LegArgs_femur_arg(msg_);
  }

private:
  ::hapthexa_msgs::msg::LegArgs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::msg::LegArgs>()
{
  return hapthexa_msgs::msg::builder::Init_LegArgs_coxa_arg();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_ARGS__BUILDER_HPP_
