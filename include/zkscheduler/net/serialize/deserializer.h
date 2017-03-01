/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_DESERIALIZER_H
#define ZKSCHEDULER_DESERIALIZER_H

#include <boost/archive/text_iarchive.hpp>
#include "zkscheduler/net/base/message.h"
#include "zkscheduler/net/base/stream_buffer.h"

namespace zkscheduler {

struct Deserializer {
  template<typename T>
  bool operator()(Message &msg, T &&t) {
    try {
      std::istream ss(&msg.buffer());
      boost::archive::text_iarchive ia(ss);
      ia >> t;
      return true;
    } catch (...) {
      false;
    }
  }
};

}

#endif 
