cmake_minimum_required(VERSION 2.6)
project(e1_6)

add_definitions(-std=c++11)
add_executable(e1_6 moss.cpp main.cpp)

install(TARGETS e1_6 RUNTIME DESTINATION bin)
