cmake_minimum_required(VERSION 3.26)
project(lab_04 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_04 main.c
        Sources/functions.c
        Headers/intArray.h
        Sources/intArray.c)
