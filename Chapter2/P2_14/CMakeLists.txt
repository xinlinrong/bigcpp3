cmake_minimum_required(VERSION 2.6)
project(p2_14)

add_definitions(-std=c++11)
add_executable(p2_14 main.cpp)

install(TARGETS p2_14 RUNTIME DESTINATION bin)
