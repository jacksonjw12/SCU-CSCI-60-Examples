cmake_minimum_required(VERSION 3.6)
project(Example24_BagDynamicArray)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        bag.h
        main.cpp)

add_executable(Example24_BagDynamicArray ${SOURCE_FILES})
