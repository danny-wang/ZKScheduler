/*
* Created by suemi on 2017/3/1.
*/

#ifndef ZKSCHEDULER_STREAM_BUFFER_H
#define ZKSCHEDULER_STREAM_BUFFER_H

#include <streambuf>
#include <vector>

namespace zkscheduler {

class StreamBuffer : public std::streambuf {
public:

private:
  std::vector<char> buf_;
};

}

#endif 
