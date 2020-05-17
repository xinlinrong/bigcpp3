cmake_minimum_required(VERSION 2.6)
project(p3_10-12)

add_definitions(-std=c++11)
add_executable(p3_10-12 shape.cpp main.cpp)

install(TARGETS p3_10-12 RUNTIME DESTINATION bin)