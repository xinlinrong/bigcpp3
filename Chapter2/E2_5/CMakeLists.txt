cmake_minimum_required(VERSION 2.6)
project(e2_5)

add_definitions(-std=c++11)
add_executable(e2_5 main.cpp)

install(TARGETS e2_5 RUNTIME DESTINATION bin)
