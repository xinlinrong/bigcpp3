cmake_minimum_required(VERSION 2.6)
project(p3_4)

add_definitions(-std=c++11)
add_executable(p3_4 main.cpp)

install(TARGETS p3_4 RUNTIME DESTINATION bin)
