cmake_minimum_required(VERSION 3.10)

project(ThreadsProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fno-elide-constructors")

add_subdirectory(memory)

add_executable(ThreadsProject main.cxx)

target_link_libraries(ThreadsProject PUBLIC memory_lib)

target_include_directories(ThreadsProject PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/memory"
                           )