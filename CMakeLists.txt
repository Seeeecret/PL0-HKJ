cmake_minimum_required(VERSION 3.26)
project(core)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(.)

add_executable(core
        PL01.cpp
        Unit1.cpp
        Unit1.h
        main.cpp
        main.h)
