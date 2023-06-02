// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__BUILDER_HPP_
#define RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__BUILDER_HPP_

#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_Goal_y
{
public:
  explicit Init_GoToGoal_Goal_y(::rpi_robot_action_interfaces::action::GoToGoal_Goal & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_Goal y(::rpi_robot_action_interfaces::action::GoToGoal_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Goal msg_;
};

class Init_GoToGoal_Goal_x
{
public:
  Init_GoToGoal_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_Goal_y x(::rpi_robot_action_interfaces::action::GoToGoal_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoToGoal_Goal_y(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_Goal>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_Goal_x();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_Result_goal_reached
{
public:
  Init_GoToGoal_Result_goal_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_Result goal_reached(::rpi_robot_action_interfaces::action::GoToGoal_Result::_goal_reached_type arg)
  {
    msg_.goal_reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_Result>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_Result_goal_reached();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_Feedback_distance
{
public:
  explicit Init_GoToGoal_Feedback_distance(::rpi_robot_action_interfaces::action::GoToGoal_Feedback & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_Feedback distance(::rpi_robot_action_interfaces::action::GoToGoal_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Feedback msg_;
};

class Init_GoToGoal_Feedback_current_y
{
public:
  explicit Init_GoToGoal_Feedback_current_y(::rpi_robot_action_interfaces::action::GoToGoal_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoToGoal_Feedback_distance current_y(::rpi_robot_action_interfaces::action::GoToGoal_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_GoToGoal_Feedback_distance(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Feedback msg_;
};

class Init_GoToGoal_Feedback_current_x
{
public:
  Init_GoToGoal_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_Feedback_current_y current_x(::rpi_robot_action_interfaces::action::GoToGoal_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_GoToGoal_Feedback_current_y(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_Feedback>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_Feedback_current_x();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_SendGoal_Request_goal
{
public:
  explicit Init_GoToGoal_SendGoal_Request_goal(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request goal(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request msg_;
};

class Init_GoToGoal_SendGoal_Request_goal_id
{
public:
  Init_GoToGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_SendGoal_Request_goal goal_id(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_SendGoal_Request_goal_id();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_SendGoal_Response_stamp
{
public:
  explicit Init_GoToGoal_SendGoal_Response_stamp(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response stamp(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response msg_;
};

class Init_GoToGoal_SendGoal_Response_accepted
{
public:
  Init_GoToGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_SendGoal_Response_stamp accepted(::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_SendGoal_Response_accepted();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_GetResult_Request_goal_id
{
public:
  Init_GoToGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request goal_id(::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_GetResult_Request_goal_id();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_GetResult_Response_result
{
public:
  explicit Init_GoToGoal_GetResult_Response_result(::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response result(::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response msg_;
};

class Init_GoToGoal_GetResult_Response_status
{
public:
  Init_GoToGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_GetResult_Response_result status(::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToGoal_GetResult_Response_result(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_GetResult_Response_status();
}

}  // namespace rpi_robot_action_interfaces


namespace rpi_robot_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToGoal_FeedbackMessage_feedback
{
public:
  explicit Init_GoToGoal_FeedbackMessage_feedback(::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage feedback(::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage msg_;
};

class Init_GoToGoal_FeedbackMessage_goal_id
{
public:
  Init_GoToGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_FeedbackMessage_feedback goal_id(::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>()
{
  return rpi_robot_action_interfaces::action::builder::Init_GoToGoal_FeedbackMessage_goal_id();
}

}  // namespace rpi_robot_action_interfaces

#endif  // RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__BUILDER_HPP_
