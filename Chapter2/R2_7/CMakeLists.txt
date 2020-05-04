cmake_minimum_required(VERSION 2.6)
project(r2_7)

add_executable(r2_7 main.cpp)

install(TARGETS r2_7 RUNTIME DESTINATION bin)
