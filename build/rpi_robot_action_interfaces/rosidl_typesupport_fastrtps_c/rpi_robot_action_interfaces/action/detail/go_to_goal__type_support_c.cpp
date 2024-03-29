// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GoToGoal_Goal__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_Goal;

static bool _GoToGoal_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_Goal__ros_msg_type * ros_message = static_cast<const _GoToGoal_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _GoToGoal_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_Goal__ros_msg_type * ros_message = static_cast<_GoToGoal_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_Goal__ros_msg_type * ros_message = static_cast<const _GoToGoal_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_Goal = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_Goal",
  _GoToGoal_Goal__cdr_serialize,
  _GoToGoal_Goal__cdr_deserialize,
  _GoToGoal_Goal__get_serialized_size,
  _GoToGoal_Goal__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Goal)() {
  return &_GoToGoal_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GoToGoal_Result__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_Result;

static bool _GoToGoal_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_Result__ros_msg_type * ros_message = static_cast<const _GoToGoal_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_reached
  {
    cdr << (ros_message->goal_reached ? true : false);
  }

  return true;
}

static bool _GoToGoal_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_Result__ros_msg_type * ros_message = static_cast<_GoToGoal_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->goal_reached = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_Result__ros_msg_type * ros_message = static_cast<const _GoToGoal_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_reached
  {
    size_t item_size = sizeof(ros_message->goal_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_Result = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_Result",
  _GoToGoal_Result__cdr_serialize,
  _GoToGoal_Result__cdr_deserialize,
  _GoToGoal_Result__get_serialized_size,
  _GoToGoal_Result__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Result)() {
  return &_GoToGoal_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GoToGoal_Feedback__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_Feedback;

static bool _GoToGoal_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_Feedback__ros_msg_type * ros_message = static_cast<const _GoToGoal_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_x
  {
    cdr << ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr << ros_message->current_y;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

static bool _GoToGoal_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_Feedback__ros_msg_type * ros_message = static_cast<_GoToGoal_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: current_x
  {
    cdr >> ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr >> ros_message->current_y;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_Feedback__ros_msg_type * ros_message = static_cast<const _GoToGoal_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_x
  {
    size_t item_size = sizeof(ros_message->current_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_y
  {
    size_t item_size = sizeof(ros_message->current_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_Feedback = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_Feedback",
  _GoToGoal_Feedback__cdr_serialize,
  _GoToGoal_Feedback__cdr_deserialize,
  _GoToGoal_Feedback__get_serialized_size,
  _GoToGoal_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback)() {
  return &_GoToGoal_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoToGoal_SendGoal_Request__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request;

static bool _GoToGoal_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _GoToGoal_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoToGoal_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_SendGoal_Request__ros_msg_type * ros_message = static_cast<_GoToGoal_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _GoToGoal_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_SendGoal_Request = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_SendGoal_Request",
  _GoToGoal_SendGoal_Request__cdr_serialize,
  _GoToGoal_SendGoal_Request__cdr_deserialize,
  _GoToGoal_SendGoal_Request__get_serialized_size,
  _GoToGoal_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)() {
  return &_GoToGoal_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _GoToGoal_SendGoal_Response__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response;

static bool _GoToGoal_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _GoToGoal_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoToGoal_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_SendGoal_Response__ros_msg_type * ros_message = static_cast<_GoToGoal_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _GoToGoal_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_SendGoal_Response = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_SendGoal_Response",
  _GoToGoal_SendGoal_Response__cdr_serialize,
  _GoToGoal_SendGoal_Response__cdr_deserialize,
  _GoToGoal_SendGoal_Response__get_serialized_size,
  _GoToGoal_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)() {
  return &_GoToGoal_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rpi_robot_action_interfaces/action/go_to_goal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GoToGoal_SendGoal__callbacks = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal_Response)(),
};

static rosidl_service_type_support_t GoToGoal_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GoToGoal_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_SendGoal)() {
  return &GoToGoal_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoToGoal_GetResult_Request__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request;

static bool _GoToGoal_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_GetResult_Request__ros_msg_type * ros_message = static_cast<const _GoToGoal_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoToGoal_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_GetResult_Request__ros_msg_type * ros_message = static_cast<_GoToGoal_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_GetResult_Request__ros_msg_type * ros_message = static_cast<const _GoToGoal_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_GetResult_Request = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_GetResult_Request",
  _GoToGoal_GetResult_Request__cdr_serialize,
  _GoToGoal_GetResult_Request__cdr_deserialize,
  _GoToGoal_GetResult_Request__get_serialized_size,
  _GoToGoal_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)() {
  return &_GoToGoal_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Result)();


using _GoToGoal_GetResult_Response__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response;

static bool _GoToGoal_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_GetResult_Response__ros_msg_type * ros_message = static_cast<const _GoToGoal_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoToGoal_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_GetResult_Response__ros_msg_type * ros_message = static_cast<_GoToGoal_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_GetResult_Response__ros_msg_type * ros_message = static_cast<const _GoToGoal_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_GetResult_Response = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_GetResult_Response",
  _GoToGoal_GetResult_Response__cdr_serialize,
  _GoToGoal_GetResult_Response__cdr_deserialize,
  _GoToGoal_GetResult_Response__get_serialized_size,
  _GoToGoal_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)() {
  return &_GoToGoal_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/go_to_goal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GoToGoal_GetResult__callbacks = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult_Response)(),
};

static rosidl_service_type_support_t GoToGoal_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GoToGoal_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_GetResult)() {
  return &GoToGoal_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rpi_robot_action_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rpi_robot_action_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _GoToGoal_FeedbackMessage__ros_msg_type = rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage;

static bool _GoToGoal_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoToGoal_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _GoToGoal_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GoToGoal_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoToGoal_FeedbackMessage__ros_msg_type * ros_message = static_cast<_GoToGoal_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoToGoal_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _GoToGoal_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GoToGoal_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rpi_robot_action_interfaces
size_t max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GoToGoal_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoToGoal_FeedbackMessage = {
  "rpi_robot_action_interfaces::action",
  "GoToGoal_FeedbackMessage",
  _GoToGoal_FeedbackMessage__cdr_serialize,
  _GoToGoal_FeedbackMessage__cdr_deserialize,
  _GoToGoal_FeedbackMessage__get_serialized_size,
  _GoToGoal_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _GoToGoal_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoToGoal_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_robot_action_interfaces, action, GoToGoal_FeedbackMessage)() {
  return &_GoToGoal_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
