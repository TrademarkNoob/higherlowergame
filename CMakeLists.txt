cmake_minimum_required(VERSION 3.24)
project(higherlowergame)

set(CMAKE_CXX_STANDARD 20)

add_executable(higherlowergame main.cpp def.cpp)
set(CMAKE_EXE_LINKER_FLAGS "-static")
