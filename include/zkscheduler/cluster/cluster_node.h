/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_CLUSTER_NODE_H
#define ZKSCHEDULER_CLUSTER_NODE_H

#include <string>

#include "zkscheduler/utils/no_copyable.h"

namespace zkscheduler {

class ClusterNode : public NoCopyable {
public:
  enum class Role {
    Master, Slave
  };

  virtual void Start() = 0;

  virtual void Stop() = 0;

  virtual void Serve() = 0;

  virtual Role role() const = 0;

protected:

  unsigned int port;
  std::string host;

};

}

#endif 
