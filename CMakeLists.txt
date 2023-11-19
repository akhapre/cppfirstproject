set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
cmake_minimum_required (VERSION 3.16.2)
set(CMAKE_CXX_STANDARD 20)
set(VCPKG_MANIFEST_MODE ON)

project (HELLOWORLD
         VERSION 1.0.0
         LANGUAGES CXX)
add_subdirectory(src)
         