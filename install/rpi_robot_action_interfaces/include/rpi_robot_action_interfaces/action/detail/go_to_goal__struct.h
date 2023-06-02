// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_H_
#define RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Goal
{
  float x;
  float y;
} rpi_robot_action_interfaces__action__GoToGoal_Goal;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_Goal.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Result
{
  bool goal_reached;
} rpi_robot_action_interfaces__action__GoToGoal_Result;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_Result.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence;


// Constants defined in the message

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Feedback
{
  float current_x;
  float current_y;
  float distance;
} rpi_robot_action_interfaces__action__GoToGoal_Feedback;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_Feedback.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rpi_robot_action_interfaces__action__GoToGoal_Goal goal;
} rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response
{
  int8_t status;
  rpi_robot_action_interfaces__action__GoToGoal_Result result;
} rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"

// Struct defined in action/GoToGoal in the package rpi_robot_action_interfaces.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rpi_robot_action_interfaces__action__GoToGoal_Feedback feedback;
} rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage;

// Struct for a sequence of rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage.
typedef struct rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence
{
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__STRUCT_H_
