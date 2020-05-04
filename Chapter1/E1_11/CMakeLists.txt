cmake_minimum_required(VERSION 2.6)
project(e1_11)

add_definitions(-std=c++11)
add_executable(e1_11 main.cpp)

install(TARGETS e1_11 RUNTIME DESTINATION bin)
