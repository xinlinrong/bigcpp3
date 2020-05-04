cmake_minimum_required(VERSION 2.6)
project(r1_21)

add_definitions(-std=c++11)
add_executable(r1_21 main.cpp)

install(TARGETS r1_21 RUNTIME DESTINATION bin)
