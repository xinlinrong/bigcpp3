cmake_minimum_required(VERSION 2.6)
project(e2_4)

add_definitions(-std=c++11)
add_executable(e2_4 main.cpp)

install(TARGETS e2_4 RUNTIME DESTINATION bin)
