cmake_minimum_required(VERSION 3.10)

project(ShapeProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fno-elide-constructors")

add_subdirectory(shape)
add_subdirectory(poligon)
add_subdirectory(circle)
add_subdirectory(triangle)

add_executable(ShapeProject main.cxx)

target_link_libraries(ShapeProject PUBLIC shape_lib poligon_lib circle_lib triangle_lib)

target_include_directories(ShapeProject PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/poligon"
                           "${PROJECT_SOURCE_DIR}/circle"
                           "${PROJECT_SOURCE_DIR}/triangle"
                           )

