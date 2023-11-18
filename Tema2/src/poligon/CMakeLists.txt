add_library(poligon_lib STATIC poligon.cxx )

target_include_directories(poligon_lib PUBLIC "${PROJECT_SOURCE_DIR}")

target_include_directories(poligon_lib PUBLIC "${PROJECT_SOURCE_DIR}/shape")