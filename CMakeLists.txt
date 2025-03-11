cmake_minimum_required(VERSION 3.30)
project(emul C)

set(CMAKE_C_STANDARD 11)

add_executable(emul
        parse.c
        cpu.c
        memory.c
        memory.h
        cpu.h
        clock.c
        clock.h)
