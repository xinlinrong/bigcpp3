cmake_minimum_required(VERSION 2.6)
project(p3_6)

add_definitions(-std=c++11)
add_executable(p3_6 main.cpp)

install(TARGETS p3_6 RUNTIME DESTINATION bin)
