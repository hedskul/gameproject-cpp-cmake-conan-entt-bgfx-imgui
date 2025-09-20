#!/bin/bash

# exit if error
set -e

BUILD_DIR="out/build/x64-Debug"
mkdir -p "$BUILD_DIR"

# conan 
conan install . --output-folder="$BUILD_DIR" --build=missing -s build_type=Debug

# CMake
cmake -S . -B "$BUILD_DIR" -DCMAKE_TOOLCHAIN_FILE="$BUILD_DIR/conan_toolchain.cmake" -DCMAKE_BUILD_TYPE=Debug
cmake --build "$BUILD_DIR"
