/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_SERIALIZER_H
#define ZKSCHEDULER_SERIALIZER_H

#include <boost/archive/text_oarchive.hpp>
#include "zkscheduler/net/base/message.h"
#include "zkscheduler/net/base/stream_buffer.h"

namespace zkscheduler {

struct Serializer {
  template<typename T>
  bool operator()(Message &msg, T &&t) {
    try {
      std::ostream ss(&msg.buffer());
      boost::archive::text_oarchive oa(ss);
      oa << t;
      return true;
    } catch (...) {
      return false;
    }
  }
};

}

#endif 
