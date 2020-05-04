cmake_minimum_required(VERSION 2.6)
project(e3_5)

add_definitions(-std=c++11)
add_executable(e3_5 main.cpp)

install(TARGETS e3_5 RUNTIME DESTINATION bin)
