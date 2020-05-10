cmake_minimum_required(VERSION 2.6)
project(p3_2)

add_definitions(-std=c++11)
add_executable(p3_2 score.cpp main.cpp)

install(TARGETS p3_2 RUNTIME DESTINATION bin)
