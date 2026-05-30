cmake_minimum_required(VERSION 4.1)
project(SpoolerImpressao C)

set(CMAKE_C_STANDARD 11)

add_executable(SpoolerImpressao
        main.c
        TrabalhoImpressao.c
        TrabalhoImpressao.h
)