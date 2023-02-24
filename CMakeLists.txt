cmake_minimum_required(VERSION 3.20)
project(testproj)

set(CMAKE_CXX_STANDARD 20)

SET (CMAKE_C_COMPILER "/opt/local/bin/clang")
SET (CMAKE_CXX_COMPILER "/opt/local/bin/clang++")

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

add_executable(testproj main.cpp)


