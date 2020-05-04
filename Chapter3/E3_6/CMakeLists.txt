cmake_minimum_required(VERSION 2.6)
project(e3_6)

add_definitions(-std=c++11)
add_executable(e3_6 main.cpp)

install(TARGETS e3_6 RUNTIME DESTINATION bin)
