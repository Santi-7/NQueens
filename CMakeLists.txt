cmake_minimum_required(VERSION 3.5)
project(NQueens)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES
        main.cpp)

add_executable(NQueens_run
        main.cpp)

include_directories(
        src)

add_subdirectory(src)

target_link_libraries(NQueens_run nQueens)