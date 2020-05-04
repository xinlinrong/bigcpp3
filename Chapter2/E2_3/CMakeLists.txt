cmake_minimum_required(VERSION 2.6)
project(e2_3)

add_definitions(-std=c++11)
add_executable(e2_3 main.cpp)

install(TARGETS e2_3 RUNTIME DESTINATION bin)
