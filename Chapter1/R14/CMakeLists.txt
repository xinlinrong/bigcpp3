cmake_minimum_required(VERSION 2.6)
project(r14)

add_definitions(-std=c++11)
add_executable(r14 area.cpp main.cpp)

install(TARGETS r14 RUNTIME DESTINATION bin)
