cmake_minimum_required(VERSION 3.29)
project(02393DTU)

set(CMAKE_CXX_STANDARD 14)
include_directories(ex01)

add_executable(02393DTU
        ex01/helloWorld/HelloWorld.h++
        ex01/helloWorld/HelloWorld.cpp
        ex01/helloName/helloName.h++
        ex01/helloName/helloName.cpp
        ex01/readNIntegers/readNIntegers.cpp
        ex04/theMaze.cpp
        ex04/dynamicMaze.cpp)
