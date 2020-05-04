cmake_minimum_required(VERSION 2.6)
project(e3_7)

add_definitions(-std=c++11)
add_executable(e3_7 main.cpp)

install(TARGETS e3_7 RUNTIME DESTINATION bin)
