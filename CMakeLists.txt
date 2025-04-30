cmake_minimum_required(VERSION 3.30)
project(str_comp C)

set(CMAKE_C_STANDARD 11)

add_library(str_comp SHARED library.c)
