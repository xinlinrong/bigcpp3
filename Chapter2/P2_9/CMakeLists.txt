cmake_minimum_required(VERSION 2.6)
project(p2_9)

add_definitions(-std=c++11)
add_executable(p2_9 main.cpp)

install(TARGETS p2_9 RUNTIME DESTINATION bin)
