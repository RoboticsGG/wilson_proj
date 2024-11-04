// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from package_rover_control:action/Rovercontrol.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_
#define PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "package_rover_control/action/detail/rovercontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Goal_timestop
{
public:
  explicit Init_Rovercontrol_Goal_timestop(::package_rover_control::action::Rovercontrol_Goal & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_Goal timestop(::package_rover_control::action::Rovercontrol_Goal::_timestop_type arg)
  {
    msg_.timestop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_Goal msg_;
};

class Init_Rovercontrol_Goal_direction
{
public:
  Init_Rovercontrol_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_Goal_timestop direction(::package_rover_control::action::Rovercontrol_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Rovercontrol_Goal_timestop(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_Goal>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_Goal_direction();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Result_result_msg
{
public:
  Init_Rovercontrol_Result_result_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::package_rover_control::action::Rovercontrol_Result result_msg(::package_rover_control::action::Rovercontrol_Result::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_Result>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_Result_result_msg();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_Feedback_time_remaining
{
public:
  Init_Rovercontrol_Feedback_time_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::package_rover_control::action::Rovercontrol_Feedback time_remaining(::package_rover_control::action::Rovercontrol_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_Feedback>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_Feedback_time_remaining();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_SendGoal_Request_goal
{
public:
  explicit Init_Rovercontrol_SendGoal_Request_goal(::package_rover_control::action::Rovercontrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_SendGoal_Request goal(::package_rover_control::action::Rovercontrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Request msg_;
};

class Init_Rovercontrol_SendGoal_Request_goal_id
{
public:
  Init_Rovercontrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_SendGoal_Request_goal goal_id(::package_rover_control::action::Rovercontrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rovercontrol_SendGoal_Request_goal(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_SendGoal_Request>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_SendGoal_Request_goal_id();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_SendGoal_Response_stamp
{
public:
  explicit Init_Rovercontrol_SendGoal_Response_stamp(::package_rover_control::action::Rovercontrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_SendGoal_Response stamp(::package_rover_control::action::Rovercontrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Response msg_;
};

class Init_Rovercontrol_SendGoal_Response_accepted
{
public:
  Init_Rovercontrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_SendGoal_Response_stamp accepted(::package_rover_control::action::Rovercontrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Rovercontrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_SendGoal_Response>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_SendGoal_Response_accepted();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_SendGoal_Event_response
{
public:
  explicit Init_Rovercontrol_SendGoal_Event_response(::package_rover_control::action::Rovercontrol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_SendGoal_Event response(::package_rover_control::action::Rovercontrol_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Event msg_;
};

class Init_Rovercontrol_SendGoal_Event_request
{
public:
  explicit Init_Rovercontrol_SendGoal_Event_request(::package_rover_control::action::Rovercontrol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Rovercontrol_SendGoal_Event_response request(::package_rover_control::action::Rovercontrol_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Rovercontrol_SendGoal_Event_response(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Event msg_;
};

class Init_Rovercontrol_SendGoal_Event_info
{
public:
  Init_Rovercontrol_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_SendGoal_Event_request info(::package_rover_control::action::Rovercontrol_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Rovercontrol_SendGoal_Event_request(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_SendGoal_Event>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_SendGoal_Event_info();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_GetResult_Request_goal_id
{
public:
  Init_Rovercontrol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::package_rover_control::action::Rovercontrol_GetResult_Request goal_id(::package_rover_control::action::Rovercontrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_GetResult_Request>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_GetResult_Request_goal_id();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_GetResult_Response_result
{
public:
  explicit Init_Rovercontrol_GetResult_Response_result(::package_rover_control::action::Rovercontrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_GetResult_Response result(::package_rover_control::action::Rovercontrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Response msg_;
};

class Init_Rovercontrol_GetResult_Response_status
{
public:
  Init_Rovercontrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_GetResult_Response_result status(::package_rover_control::action::Rovercontrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Rovercontrol_GetResult_Response_result(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_GetResult_Response>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_GetResult_Response_status();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_GetResult_Event_response
{
public:
  explicit Init_Rovercontrol_GetResult_Event_response(::package_rover_control::action::Rovercontrol_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_GetResult_Event response(::package_rover_control::action::Rovercontrol_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Event msg_;
};

class Init_Rovercontrol_GetResult_Event_request
{
public:
  explicit Init_Rovercontrol_GetResult_Event_request(::package_rover_control::action::Rovercontrol_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Rovercontrol_GetResult_Event_response request(::package_rover_control::action::Rovercontrol_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Rovercontrol_GetResult_Event_response(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Event msg_;
};

class Init_Rovercontrol_GetResult_Event_info
{
public:
  Init_Rovercontrol_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_GetResult_Event_request info(::package_rover_control::action::Rovercontrol_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Rovercontrol_GetResult_Event_request(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_GetResult_Event>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_GetResult_Event_info();
}

}  // namespace package_rover_control


namespace package_rover_control
{

namespace action
{

namespace builder
{

class Init_Rovercontrol_FeedbackMessage_feedback
{
public:
  explicit Init_Rovercontrol_FeedbackMessage_feedback(::package_rover_control::action::Rovercontrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::package_rover_control::action::Rovercontrol_FeedbackMessage feedback(::package_rover_control::action::Rovercontrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_FeedbackMessage msg_;
};

class Init_Rovercontrol_FeedbackMessage_goal_id
{
public:
  Init_Rovercontrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rovercontrol_FeedbackMessage_feedback goal_id(::package_rover_control::action::Rovercontrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rovercontrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::package_rover_control::action::Rovercontrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::package_rover_control::action::Rovercontrol_FeedbackMessage>()
{
  return package_rover_control::action::builder::Init_Rovercontrol_FeedbackMessage_goal_id();
}

}  // namespace package_rover_control

#endif  // PACKAGE_ROVER_CONTROL__ACTION__DETAIL__ROVERCONTROL__BUILDER_HPP_
