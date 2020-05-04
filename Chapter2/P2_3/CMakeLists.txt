cmake_minimum_required(VERSION 2.6)
project(p2_3)

add_definitions(-std=c++11)
add_executable(p2_3 main.cpp)

install(TARGETS p2_3 RUNTIME DESTINATION bin)
