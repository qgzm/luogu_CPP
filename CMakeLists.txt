cmake_minimum_required(VERSION 3.21)
project(luogu_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(luogu_CPP main.cpp)

add_executable(test demo0/puditan.cpp)
add_executable(puditan demo0/puditan.cpp)
add_executable(train01 traindemo/train01.c)

add_executable(fanggequshu demo0/fanggequshu.cpp)