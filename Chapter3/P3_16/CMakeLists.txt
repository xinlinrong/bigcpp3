cmake_minimum_required(VERSION 2.6)
project(p3_16)

add_definitions(-std=c++11)
add_executable(p3_16 account.cpp main.cpp)

install(TARGETS p3_16 RUNTIME DESTINATION bin)
