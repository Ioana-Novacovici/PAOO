cmake_minimum_required(VERSION 3.10)

project(StudentProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(student)

add_executable(StudentProject main.cxx)

target_link_libraries(StudentProject PUBLIC student_lib)

target_include_directories(StudentProject PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/student"
                           )

