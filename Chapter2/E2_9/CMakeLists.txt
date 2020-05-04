cmake_minimum_required(VERSION 2.6)
project(e2_9)

add_definitions(-std=c++11)
add_executable(e2_9 main.cpp)

install(TARGETS e2_9 RUNTIME DESTINATION bin)
