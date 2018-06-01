// Generated by gencpp from file Kinefly/SrvWingdata.msg
// DO NOT EDIT!


#ifndef KINEFLY_MESSAGE_SRVWINGDATA_H
#define KINEFLY_MESSAGE_SRVWINGDATA_H

#include <ros/service_traits.h>


#include <Kinefly/SrvWingdataRequest.h>
#include <Kinefly/SrvWingdataResponse.h>


namespace Kinefly
{

struct SrvWingdata
{

typedef SrvWingdataRequest Request;
typedef SrvWingdataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvWingdata
} // namespace Kinefly


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::Kinefly::SrvWingdata > {
  static const char* value()
  {
    return "0954c753798937806e030a68642c7a34";
  }

  static const char* value(const ::Kinefly::SrvWingdata&) { return value(); }
};

template<>
struct DataType< ::Kinefly::SrvWingdata > {
  static const char* value()
  {
    return "Kinefly/SrvWingdata";
  }

  static const char* value(const ::Kinefly::SrvWingdata&) { return value(); }
};


// service_traits::MD5Sum< ::Kinefly::SrvWingdataRequest> should match 
// service_traits::MD5Sum< ::Kinefly::SrvWingdata > 
template<>
struct MD5Sum< ::Kinefly::SrvWingdataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::Kinefly::SrvWingdata >::value();
  }
  static const char* value(const ::Kinefly::SrvWingdataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::Kinefly::SrvWingdataRequest> should match 
// service_traits::DataType< ::Kinefly::SrvWingdata > 
template<>
struct DataType< ::Kinefly::SrvWingdataRequest>
{
  static const char* value()
  {
    return DataType< ::Kinefly::SrvWingdata >::value();
  }
  static const char* value(const ::Kinefly::SrvWingdataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::Kinefly::SrvWingdataResponse> should match 
// service_traits::MD5Sum< ::Kinefly::SrvWingdata > 
template<>
struct MD5Sum< ::Kinefly::SrvWingdataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::Kinefly::SrvWingdata >::value();
  }
  static const char* value(const ::Kinefly::SrvWingdataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::Kinefly::SrvWingdataResponse> should match 
// service_traits::DataType< ::Kinefly::SrvWingdata > 
template<>
struct DataType< ::Kinefly::SrvWingdataResponse>
{
  static const char* value()
  {
    return DataType< ::Kinefly::SrvWingdata >::value();
  }
  static const char* value(const ::Kinefly::SrvWingdataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KINEFLY_MESSAGE_SRVWINGDATA_H
