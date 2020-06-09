cmake_minimum_required(VERSION 2.6)
project(r4_31)

add_definitions(-std=c++11)
add_executable(r4_31 main.cpp)

install(TARGETS r4_31 RUNTIME DESTINATION bin)