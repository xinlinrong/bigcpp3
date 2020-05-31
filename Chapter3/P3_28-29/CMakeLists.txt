cmake_minimum_required(VERSION 2.6)
project(p3_28-29)

add_definitions(-std=c++11)
add_executable(p3_28-29 main.cpp)

install(TARGETS p3_28-29 RUNTIME DESTINATION bin)