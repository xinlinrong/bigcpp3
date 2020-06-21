cmake_minimum_required(VERSION 2.6)
project(r4_12)

add_definitions(-std=c++11)
add_executable(r4_12 main.cpp)

install(TARGETS r4_12 RUNTIME DESTINATION bin)