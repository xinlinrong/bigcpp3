cmake_minimum_required(VERSION 2.6)
project(r4_6)

add_definitions(-std=c++11)
add_executable(r4_6 main.cpp)

install(TARGETS r4_6 RUNTIME DESTINATION bin)