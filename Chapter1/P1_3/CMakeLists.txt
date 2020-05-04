cmake_minimum_required(VERSION 2.6)
project(p1_3)

add_definitions(-std=c++11)
add_executable(p1_3 main.cpp)

install(TARGETS p1_3 RUNTIME DESTINATION bin)
