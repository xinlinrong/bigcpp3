cmake_minimum_required(VERSION 2.6)
project(r4_5)

add_definitions(-std=c++11)
add_executable(r4_5 main.cpp)

install(TARGETS r4_5 RUNTIME DESTINATION bin)