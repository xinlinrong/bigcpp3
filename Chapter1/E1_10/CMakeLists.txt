cmake_minimum_required(VERSION 2.6)
project(e1_10)

add_definitions(-std=c++11)
add_executable(e1_10 main.cpp)

install(TARGETS e1_10 RUNTIME DESTINATION bin)
