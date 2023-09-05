cmake_minimum_required(VERSION 3.26)
project(Menu C)

set(CMAKE_C_STANDARD 11)

add_executable(Menu src/main.c
        src/menu.h
        src/menu.c)
