cmake_minimum_required(VERSION 2.6)
project(e2_10)

add_definitions(-std=c++11)
add_executable(e2_10 main.cpp)

install(TARGETS e2_10 RUNTIME DESTINATION bin)
