cmake_minimum_required(VERSION 3.20)
project(linker C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Datatypes
        main.c sum_array.c structoef.c structOef2.c ../les5-scopes-and-lifetimes/oefeningen.c ../les5-scopes-and-lifetimes/oef2.c)
