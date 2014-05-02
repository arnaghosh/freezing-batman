/* Auto-generated by genmsg_cpp for file /home/krishna/fuerte_workspace/sandbox/freezing-batman/applications/eklavya/pilot/eklavya_roboteq/srv/SetSpeed.srv */
#ifndef EKLAVYA_ROBOTEQ_SERVICE_SETSPEED_H
#define EKLAVYA_ROBOTEQ_SERVICE_SETSPEED_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace eklavya_roboteq
{
template <class ContainerAllocator>
struct SetSpeedRequest_ {
  typedef SetSpeedRequest_<ContainerAllocator> Type;

  SetSpeedRequest_()
  : left_speed(0)
  , right_speed(0)
  {
  }

  SetSpeedRequest_(const ContainerAllocator& _alloc)
  : left_speed(0)
  , right_speed(0)
  {
  }

  typedef int64_t _left_speed_type;
  int64_t left_speed;

  typedef int64_t _right_speed_type;
  int64_t right_speed;


  typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetSpeedRequest
typedef  ::eklavya_roboteq::SetSpeedRequest_<std::allocator<void> > SetSpeedRequest;

typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedRequest> SetSpeedRequestPtr;
typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedRequest const> SetSpeedRequestConstPtr;


template <class ContainerAllocator>
struct SetSpeedResponse_ {
  typedef SetSpeedResponse_<ContainerAllocator> Type;

  SetSpeedResponse_()
  : code(0)
  {
  }

  SetSpeedResponse_(const ContainerAllocator& _alloc)
  : code(0)
  {
  }

  typedef int64_t _code_type;
  int64_t code;


  typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetSpeedResponse
typedef  ::eklavya_roboteq::SetSpeedResponse_<std::allocator<void> > SetSpeedResponse;

typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedResponse> SetSpeedResponsePtr;
typedef boost::shared_ptr< ::eklavya_roboteq::SetSpeedResponse const> SetSpeedResponseConstPtr;

struct SetSpeed
{

typedef SetSpeedRequest Request;
typedef SetSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetSpeed
} // namespace eklavya_roboteq

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0e0c05cffc768dcd7d6b1b4e756a56bd";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0e0c05cffc768dcdULL;
  static const uint64_t static_value2 = 0x7d6b1b4e756a56bdULL;
};

template<class ContainerAllocator>
struct DataType< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eklavya_roboteq/SetSpeedRequest";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 left_speed\n\
int64 right_speed\n\
\n\
";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d22a20575d971189f657a3ebfec7403a";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd22a20575d971189ULL;
  static const uint64_t static_value2 = 0xf657a3ebfec7403aULL;
};

template<class ContainerAllocator>
struct DataType< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eklavya_roboteq/SetSpeedResponse";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 code\n\
\n\
\n\
";
  }

  static const char* value(const  ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.left_speed);
    stream.next(m.right_speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetSpeedRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.code);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetSpeedResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<eklavya_roboteq::SetSpeed> {
  static const char* value() 
  {
    return "c9c458c5a00e8258568427405d7b4a58";
  }

  static const char* value(const eklavya_roboteq::SetSpeed&) { return value(); } 
};

template<>
struct DataType<eklavya_roboteq::SetSpeed> {
  static const char* value() 
  {
    return "eklavya_roboteq/SetSpeed";
  }

  static const char* value(const eklavya_roboteq::SetSpeed&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c9c458c5a00e8258568427405d7b4a58";
  }

  static const char* value(const eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eklavya_roboteq/SetSpeed";
  }

  static const char* value(const eklavya_roboteq::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c9c458c5a00e8258568427405d7b4a58";
  }

  static const char* value(const eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eklavya_roboteq/SetSpeed";
  }

  static const char* value(const eklavya_roboteq::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // EKLAVYA_ROBOTEQ_SERVICE_SETSPEED_H

