cmake_minimum_required(VERSION 2.6)
project(p1_9)

add_definitions(-std=c++11)
add_executable(p1_9 main.cpp)

install(TARGETS p1_9 RUNTIME DESTINATION bin)
