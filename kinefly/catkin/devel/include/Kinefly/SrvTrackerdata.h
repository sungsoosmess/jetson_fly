// Generated by gencpp from file Kinefly/SrvTrackerdata.msg
// DO NOT EDIT!


#ifndef KINEFLY_MESSAGE_SRVTRACKERDATA_H
#define KINEFLY_MESSAGE_SRVTRACKERDATA_H

#include <ros/service_traits.h>


#include <Kinefly/SrvTrackerdataRequest.h>
#include <Kinefly/SrvTrackerdataResponse.h>


namespace Kinefly
{

struct SrvTrackerdata
{

typedef SrvTrackerdataRequest Request;
typedef SrvTrackerdataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTrackerdata
} // namespace Kinefly


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::Kinefly::SrvTrackerdata > {
  static const char* value()
  {
    return "5213ef3e7b03bcf8c710a40803ffe14a";
  }

  static const char* value(const ::Kinefly::SrvTrackerdata&) { return value(); }
};

template<>
struct DataType< ::Kinefly::SrvTrackerdata > {
  static const char* value()
  {
    return "Kinefly/SrvTrackerdata";
  }

  static const char* value(const ::Kinefly::SrvTrackerdata&) { return value(); }
};


// service_traits::MD5Sum< ::Kinefly::SrvTrackerdataRequest> should match 
// service_traits::MD5Sum< ::Kinefly::SrvTrackerdata > 
template<>
struct MD5Sum< ::Kinefly::SrvTrackerdataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::Kinefly::SrvTrackerdata >::value();
  }
  static const char* value(const ::Kinefly::SrvTrackerdataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::Kinefly::SrvTrackerdataRequest> should match 
// service_traits::DataType< ::Kinefly::SrvTrackerdata > 
template<>
struct DataType< ::Kinefly::SrvTrackerdataRequest>
{
  static const char* value()
  {
    return DataType< ::Kinefly::SrvTrackerdata >::value();
  }
  static const char* value(const ::Kinefly::SrvTrackerdataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::Kinefly::SrvTrackerdataResponse> should match 
// service_traits::MD5Sum< ::Kinefly::SrvTrackerdata > 
template<>
struct MD5Sum< ::Kinefly::SrvTrackerdataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::Kinefly::SrvTrackerdata >::value();
  }
  static const char* value(const ::Kinefly::SrvTrackerdataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::Kinefly::SrvTrackerdataResponse> should match 
// service_traits::DataType< ::Kinefly::SrvTrackerdata > 
template<>
struct DataType< ::Kinefly::SrvTrackerdataResponse>
{
  static const char* value()
  {
    return DataType< ::Kinefly::SrvTrackerdata >::value();
  }
  static const char* value(const ::Kinefly::SrvTrackerdataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KINEFLY_MESSAGE_SRVTRACKERDATA_H
