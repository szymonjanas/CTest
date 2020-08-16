cmake_minimum_required (VERSION 3.7)

project (ctest-example) 

include_directories(dependencies/ctest/include)
link_directories(dependencies/ctest/source)

set (passtest
    pass_test.c
)

add_executable(${PROJECT_NAME} ${passtest})
target_link_libraries(${PROJECT_NAME} ctest)
