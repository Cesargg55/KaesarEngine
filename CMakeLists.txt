cmake_minimum_required(VERSION 3.16)
project(KaesarEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/glfw)

add_library(glad
    external/glad/src/glad.c
)

target_include_directories(glad PUBLIC
    external/glad/include
)

add_executable(KaesarEngine
    src/main.cpp
)

target_link_libraries(KaesarEngine
    PRIVATE
    glad
    glfw
    opengl32
)