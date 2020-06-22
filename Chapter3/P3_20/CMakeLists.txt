cmake_minimum_required(VERSION 2.6)
project(p3_20)

add_definitions(-std=c++11)
add_executable(p3_20 main.cpp)

install(TARGETS p3_20 RUNTIME DESTINATION bin)
