cmake_minimum_required(VERSION 2.6)
project(e3_17)

add_definitions(-std=c++11)
add_executable(e3_17 main.cpp)

install(TARGETS e3_17 RUNTIME DESTINATION bin)
