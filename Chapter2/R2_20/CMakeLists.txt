cmake_minimum_required(VERSION 2.6)
project(r2_20)

add_executable(r2_20 main.cpp)

install(TARGETS r2_20 RUNTIME DESTINATION bin)
