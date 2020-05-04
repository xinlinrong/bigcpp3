cmake_minimum_required(VERSION 2.6)
project(p2_2)

add_definitions(-std=c++11)
add_executable(p2_2 triangle.cpp main.cpp)

install(TARGETS p2_2 RUNTIME DESTINATION bin)
