cmake_minimum_required(VERSION 2.6)
project(p3_17)

add_definitions(-std=c++11)
add_executable(p3_17 main.cpp)

install(TARGETS p3_17 RUNTIME DESTINATION bin)
