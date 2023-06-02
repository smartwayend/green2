// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__TRAITS_HPP_
#define RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__TRAITS_HPP_

#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_Goal>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_Goal";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_Goal>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_Goal";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_Result>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_Result";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_Result>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_Result";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_Feedback>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_Feedback";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_Feedback>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_Feedback";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_SendGoal";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_SendGoal";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>::value &&
    has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>::value &&
    has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<rpi_robot_action_interfaces::action::GoToGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rpi_robot_action_interfaces::action::GoToGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_GetResult_Request";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_GetResult_Response";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Result>::value> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Result>::value> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_GetResult>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_GetResult";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_GetResult>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_GetResult";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>::value &&
    has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>::value &&
    has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<rpi_robot_action_interfaces::action::GoToGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rpi_robot_action_interfaces::action::GoToGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>()
{
  return "rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage";
}

template<>
inline const char * name<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>()
{
  return "rpi_robot_action_interfaces/action/GoToGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<rpi_robot_action_interfaces::action::GoToGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<rpi_robot_action_interfaces::action::GoToGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rpi_robot_action_interfaces::action::GoToGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<rpi_robot_action_interfaces::action::GoToGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<rpi_robot_action_interfaces::action::GoToGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<rpi_robot_action_interfaces::action::GoToGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<rpi_robot_action_interfaces::action::GoToGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__TRAITS_HPP_
