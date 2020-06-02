cmake_minimum_required(VERSION 2.6)
project(r4_3)

add_definitions(-std=c++11)
add_executable(r4_3 main.cpp)

install(TARGETS r4_3 RUNTIME DESTINATION bin)