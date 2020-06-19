cmake_minimum_required(VERSION 2.6)
project(r4_8-11)

add_definitions(-std=c++11)
add_executable(r4_8-11 main.cpp)

install(TARGETS r4_8-11 RUNTIME DESTINATION bin)