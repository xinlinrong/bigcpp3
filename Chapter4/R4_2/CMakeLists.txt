cmake_minimum_required(VERSION 2.6)
project(r4_2)

add_definitions(-std=c++11)
add_executable(r4_2 main.cpp)

install(TARGETS r4_2 RUNTIME DESTINATION bin)