cmake_minimum_required(VERSION 2.6)
project(r2_6)

add_executable(r2_6 main.cpp)

install(TARGETS r2_6 RUNTIME DESTINATION bin)
