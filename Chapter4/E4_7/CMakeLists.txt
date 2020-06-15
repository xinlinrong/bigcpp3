cmake_minimum_required(VERSION 2.6)
project(r4_7)

add_definitions(-std=c++11)
add_executable(r4_7 main.cpp)

install(TARGETS r4_7 RUNTIME DESTINATION bin)