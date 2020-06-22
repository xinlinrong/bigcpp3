cmake_minimum_required(VERSION 2.6)
project(r4_19-20)

add_definitions(-std=c++11)
add_executable(r4_19-20 main.cpp)

install(TARGETS r4_19-20 RUNTIME DESTINATION bin)