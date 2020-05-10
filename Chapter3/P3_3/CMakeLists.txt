cmake_minimum_required(VERSION 2.6)
project(p3_3)

add_definitions(-std=c++11)
add_executable(p3_3 main.cpp)

install(TARGETS p3_3 RUNTIME DESTINATION bin)