cmake_minimum_required(VERSION 2.6)
project(e1_4)

add_definitions(-std=c++11)
add_executable(e1_4 main.cpp)

install(TARGETS e1_4 RUNTIME DESTINATION bin)
