cmake_minimum_required(VERSION 2.6)
project(r4_16-18)

add_definitions(-std=c++11)
add_executable(r4_16-18 main.cpp)

install(TARGETS r4_16-18 RUNTIME DESTINATION bin)