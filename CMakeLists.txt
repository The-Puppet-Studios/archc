cmake_minimum_required(VERSION 3.10)

project(ARCHC VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(ARCHC 
    src/compiler.c
    src/codegen.c
    src/instructions.c
    src/memory.c
    src/parser.c
    src/stack.c
)