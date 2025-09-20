
cmake_minimum_required(VERSION 3.15)
project(CrossPlatformGameEngine)

set(CMAKE_CXX_STANDARD 17)

# Conan
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)
include(${CMAKE_BINARY_DIR}/conan_deps.cmake)

add_executable(${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    CONAN_PKG::entt
    # TODO bgfx
    # TODO imgui
)
