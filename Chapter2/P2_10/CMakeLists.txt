cmake_minimum_required(VERSION 2.6)
project(p2_10)

add_definitions(-std=c++11)
add_executable(p2_10 main.cpp)

install(TARGETS p2_10 RUNTIME DESTINATION bin)
