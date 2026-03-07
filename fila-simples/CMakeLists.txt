cmake_minimum_required(VERSION 4.1)
project(fila_simples C)

set(CMAKE_C_STANDARD 11)

add_executable(fila_simples
        main.c
        Fila.c
        Fila.h)
