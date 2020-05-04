cmake_minimum_required(VERSION 2.6)
project(e3_11)

add_definitions(-std=c++11)
add_executable(e3_11 main.cpp)

install(TARGETS e3_11 RUNTIME DESTINATION bin)
