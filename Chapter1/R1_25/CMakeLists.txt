cmake_minimum_required(VERSION 2.6)
project(r1_25)

add_definitions(-std=c++11)
add_executable(r1_25 main.cpp)

install(TARGETS r1_25 RUNTIME DESTINATION bin)
