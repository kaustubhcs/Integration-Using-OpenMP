cmake_minimum_required(VERSION 3.8)
project(Integration_Using_OpenMP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        README.md main.cpp)

add_executable(Integration_Using_OpenMP ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")