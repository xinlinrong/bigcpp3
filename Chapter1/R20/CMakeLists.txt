cmake_minimum_required(VERSION 2.6)
project(r20)

add_definitions(-std=c++11)
add_executable(r20 rectangle.cpp main.cpp)

install(TARGETS r20 RUNTIME DESTINATION bin)
