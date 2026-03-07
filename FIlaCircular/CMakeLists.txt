cmake_minimum_required(VERSION 4.1)
project(FIlaCircular C)

set(CMAKE_C_STANDARD 11)

add_executable(FIlaCircular main.c
        FilaCircular.c
        FilaCircular.h)
