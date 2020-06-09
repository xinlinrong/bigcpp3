cmake_minimum_required(VERSION 2.6)
project(r4_30)

add_definitions(-std=c++11)
add_executable(r4_30 main.cpp)

install(TARGETS r4_30 RUNTIME DESTINATION bin)