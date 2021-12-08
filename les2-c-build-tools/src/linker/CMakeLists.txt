cmake_minimum_required(VERSION 3.20)
project(linker C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(linker
        main.c
        math.c
        math.h)
