cmake_minimum_required(VERSION 2.6)
project(p2_17)

add_definitions(-std=c++11)
add_executable(p2_17 main.cpp)

install(TARGETS p2_17 RUNTIME DESTINATION bin)
