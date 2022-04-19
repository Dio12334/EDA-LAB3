cmake_minimum_required(VERSION 3.10)
project(EDA-LAB3)

set(CMAKE_CXX_STANDARD)

include_directories(./src)

add_executable(out.exe
    src/main.cpp
    src/rbtree/rbtree.cpp
)