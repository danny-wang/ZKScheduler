cmake_minimum_required(VERSION 3.6)
project(zkscheduler)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(include)

set(SOURCE_FILES
        src/zkscheduler/cluster/cluster_node.cpp
        include/zkscheduler/net/base/stream_buffer.h
        include/zkscheduler/net/base/message.h
        include/zkscheduler/net/serialize/serializer.h
        include/zkscheduler/net/serialize/deserializer.h
        include/zkscheduler/net/codec/coder.h
        include/zkscheduler/net/codec/decoder.h
        )

add_executable(zkscheduler ${SOURCE_FILES})

find_package(Boost 1.62 REQUIRED)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(zkscheduler ${Boost_LIBRARIES})
endif (Boost_FOUND)

find_package(Zookeeper 3.4.9 REQUIRED)
if (Zookeeper_FOUND)
    include_directories(${Zookeeper_INCLUDE_DIRS})
    target_link_libraries(zkscheduler ${Zookeeper_LIBRARIES})
endif ()