cmake_minimum_required(VERSION 2.6)
project(p2_7)

add_definitions(-std=c++11)
add_executable(p2_7 main.cpp)

install(TARGETS p2_7 RUNTIME DESTINATION bin)
