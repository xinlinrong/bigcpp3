cmake_minimum_required(VERSION 2.6)
project(r7_out)

add_executable(r7_out main.cpp)

install(TARGETS r7_out RUNTIME DESTINATION bin)
