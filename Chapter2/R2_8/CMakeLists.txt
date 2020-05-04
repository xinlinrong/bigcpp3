cmake_minimum_required(VERSION 2.6)
project(r2_8)

add_executable(r2_8 main.cpp)

install(TARGETS r2_8 RUNTIME DESTINATION bin)
