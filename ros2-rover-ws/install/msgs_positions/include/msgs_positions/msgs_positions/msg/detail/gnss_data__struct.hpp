// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgs_positions:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_
#define MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msgs_positions__msg__GnssData __attribute__((deprecated))
#else
# define DEPRECATED__msgs_positions__msg__GnssData __declspec(deprecated)
#endif

namespace msgs_positions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssData_
{
  using Type = GnssData_<ContainerAllocator>;

  explicit GnssData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->date = "";
      this->time = "";
      this->num_satellites = 0l;
      this->fix = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
    }
  }

  explicit GnssData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : date(_alloc),
    time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->date = "";
      this->time = "";
      this->num_satellites = 0l;
      this->fix = false;
      this->latitude = 0.0;
      this->longitude = 0.0;
    }
  }

  // field types and members
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_type time;
  using _num_satellites_type =
    int32_t;
  _num_satellites_type num_satellites;
  using _fix_type =
    bool;
  _fix_type fix;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;

  // setters for named parameter idiom
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__num_satellites(
    const int32_t & _arg)
  {
    this->num_satellites = _arg;
    return *this;
  }
  Type & set__fix(
    const bool & _arg)
  {
    this->fix = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_positions::msg::GnssData_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_positions::msg::GnssData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_positions::msg::GnssData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_positions::msg::GnssData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_positions::msg::GnssData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_positions::msg::GnssData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_positions::msg::GnssData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_positions::msg::GnssData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_positions::msg::GnssData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_positions::msg::GnssData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_positions__msg__GnssData
    std::shared_ptr<msgs_positions::msg::GnssData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_positions__msg__GnssData
    std::shared_ptr<msgs_positions::msg::GnssData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssData_ & other) const
  {
    if (this->date != other.date) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->num_satellites != other.num_satellites) {
      return false;
    }
    if (this->fix != other.fix) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssData_

// alias to use template instance with default allocator
using GnssData =
  msgs_positions::msg::GnssData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msgs_positions

#endif  // MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_
