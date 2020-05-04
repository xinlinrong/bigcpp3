cmake_minimum_required(VERSION 2.6)
project(r1_23)

add_definitions(-std=c++11)

add_executable(r1_23 robot.cpp map.cpp main.cpp)

install(TARGETS r1_23 RUNTIME DESTINATION bin)
