cmake_minimum_required(VERSION 2.6)
project(r1_22)

add_definitions(-std=c++11)
add_executable(r1_22 robot.cpp grassplot.cpp main.cpp)

install(TARGETS r1_22 RUNTIME DESTINATION bin)
