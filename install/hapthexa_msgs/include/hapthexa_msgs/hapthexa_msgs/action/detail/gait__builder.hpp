// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:action/Gait.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/action/gait.hpp"


#ifndef HAPTHEXA_MSGS__ACTION__DETAIL__GAIT__BUILDER_HPP_
#define HAPTHEXA_MSGS__ACTION__DETAIL__GAIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/action/detail/gait__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_Goal_phase
{
public:
  explicit Init_Gait_Goal_phase(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_Goal phase(::hapthexa_msgs::action::Gait_Goal::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_is_firsttime
{
public:
  explicit Init_Gait_Goal_is_firsttime(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_phase is_firsttime(::hapthexa_msgs::action::Gait_Goal::_is_firsttime_type arg)
  {
    msg_.is_firsttime = std::move(arg);
    return Init_Gait_Goal_phase(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_is_swingleg
{
public:
  explicit Init_Gait_Goal_is_swingleg(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_is_firsttime is_swingleg(::hapthexa_msgs::action::Gait_Goal::_is_swingleg_type arg)
  {
    msg_.is_swingleg = std::move(arg);
    return Init_Gait_Goal_is_firsttime(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_z_offset
{
public:
  explicit Init_Gait_Goal_z_offset(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_is_swingleg z_offset(::hapthexa_msgs::action::Gait_Goal::_z_offset_type arg)
  {
    msg_.z_offset = std::move(arg);
    return Init_Gait_Goal_is_swingleg(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_hmin
{
public:
  explicit Init_Gait_Goal_hmin(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_z_offset hmin(::hapthexa_msgs::action::Gait_Goal::_hmin_type arg)
  {
    msg_.hmin = std::move(arg);
    return Init_Gait_Goal_z_offset(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_hmax
{
public:
  explicit Init_Gait_Goal_hmax(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_hmin hmax(::hapthexa_msgs::action::Gait_Goal::_hmax_type arg)
  {
    msg_.hmax = std::move(arg);
    return Init_Gait_Goal_hmin(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_h
{
public:
  explicit Init_Gait_Goal_h(::hapthexa_msgs::action::Gait_Goal & msg)
  : msg_(msg)
  {}
  Init_Gait_Goal_hmax h(::hapthexa_msgs::action::Gait_Goal::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_Gait_Goal_hmax(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

class Init_Gait_Goal_w
{
public:
  Init_Gait_Goal_w()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_Goal_h w(::hapthexa_msgs::action::Gait_Goal::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_Gait_Goal_h(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_Goal>()
{
  return hapthexa_msgs::action::builder::Init_Gait_Goal_w();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_Result_z
{
public:
  explicit Init_Gait_Result_z(::hapthexa_msgs::action::Gait_Result & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_Result z(::hapthexa_msgs::action::Gait_Result::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Result msg_;
};

class Init_Gait_Result_y
{
public:
  explicit Init_Gait_Result_y(::hapthexa_msgs::action::Gait_Result & msg)
  : msg_(msg)
  {}
  Init_Gait_Result_z y(::hapthexa_msgs::action::Gait_Result::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Gait_Result_z(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Result msg_;
};

class Init_Gait_Result_x
{
public:
  Init_Gait_Result_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_Result_y x(::hapthexa_msgs::action::Gait_Result::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Gait_Result_y(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_Result>()
{
  return hapthexa_msgs::action::builder::Init_Gait_Result_x();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_Feedback>()
{
  return ::hapthexa_msgs::action::Gait_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_SendGoal_Request_goal
{
public:
  explicit Init_Gait_SendGoal_Request_goal(::hapthexa_msgs::action::Gait_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_SendGoal_Request goal(::hapthexa_msgs::action::Gait_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Request msg_;
};

class Init_Gait_SendGoal_Request_goal_id
{
public:
  Init_Gait_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_SendGoal_Request_goal goal_id(::hapthexa_msgs::action::Gait_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gait_SendGoal_Request_goal(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_SendGoal_Request>()
{
  return hapthexa_msgs::action::builder::Init_Gait_SendGoal_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_SendGoal_Response_stamp
{
public:
  explicit Init_Gait_SendGoal_Response_stamp(::hapthexa_msgs::action::Gait_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_SendGoal_Response stamp(::hapthexa_msgs::action::Gait_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Response msg_;
};

class Init_Gait_SendGoal_Response_accepted
{
public:
  Init_Gait_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_SendGoal_Response_stamp accepted(::hapthexa_msgs::action::Gait_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Gait_SendGoal_Response_stamp(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_SendGoal_Response>()
{
  return hapthexa_msgs::action::builder::Init_Gait_SendGoal_Response_accepted();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_SendGoal_Event_response
{
public:
  explicit Init_Gait_SendGoal_Event_response(::hapthexa_msgs::action::Gait_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_SendGoal_Event response(::hapthexa_msgs::action::Gait_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Event msg_;
};

class Init_Gait_SendGoal_Event_request
{
public:
  explicit Init_Gait_SendGoal_Event_request(::hapthexa_msgs::action::Gait_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Gait_SendGoal_Event_response request(::hapthexa_msgs::action::Gait_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Gait_SendGoal_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Event msg_;
};

class Init_Gait_SendGoal_Event_info
{
public:
  Init_Gait_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_SendGoal_Event_request info(::hapthexa_msgs::action::Gait_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Gait_SendGoal_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_SendGoal_Event>()
{
  return hapthexa_msgs::action::builder::Init_Gait_SendGoal_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_GetResult_Request_goal_id
{
public:
  Init_Gait_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hapthexa_msgs::action::Gait_GetResult_Request goal_id(::hapthexa_msgs::action::Gait_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_GetResult_Request>()
{
  return hapthexa_msgs::action::builder::Init_Gait_GetResult_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_GetResult_Response_result
{
public:
  explicit Init_Gait_GetResult_Response_result(::hapthexa_msgs::action::Gait_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_GetResult_Response result(::hapthexa_msgs::action::Gait_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Response msg_;
};

class Init_Gait_GetResult_Response_status
{
public:
  Init_Gait_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_GetResult_Response_result status(::hapthexa_msgs::action::Gait_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Gait_GetResult_Response_result(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_GetResult_Response>()
{
  return hapthexa_msgs::action::builder::Init_Gait_GetResult_Response_status();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_GetResult_Event_response
{
public:
  explicit Init_Gait_GetResult_Event_response(::hapthexa_msgs::action::Gait_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_GetResult_Event response(::hapthexa_msgs::action::Gait_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Event msg_;
};

class Init_Gait_GetResult_Event_request
{
public:
  explicit Init_Gait_GetResult_Event_request(::hapthexa_msgs::action::Gait_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Gait_GetResult_Event_response request(::hapthexa_msgs::action::Gait_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Gait_GetResult_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Event msg_;
};

class Init_Gait_GetResult_Event_info
{
public:
  Init_Gait_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_GetResult_Event_request info(::hapthexa_msgs::action::Gait_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Gait_GetResult_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_GetResult_Event>()
{
  return hapthexa_msgs::action::builder::Init_Gait_GetResult_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_Gait_FeedbackMessage_feedback
{
public:
  explicit Init_Gait_FeedbackMessage_feedback(::hapthexa_msgs::action::Gait_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::Gait_FeedbackMessage feedback(::hapthexa_msgs::action::Gait_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_FeedbackMessage msg_;
};

class Init_Gait_FeedbackMessage_goal_id
{
public:
  Init_Gait_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gait_FeedbackMessage_feedback goal_id(::hapthexa_msgs::action::Gait_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gait_FeedbackMessage_feedback(msg_);
  }

private:
  ::hapthexa_msgs::action::Gait_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::Gait_FeedbackMessage>()
{
  return hapthexa_msgs::action::builder::Init_Gait_FeedbackMessage_goal_id();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__ACTION__DETAIL__GAIT__BUILDER_HPP_
