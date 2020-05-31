cmake_minimum_required(VERSION 2.6)
project(p3_27)

add_definitions(-std=c++11)
add_executable(p3_27 main.cpp)

install(TARGETS p3_27 RUNTIME DESTINATION bin)