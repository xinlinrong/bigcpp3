cmake_minimum_required(VERSION 2.6)
project(p3_5)

add_definitions(-std=c++11)
add_executable(p3_5 main.cpp)

install(TARGETS p3_5 RUNTIME DESTINATION bin)
