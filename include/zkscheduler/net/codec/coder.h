/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_CODER_H
#define ZKSCHEDULER_CODER_H

namespace zkscheduler {

class Message;

struct MessageCoder {
  virtual bool Codec(Message &msg) = 0;

  virtual ~MessageCoder();
};

struct HeadLengthCoder : public MessageCoder {
  virtual bool Codec(Message &msg) override;
};

struct MessageTypeCoder : public MessageCoder {
  virtual bool Codec(Message &msg) override;
};

}

#endif 
