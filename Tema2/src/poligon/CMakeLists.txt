add_library(poligon_lib STATIC poligon.cxx )

# CMake command used to specify the include directories for a particular target(poligon_lib).
target_include_directories(poligon_lib PUBLIC "${PROJECT_SOURCE_DIR}/shape")