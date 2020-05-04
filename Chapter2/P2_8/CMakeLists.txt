cmake_minimum_required(VERSION 2.6)
project(p2_8)

add_definitions(-std=c++11)
add_executable(p2_8 main.cpp)

install(TARGETS p2_8 RUNTIME DESTINATION bin)
