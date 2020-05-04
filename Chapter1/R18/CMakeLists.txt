cmake_minimum_required(VERSION 2.6)
project(r18)

add_definitions(-std=c++11)
add_executable(r18 main.cpp)

install(TARGETS r18 RUNTIME DESTINATION bin)
