cmake_minimum_required(VERSION 2.6)
project(r4_4)

add_definitions(-std=c++11)
add_executable(r4_4 main.cpp)

install(TARGETS r4_4 RUNTIME DESTINATION bin)