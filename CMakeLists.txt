cmake_minimum_required (VERSION 3.7)

project (ctest) 

include_directories(source/ctest)
include_directories(source/examples)

set(${PROJECT_NAME}SRC 
    source/ctest/test.c
    source/ctest/engine/test-helper.c
    source/ctest/engine/test-print.c
    source/ctest/color/color.c
)
add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}SRC})
target_include_directories(${PROJECT_NAME} PRIVATE source/ctest)

set (passtestSRC
    source/examples/pass_test.c
)

add_executable(${PROJECT_NAME}-example ${passtestSRC})
target_link_libraries(${PROJECT_NAME}-example ${PROJECT_NAME})
