// Generated by gencpp from file my_pkg/myService.msg
// DO NOT EDIT!


#ifndef MY_PKG_MESSAGE_MYSERVICE_H
#define MY_PKG_MESSAGE_MYSERVICE_H

#include <ros/service_traits.h>


#include <my_pkg/myServiceRequest.h>
#include <my_pkg/myServiceResponse.h>


namespace my_pkg
{

struct myService
{

typedef myServiceRequest Request;
typedef myServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct myService
} // namespace my_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::my_pkg::myService > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::my_pkg::myService&) { return value(); }
};

template<>
struct DataType< ::my_pkg::myService > {
  static const char* value()
  {
    return "my_pkg/myService";
  }

  static const char* value(const ::my_pkg::myService&) { return value(); }
};


// service_traits::MD5Sum< ::my_pkg::myServiceRequest> should match 
// service_traits::MD5Sum< ::my_pkg::myService > 
template<>
struct MD5Sum< ::my_pkg::myServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::my_pkg::myService >::value();
  }
  static const char* value(const ::my_pkg::myServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_pkg::myServiceRequest> should match 
// service_traits::DataType< ::my_pkg::myService > 
template<>
struct DataType< ::my_pkg::myServiceRequest>
{
  static const char* value()
  {
    return DataType< ::my_pkg::myService >::value();
  }
  static const char* value(const ::my_pkg::myServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::my_pkg::myServiceResponse> should match 
// service_traits::MD5Sum< ::my_pkg::myService > 
template<>
struct MD5Sum< ::my_pkg::myServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::my_pkg::myService >::value();
  }
  static const char* value(const ::my_pkg::myServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_pkg::myServiceResponse> should match 
// service_traits::DataType< ::my_pkg::myService > 
template<>
struct DataType< ::my_pkg::myServiceResponse>
{
  static const char* value()
  {
    return DataType< ::my_pkg::myService >::value();
  }
  static const char* value(const ::my_pkg::myServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MY_PKG_MESSAGE_MYSERVICE_H