cmake_minimum_required(VERSION 2.6)
project(p2_15)

add_definitions(-std=c++11)
add_executable(p2_15 main.cpp)

install(TARGETS p2_15 RUNTIME DESTINATION bin)
