// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:srv/StopLeg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/stop_leg.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__STOP_LEG__BUILDER_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__STOP_LEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/srv/detail/stop_leg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_StopLeg_Request_num
{
public:
  Init_StopLeg_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hapthexa_msgs::srv::StopLeg_Request num(::hapthexa_msgs::srv::StopLeg_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::StopLeg_Request>()
{
  return hapthexa_msgs::srv::builder::Init_StopLeg_Request_num();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_StopLeg_Response_z
{
public:
  explicit Init_StopLeg_Response_z(::hapthexa_msgs::srv::StopLeg_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::StopLeg_Response z(::hapthexa_msgs::srv::StopLeg_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Response msg_;
};

class Init_StopLeg_Response_y
{
public:
  explicit Init_StopLeg_Response_y(::hapthexa_msgs::srv::StopLeg_Response & msg)
  : msg_(msg)
  {}
  Init_StopLeg_Response_z y(::hapthexa_msgs::srv::StopLeg_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_StopLeg_Response_z(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Response msg_;
};

class Init_StopLeg_Response_x
{
public:
  Init_StopLeg_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopLeg_Response_y x(::hapthexa_msgs::srv::StopLeg_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_StopLeg_Response_y(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::StopLeg_Response>()
{
  return hapthexa_msgs::srv::builder::Init_StopLeg_Response_x();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace srv
{

namespace builder
{

class Init_StopLeg_Event_response
{
public:
  explicit Init_StopLeg_Event_response(::hapthexa_msgs::srv::StopLeg_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::srv::StopLeg_Event response(::hapthexa_msgs::srv::StopLeg_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Event msg_;
};

class Init_StopLeg_Event_request
{
public:
  explicit Init_StopLeg_Event_request(::hapthexa_msgs::srv::StopLeg_Event & msg)
  : msg_(msg)
  {}
  Init_StopLeg_Event_response request(::hapthexa_msgs::srv::StopLeg_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopLeg_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Event msg_;
};

class Init_StopLeg_Event_info
{
public:
  Init_StopLeg_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopLeg_Event_request info(::hapthexa_msgs::srv::StopLeg_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopLeg_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::srv::StopLeg_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::srv::StopLeg_Event>()
{
  return hapthexa_msgs::srv::builder::Init_StopLeg_Event_info();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__STOP_LEG__BUILDER_HPP_
