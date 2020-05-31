cmake_minimum_required(VERSION 2.6)
project(p3_21-23)

add_definitions(-std=c++11)
add_executable(p3_21-23 main.cpp)

install(TARGETS p3_21-23 RUNTIME DESTINATION bin)