cmake_minimum_required (VERSION 3.7)

project (ctest) 

include_directories(source/ctest/include)
include_directories(source/ctest/include/color)
include_directories(source/ctest/include/engine)

set(${PROJECT_NAME}SRC 
    source/ctest/source/test.c
    source/ctest/source/engine/test-helper.c
    source/ctest/source/engine/test-print.c
    source/ctest/source/color/color.c
)
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}SRC})
target_include_directories(${PROJECT_NAME} PRIVATE source/ctest/include)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER source/ctest/include/test.h)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
