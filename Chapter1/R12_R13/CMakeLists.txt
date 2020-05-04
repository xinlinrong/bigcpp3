cmake_minimum_required(VERSION 2.6)
project(r12_r13)

add_definitions(-std=c++11)

add_executable(r12_r13 main.cpp account.cpp)

install(TARGETS r12_r13 RUNTIME DESTINATION bin)
