cmake_minimum_required(VERSION 2.6)
project(p3_9)

add_definitions(-std=c++11)
add_executable(p3_9 main.cpp)

install(TARGETS p3_9 RUNTIME DESTINATION bin)