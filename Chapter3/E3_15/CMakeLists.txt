cmake_minimum_required(VERSION 2.6)
project(e3_15)

add_definitions(-std=c++11)
add_executable(e3_15 main.cpp)

install(TARGETS e3_15 RUNTIME DESTINATION bin)
