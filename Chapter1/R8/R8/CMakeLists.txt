cmake_minimum_required(VERSION 2.6)
project(r8)

add_executable(r8 main.cpp)

install(TARGETS r8 RUNTIME DESTINATION bin)
