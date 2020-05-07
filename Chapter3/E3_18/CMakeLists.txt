cmake_minimum_required(VERSION 2.6)
project(e3_18)

add_definitions(-std=c++11)
add_executable(e3_18 main.cpp)

install(TARGETS e3_18 RUNTIME DESTINATION bin)
