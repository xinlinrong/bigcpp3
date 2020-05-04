cmake_minimum_required(VERSION 2.6)
project(p2_5)

add_definitions(-std=c++11)
add_executable(p2_5 main.cpp)

install(TARGETS p2_5 RUNTIME DESTINATION bin)
