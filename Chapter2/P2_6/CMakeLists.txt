cmake_minimum_required(VERSION 2.6)
project(p2_6)

add_definitions(-std=c++11)
add_executable(p2_6 main.cpp)

install(TARGETS p2_6 RUNTIME DESTINATION bin)
