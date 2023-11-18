add_library(poligon_lib STATIC poligon.cxx )

target_include_directories(poligon_lib PUBLIC "${PROJECT_SOURCE_DIR}/shape")
# target_sources(poligon_lib INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/poligon.cxx")