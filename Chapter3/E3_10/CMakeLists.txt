cmake_minimum_required(VERSION 2.6)
project(e3_10)

add_definitions(-std=c++11)
add_executable(e3_10 main.cpp)

install(TARGETS e3_10 RUNTIME DESTINATION bin)
