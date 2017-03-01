/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_ZK_STATUS_H
#define ZKSCHEDULER_ZK_STATUS_H

#include <string>

namespace zkscheduler {

struct ZKStatus {
  long node_id;
  bool ready;
  std::string address;
};

}

#endif 
