cmake_minimum_required(VERSION 2.6)
project(p2_13)

add_definitions(-std=c++11)
add_executable(p2_13 main.cpp)

install(TARGETS p2_13 RUNTIME DESTINATION bin)
