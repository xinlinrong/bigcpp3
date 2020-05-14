cmake_minimum_required(VERSION 2.6)
project(p3_8)

add_definitions(-std=c++11)
add_executable(p3_8 main.cpp)

install(TARGETS p3_8 RUNTIME DESTINATION bin)