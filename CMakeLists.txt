cmake_minimum_required(VERSION 3.26)
project(td2)

set(CMAKE_CXX_STANDARD 23)

add_executable(td2 main.cpp
        source/point.cpp
        header/point.h
        source/circle.cpp
        header/circle.h)
