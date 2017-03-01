/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_NO_COPYABLE_H
#define ZKSCHEDULER_NO_COPYABLE_H

namespace zkscheduler {

class NoCopyable {
protected:
  NoCopyable() = default;

  virtual ~NoCopyable() = default;

  NoCopyable(const NoCopyable &) = delete;

  NoCopyable &operator=(const NoCopyable &) = delete;
};

}

#endif 
