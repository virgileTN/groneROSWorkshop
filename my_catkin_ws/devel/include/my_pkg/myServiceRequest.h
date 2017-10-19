// Generated by gencpp from file my_pkg/myServiceRequest.msg
// DO NOT EDIT!


#ifndef MY_PKG_MESSAGE_MYSERVICEREQUEST_H
#define MY_PKG_MESSAGE_MYSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_pkg
{
template <class ContainerAllocator>
struct myServiceRequest_
{
  typedef myServiceRequest_<ContainerAllocator> Type;

  myServiceRequest_()
    : a(0)
    , b(0)  {
    }
  myServiceRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;




  typedef boost::shared_ptr< ::my_pkg::myServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_pkg::myServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct myServiceRequest_

typedef ::my_pkg::myServiceRequest_<std::allocator<void> > myServiceRequest;

typedef boost::shared_ptr< ::my_pkg::myServiceRequest > myServiceRequestPtr;
typedef boost::shared_ptr< ::my_pkg::myServiceRequest const> myServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_pkg::myServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_pkg::myServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'my_pkg': ['/home/virgile/workspace/groneROSworkshop/my_catkin_ws/devel/share/my_pkg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_pkg::myServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_pkg::myServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_pkg::myServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_pkg::myServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_pkg::myServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_pkg::myServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_pkg::myServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d09b846be0b371c5f190354dd3153e";
  }

  static const char* value(const ::my_pkg::myServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
  static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
};

template<class ContainerAllocator>
struct DataType< ::my_pkg::myServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_pkg/myServiceRequest";
  }

  static const char* value(const ::my_pkg::myServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_pkg::myServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int64 a\n\
int64 b\n\
";
  }

  static const char* value(const ::my_pkg::myServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_pkg::myServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct myServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_pkg::myServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_pkg::myServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PKG_MESSAGE_MYSERVICEREQUEST_H