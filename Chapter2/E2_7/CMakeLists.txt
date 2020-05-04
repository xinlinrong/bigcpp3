cmake_minimum_required(VERSION 2.6)
project(e2_7)

add_definitions(-std=c++11)
add_executable(e2_7 main.cpp)

install(TARGETS e2_7 RUNTIME DESTINATION bin)
