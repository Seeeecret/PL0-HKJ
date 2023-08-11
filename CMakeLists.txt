cmake_minimum_required(VERSION 3.26)
project(PL0_HKJ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PL0_HKJ
        PL01.cpp
        Unit1.cpp
        Unit1.h
        main.cpp
        main.h)
