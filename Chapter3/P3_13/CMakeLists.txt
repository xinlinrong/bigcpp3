cmake_minimum_required(VERSION 2.6)
project(p3_13)

add_definitions(-std=c++11)
add_executable(p3_13 main.cpp)

install(TARGETS p3_13 RUNTIME DESTINATION bin)
