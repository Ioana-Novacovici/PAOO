add_library(circle_lib STATIC circle.cxx )

target_include_directories(circle_lib PUBLIC "${PROJECT_SOURCE_DIR}/shape")