cmake_minimum_required(VERSION 2.6)
project(p3_14)

add_definitions(-std=c++11)
add_executable(p3_14 main.cpp)

install(TARGETS p3_14 RUNTIME DESTINATION bin)
