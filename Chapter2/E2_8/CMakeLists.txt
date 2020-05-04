cmake_minimum_required(VERSION 2.6)
project(e2_8)

add_definitions(-std=c++11)
add_executable(e2_8 main.cpp)

install(TARGETS e2_8 RUNTIME DESTINATION bin)
