/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_DECODER_H
#define ZKSCHEDULER_DECODER_H

namespace zkscheduler {

class Message;

struct MessageDecoder {
  virtual ~MessageDecoder();

  virtual bool Decode(Message &msg) = 0;
};

struct HeadLengthDecoder : public MessageDecoder {
  virtual bool Decode(Message &msg) override;
};

struct MessageTypeDecoder : public MessageDecoder {
  virtual bool Decode(Message &msg) override;
};

}

#endif 
