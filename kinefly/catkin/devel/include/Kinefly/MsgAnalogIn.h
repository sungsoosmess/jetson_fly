// Generated by gencpp from file Kinefly/MsgAnalogIn.msg
// DO NOT EDIT!


#ifndef KINEFLY_MESSAGE_MSGANALOGIN_H
#define KINEFLY_MESSAGE_MSGANALOGIN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace Kinefly
{
template <class ContainerAllocator>
struct MsgAnalogIn_
{
  typedef MsgAnalogIn_<ContainerAllocator> Type;

  MsgAnalogIn_()
    : header()
    , channels()
    , voltages()  {
    }
  MsgAnalogIn_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , channels(_alloc)
    , voltages(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _channels_type;
  _channels_type channels;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _voltages_type;
  _voltages_type voltages;




  typedef boost::shared_ptr< ::Kinefly::MsgAnalogIn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Kinefly::MsgAnalogIn_<ContainerAllocator> const> ConstPtr;

}; // struct MsgAnalogIn_

typedef ::Kinefly::MsgAnalogIn_<std::allocator<void> > MsgAnalogIn;

typedef boost::shared_ptr< ::Kinefly::MsgAnalogIn > MsgAnalogInPtr;
typedef boost::shared_ptr< ::Kinefly::MsgAnalogIn const> MsgAnalogInConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::Kinefly::MsgAnalogIn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace Kinefly

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'Kinefly': ['/home/nvidia/kinefly_catkin_ws/src/Kinefly/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::Kinefly::MsgAnalogIn_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::Kinefly::MsgAnalogIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Kinefly::MsgAnalogIn_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1104d288960ba3fc4b4f45dd14127fa";
  }

  static const char* value(const ::Kinefly::MsgAnalogIn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1104d288960ba3fULL;
  static const uint64_t static_value2 = 0xc4b4f45dd14127faULL;
};

template<class ContainerAllocator>
struct DataType< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Kinefly/MsgAnalogIn";
  }

  static const char* value(const ::Kinefly::MsgAnalogIn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int8[] channels\n\
float64[] voltages\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::Kinefly::MsgAnalogIn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.channels);
      stream.next(m.voltages);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgAnalogIn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Kinefly::MsgAnalogIn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::Kinefly::MsgAnalogIn_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "channels[]" << std::endl;
    for (size_t i = 0; i < v.channels.size(); ++i)
    {
      s << indent << "  channels[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.channels[i]);
    }
    s << indent << "voltages[]" << std::endl;
    for (size_t i = 0; i < v.voltages.size(); ++i)
    {
      s << indent << "  voltages[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.voltages[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINEFLY_MESSAGE_MSGANALOGIN_H
