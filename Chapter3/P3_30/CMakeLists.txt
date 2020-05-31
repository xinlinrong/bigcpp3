cmake_minimum_required(VERSION 2.6)
project(p3_30)

add_definitions(-std=c++11)
add_executable(p3_30 main.cpp)

install(TARGETS p3_30 RUNTIME DESTINATION bin)