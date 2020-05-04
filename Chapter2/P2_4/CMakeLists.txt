cmake_minimum_required(VERSION 2.6)
project(p2_4)

add_definitions(-std=c++11)
add_executable(p2_4 main.cpp)

install(TARGETS p2_4 RUNTIME DESTINATION bin)
