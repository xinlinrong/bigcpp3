cmake_minimum_required(VERSION 2.6)
project(r1_26)

add_executable(r1_26 main.cpp)

install(TARGETS r1_26 RUNTIME DESTINATION bin)
