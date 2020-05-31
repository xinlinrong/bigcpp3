cmake_minimum_required(VERSION 2.6)
project(p3_26)

add_definitions(-std=c++11)
add_executable(p3_26 main.cpp)

install(TARGETS p3_26 RUNTIME DESTINATION bin)