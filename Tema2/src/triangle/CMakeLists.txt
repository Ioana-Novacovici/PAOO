add_library(triangle_lib STATIC triangle.cxx )

target_include_directories(triangle_lib PUBLIC "${PROJECT_SOURCE_DIR}/shape")
target_include_directories(triangle_lib PUBLIC "${PROJECT_SOURCE_DIR}/poligon")