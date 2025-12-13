cmake_minimum_required(VERSION 3.16)

project(KaesarEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KaesarEngine
    src/main.cpp
)

add_subdirectory(external/glfw)

target_link_libraries(KaesarEngine
    glfw
    opengl32
)