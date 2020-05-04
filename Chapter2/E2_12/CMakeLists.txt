cmake_minimum_required(VERSION 2.6)
project(e2_12)

add_definitions(-std=c++11)
add_executable(e2_12 main.cpp)

install(TARGETS e2_12 RUNTIME DESTINATION bin)
