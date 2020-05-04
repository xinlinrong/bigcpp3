cmake_minimum_required(VERSION 2.6)
project(r9)

add_executable(r9 main.cpp)

install(TARGETS r9 RUNTIME DESTINATION bin)
