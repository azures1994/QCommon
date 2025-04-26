cmake_minimum_required(VERSION 3.10.0)
project(test_QCommon VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/install/)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_PREFIX_PATH}/bin/)

if(CMAKE_HOST_WIN32)

elseif(CMAKE_HOST_UNIX)
    
endif()

set(LIB_LIST )
set(SRC_LIST )

add_subdirectory(QCommon)

set(LIB_LIST QCommon)

include_directories(./)
aux_source_directory(Test/ SRC_LIST)
set(SRC_LIST ${SRC_LIST} main.cpp)
message("SRC_LIST: ${SRC_LIST}")

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${LIB_LIST})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
