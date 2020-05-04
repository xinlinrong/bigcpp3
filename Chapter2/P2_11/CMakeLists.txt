cmake_minimum_required(VERSION 2.6)
project(p2_11)

add_definitions(-std=c++11)
add_executable(p2_11 main.cpp)

install(TARGETS p2_11 RUNTIME DESTINATION bin)
