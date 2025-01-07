// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice
#include "hapthexa_msgs/msg/detail/force_sensor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hapthexa_msgs/msg/detail/force_sensor__functions.h"
#include "hapthexa_msgs/msg/detail/force_sensor__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hapthexa_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_serialize(
  const hapthexa_msgs::msg::ForceSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: loadcell1
  cdr << ros_message.loadcell1;

  // Member: loadcell2
  cdr << ros_message.loadcell2;

  // Member: piezo
  cdr << ros_message.piezo;

  // Member: radial_direction
  cdr << ros_message.radial_direction;

  // Member: radial_magnitude
  cdr << ros_message.radial_magnitude;

  // Member: loadcell1_raw
  cdr << ros_message.loadcell1_raw;

  // Member: loadcell2_raw
  cdr << ros_message.loadcell2_raw;

  // Member: piezo_raw
  cdr << ros_message.piezo_raw;

  // Member: x
  cdr << (ros_message.x ? true : false);

  // Member: y
  cdr << (ros_message.y ? true : false);

  // Member: z
  cdr << (ros_message.z ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hapthexa_msgs::msg::ForceSensor & ros_message)
{
  // Member: loadcell1
  cdr >> ros_message.loadcell1;

  // Member: loadcell2
  cdr >> ros_message.loadcell2;

  // Member: piezo
  cdr >> ros_message.piezo;

  // Member: radial_direction
  cdr >> ros_message.radial_direction;

  // Member: radial_magnitude
  cdr >> ros_message.radial_magnitude;

  // Member: loadcell1_raw
  cdr >> ros_message.loadcell1_raw;

  // Member: loadcell2_raw
  cdr >> ros_message.loadcell2_raw;

  // Member: piezo_raw
  cdr >> ros_message.piezo_raw;

  // Member: x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.x = tmp ? true : false;
  }

  // Member: y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.y = tmp ? true : false;
  }

  // Member: z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.z = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
get_serialized_size(
  const hapthexa_msgs::msg::ForceSensor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: loadcell1
  {
    size_t item_size = sizeof(ros_message.loadcell1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell2
  {
    size_t item_size = sizeof(ros_message.loadcell2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: piezo
  {
    size_t item_size = sizeof(ros_message.piezo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: radial_direction
  {
    size_t item_size = sizeof(ros_message.radial_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: radial_magnitude
  {
    size_t item_size = sizeof(ros_message.radial_magnitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell1_raw
  {
    size_t item_size = sizeof(ros_message.loadcell1_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell2_raw
  {
    size_t item_size = sizeof(ros_message.loadcell2_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: piezo_raw
  {
    size_t item_size = sizeof(ros_message.piezo_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
max_serialized_size_ForceSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: loadcell1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: loadcell2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: piezo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: radial_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: radial_magnitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: loadcell1_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: loadcell2_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: piezo_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hapthexa_msgs::msg::ForceSensor;
    is_plain =
      (
      offsetof(DataType, z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
cdr_serialize_key(
  const hapthexa_msgs::msg::ForceSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: loadcell1
  cdr << ros_message.loadcell1;

  // Member: loadcell2
  cdr << ros_message.loadcell2;

  // Member: piezo
  cdr << ros_message.piezo;

  // Member: radial_direction
  cdr << ros_message.radial_direction;

  // Member: radial_magnitude
  cdr << ros_message.radial_magnitude;

  // Member: loadcell1_raw
  cdr << ros_message.loadcell1_raw;

  // Member: loadcell2_raw
  cdr << ros_message.loadcell2_raw;

  // Member: piezo_raw
  cdr << ros_message.piezo_raw;

  // Member: x
  cdr << (ros_message.x ? true : false);

  // Member: y
  cdr << (ros_message.y ? true : false);

  // Member: z
  cdr << (ros_message.z ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
get_serialized_size_key(
  const hapthexa_msgs::msg::ForceSensor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: loadcell1
  {
    size_t item_size = sizeof(ros_message.loadcell1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell2
  {
    size_t item_size = sizeof(ros_message.loadcell2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: piezo
  {
    size_t item_size = sizeof(ros_message.piezo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: radial_direction
  {
    size_t item_size = sizeof(ros_message.radial_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: radial_magnitude
  {
    size_t item_size = sizeof(ros_message.radial_magnitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell1_raw
  {
    size_t item_size = sizeof(ros_message.loadcell1_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loadcell2_raw
  {
    size_t item_size = sizeof(ros_message.loadcell2_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: piezo_raw
  {
    size_t item_size = sizeof(ros_message.piezo_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hapthexa_msgs
max_serialized_size_key_ForceSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: loadcell1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loadcell2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: piezo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: radial_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: radial_magnitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loadcell1_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loadcell2_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: piezo_raw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hapthexa_msgs::msg::ForceSensor;
    is_plain =
      (
      offsetof(DataType, z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ForceSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hapthexa_msgs::msg::ForceSensor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ForceSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hapthexa_msgs::msg::ForceSensor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ForceSensor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hapthexa_msgs::msg::ForceSensor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ForceSensor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ForceSensor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ForceSensor__callbacks = {
  "hapthexa_msgs::msg",
  "ForceSensor",
  _ForceSensor__cdr_serialize,
  _ForceSensor__cdr_deserialize,
  _ForceSensor__get_serialized_size,
  _ForceSensor__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ForceSensor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ForceSensor__callbacks,
  get_message_typesupport_handle_function,
  &hapthexa_msgs__msg__ForceSensor__get_type_hash,
  &hapthexa_msgs__msg__ForceSensor__get_type_description,
  &hapthexa_msgs__msg__ForceSensor__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hapthexa_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hapthexa_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hapthexa_msgs::msg::ForceSensor>()
{
  return &hapthexa_msgs::msg::typesupport_fastrtps_cpp::_ForceSensor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hapthexa_msgs, msg, ForceSensor)() {
  return &hapthexa_msgs::msg::typesupport_fastrtps_cpp::_ForceSensor__handle;
}

#ifdef __cplusplus
}
#endif
