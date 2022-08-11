cmake_minimum_required(VERSION 3.16)
project(ConsoleEnableMod CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_DEFAULT 17)
set(CXX17 ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_C_EXTENSIONS ON)

file(GLOB SOURCES "src/main.cpp")

add_library(ConsoleEnableMod SHARED ${SOURCES})
target_link_options(ConsoleEnableMod PRIVATE -static)
set_target_properties(
    ConsoleEnableMod 
    PROPERTIES
        OUTPUT_NAME "ConsoleEnableMod"
        SUFFIX ".asi"
)
