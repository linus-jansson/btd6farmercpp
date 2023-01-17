cmake_minimum_required(VERSION 3.20)
project(BTD6Farmercpp)

# file(GLOB SOURCE "${PROJECT_SOURCE_DIR}/src/*.cpp")
# include_directories(src)
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        )

add_executable(BTD6Farmercpp src/main.cpp ${all_SRCS})