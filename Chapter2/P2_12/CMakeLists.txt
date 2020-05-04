cmake_minimum_required(VERSION 2.6)
project(p2_12)

add_definitions(-std=c++11)
add_executable(p2_12 main.cpp)

install(TARGETS p2_12 RUNTIME DESTINATION bin)
