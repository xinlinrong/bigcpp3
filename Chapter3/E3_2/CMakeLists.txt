cmake_minimum_required(VERSION 2.6)
project(e3_2)

add_definitions(-std=c++11)
add_executable(e3_2 main.cpp)

install(TARGETS e3_2 RUNTIME DESTINATION bin)
