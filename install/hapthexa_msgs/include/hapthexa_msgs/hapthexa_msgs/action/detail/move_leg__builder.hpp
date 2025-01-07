// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hapthexa_msgs:action/MoveLeg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/action/move_leg.hpp"


#ifndef HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__BUILDER_HPP_
#define HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hapthexa_msgs/action/detail/move_leg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_Goal_relative_mode
{
public:
  explicit Init_MoveLeg_Goal_relative_mode(::hapthexa_msgs::action::MoveLeg_Goal & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_Goal relative_mode(::hapthexa_msgs::action::MoveLeg_Goal::_relative_mode_type arg)
  {
    msg_.relative_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Goal msg_;
};

class Init_MoveLeg_Goal_abort_if_forcesensor_z_detect_contact
{
public:
  explicit Init_MoveLeg_Goal_abort_if_forcesensor_z_detect_contact(::hapthexa_msgs::action::MoveLeg_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Goal_relative_mode abort_if_forcesensor_z_detect_contact(::hapthexa_msgs::action::MoveLeg_Goal::_abort_if_forcesensor_z_detect_contact_type arg)
  {
    msg_.abort_if_forcesensor_z_detect_contact = std::move(arg);
    return Init_MoveLeg_Goal_relative_mode(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Goal msg_;
};

class Init_MoveLeg_Goal_z
{
public:
  explicit Init_MoveLeg_Goal_z(::hapthexa_msgs::action::MoveLeg_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Goal_abort_if_forcesensor_z_detect_contact z(::hapthexa_msgs::action::MoveLeg_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MoveLeg_Goal_abort_if_forcesensor_z_detect_contact(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Goal msg_;
};

class Init_MoveLeg_Goal_y
{
public:
  explicit Init_MoveLeg_Goal_y(::hapthexa_msgs::action::MoveLeg_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Goal_z y(::hapthexa_msgs::action::MoveLeg_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveLeg_Goal_z(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Goal msg_;
};

class Init_MoveLeg_Goal_x
{
public:
  Init_MoveLeg_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_Goal_y x(::hapthexa_msgs::action::MoveLeg_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveLeg_Goal_y(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_Goal>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_Goal_x();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_Result_z
{
public:
  explicit Init_MoveLeg_Result_z(::hapthexa_msgs::action::MoveLeg_Result & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_Result z(::hapthexa_msgs::action::MoveLeg_Result::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Result msg_;
};

class Init_MoveLeg_Result_y
{
public:
  explicit Init_MoveLeg_Result_y(::hapthexa_msgs::action::MoveLeg_Result & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Result_z y(::hapthexa_msgs::action::MoveLeg_Result::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveLeg_Result_z(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Result msg_;
};

class Init_MoveLeg_Result_x
{
public:
  Init_MoveLeg_Result_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_Result_y x(::hapthexa_msgs::action::MoveLeg_Result::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveLeg_Result_y(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_Result>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_Result_x();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_Feedback_piezo
{
public:
  explicit Init_MoveLeg_Feedback_piezo(::hapthexa_msgs::action::MoveLeg_Feedback & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_Feedback piezo(::hapthexa_msgs::action::MoveLeg_Feedback::_piezo_type arg)
  {
    msg_.piezo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Feedback msg_;
};

class Init_MoveLeg_Feedback_loadcell2
{
public:
  explicit Init_MoveLeg_Feedback_loadcell2(::hapthexa_msgs::action::MoveLeg_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Feedback_piezo loadcell2(::hapthexa_msgs::action::MoveLeg_Feedback::_loadcell2_type arg)
  {
    msg_.loadcell2 = std::move(arg);
    return Init_MoveLeg_Feedback_piezo(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Feedback msg_;
};

class Init_MoveLeg_Feedback_loadcell1
{
public:
  Init_MoveLeg_Feedback_loadcell1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_Feedback_loadcell2 loadcell1(::hapthexa_msgs::action::MoveLeg_Feedback::_loadcell1_type arg)
  {
    msg_.loadcell1 = std::move(arg);
    return Init_MoveLeg_Feedback_loadcell2(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_Feedback>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_Feedback_loadcell1();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_SendGoal_Request_goal
{
public:
  explicit Init_MoveLeg_SendGoal_Request_goal(::hapthexa_msgs::action::MoveLeg_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Request goal(::hapthexa_msgs::action::MoveLeg_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Request msg_;
};

class Init_MoveLeg_SendGoal_Request_goal_id
{
public:
  Init_MoveLeg_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_SendGoal_Request_goal goal_id(::hapthexa_msgs::action::MoveLeg_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveLeg_SendGoal_Request_goal(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_SendGoal_Request>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_SendGoal_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_SendGoal_Response_stamp
{
public:
  explicit Init_MoveLeg_SendGoal_Response_stamp(::hapthexa_msgs::action::MoveLeg_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Response stamp(::hapthexa_msgs::action::MoveLeg_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Response msg_;
};

class Init_MoveLeg_SendGoal_Response_accepted
{
public:
  Init_MoveLeg_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_SendGoal_Response_stamp accepted(::hapthexa_msgs::action::MoveLeg_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveLeg_SendGoal_Response_stamp(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_SendGoal_Response>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_SendGoal_Response_accepted();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_SendGoal_Event_response
{
public:
  explicit Init_MoveLeg_SendGoal_Event_response(::hapthexa_msgs::action::MoveLeg_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Event response(::hapthexa_msgs::action::MoveLeg_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Event msg_;
};

class Init_MoveLeg_SendGoal_Event_request
{
public:
  explicit Init_MoveLeg_SendGoal_Event_request(::hapthexa_msgs::action::MoveLeg_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_SendGoal_Event_response request(::hapthexa_msgs::action::MoveLeg_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveLeg_SendGoal_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Event msg_;
};

class Init_MoveLeg_SendGoal_Event_info
{
public:
  Init_MoveLeg_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_SendGoal_Event_request info(::hapthexa_msgs::action::MoveLeg_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveLeg_SendGoal_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_SendGoal_Event>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_SendGoal_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_GetResult_Request_goal_id
{
public:
  Init_MoveLeg_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hapthexa_msgs::action::MoveLeg_GetResult_Request goal_id(::hapthexa_msgs::action::MoveLeg_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_GetResult_Request>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_GetResult_Request_goal_id();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_GetResult_Response_result
{
public:
  explicit Init_MoveLeg_GetResult_Response_result(::hapthexa_msgs::action::MoveLeg_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_GetResult_Response result(::hapthexa_msgs::action::MoveLeg_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Response msg_;
};

class Init_MoveLeg_GetResult_Response_status
{
public:
  Init_MoveLeg_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_GetResult_Response_result status(::hapthexa_msgs::action::MoveLeg_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveLeg_GetResult_Response_result(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_GetResult_Response>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_GetResult_Response_status();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_GetResult_Event_response
{
public:
  explicit Init_MoveLeg_GetResult_Event_response(::hapthexa_msgs::action::MoveLeg_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_GetResult_Event response(::hapthexa_msgs::action::MoveLeg_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Event msg_;
};

class Init_MoveLeg_GetResult_Event_request
{
public:
  explicit Init_MoveLeg_GetResult_Event_request(::hapthexa_msgs::action::MoveLeg_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_GetResult_Event_response request(::hapthexa_msgs::action::MoveLeg_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveLeg_GetResult_Event_response(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Event msg_;
};

class Init_MoveLeg_GetResult_Event_info
{
public:
  Init_MoveLeg_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_GetResult_Event_request info(::hapthexa_msgs::action::MoveLeg_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveLeg_GetResult_Event_request(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_GetResult_Event>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_GetResult_Event_info();
}

}  // namespace hapthexa_msgs


namespace hapthexa_msgs
{

namespace action
{

namespace builder
{

class Init_MoveLeg_FeedbackMessage_feedback
{
public:
  explicit Init_MoveLeg_FeedbackMessage_feedback(::hapthexa_msgs::action::MoveLeg_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hapthexa_msgs::action::MoveLeg_FeedbackMessage feedback(::hapthexa_msgs::action::MoveLeg_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_FeedbackMessage msg_;
};

class Init_MoveLeg_FeedbackMessage_goal_id
{
public:
  Init_MoveLeg_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_FeedbackMessage_feedback goal_id(::hapthexa_msgs::action::MoveLeg_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveLeg_FeedbackMessage_feedback(msg_);
  }

private:
  ::hapthexa_msgs::action::MoveLeg_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hapthexa_msgs::action::MoveLeg_FeedbackMessage>()
{
  return hapthexa_msgs::action::builder::Init_MoveLeg_FeedbackMessage_goal_id();
}

}  // namespace hapthexa_msgs

#endif  // HAPTHEXA_MSGS__ACTION__DETAIL__MOVE_LEG__BUILDER_HPP_
