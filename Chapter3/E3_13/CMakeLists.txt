cmake_minimum_required(VERSION 2.6)
project(e3_13)

add_definitions(-std=c++11)
add_executable(e3_13 main.cpp)

install(TARGETS e3_13 RUNTIME DESTINATION bin)
