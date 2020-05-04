cmake_minimum_required(VERSION 2.6)
project(r15)

add_definitions(-std=c++11)
add_executable(r15 main.cpp)

install(TARGETS r15 RUNTIME DESTINATION bin)
