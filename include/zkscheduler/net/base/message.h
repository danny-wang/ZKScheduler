/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_MESSAGE_H
#define ZKSCHEDULER_MESSAGE_H

#include <deque>
#include <string>

namespace zkscheduler {

class StreamBuffer;

class Message {
public:

  std::deque<StreamBuffer> &buffers();

  const std::deque<StreamBuffer> &buffers() const;

  StreamBuffer &buffer();

  const StreamBuffer &buffer() const;

private:
  std::deque<StreamBuffer> buffers_;
  long from_id_;
  std::string to_;
  int type_;
};

}

#endif 
