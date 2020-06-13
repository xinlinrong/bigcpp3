cmake_minimum_required(VERSION 2.6)
project(e4_1)

add_definitions(-std=c++11)
add_executable(e4_1 main.cpp)

install(TARGETS e4_1 RUNTIME DESTINATION bin)