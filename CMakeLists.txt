include(FetchContent)
cmake_minimum_required(VERSION 3.12)
project(str_comp C)

set(CMAKE_C_STANDARD 11)

add_library(str_comp STATIC str_comp.c)


if(NOT FLUENT_LIBC_RELEASE) # Manually add libraries only if not in release mode
    FetchContent_Declare(
            stdbool
            GIT_REPOSITORY https://github.com/rodrigoo-r/std_bool
            GIT_TAG        master
    )

    FetchContent_MakeAvailable(stdbool)

    target_include_directories(str_comp PRIVATE ${CMAKE_BINARY_DIR}/_deps/stdbool-src)
    target_link_libraries(str_comp PRIVATE stdbool)
endif ()