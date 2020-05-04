cmake_minimum_required(VERSION 2.6)
project(e_13)

add_definitions(-std=c++11)
add_executable(e_13 main.cpp)

install(TARGETS e_13 RUNTIME DESTINATION bin)
