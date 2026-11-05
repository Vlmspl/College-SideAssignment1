cmake_minimum_required(VERSION 4.3)
project(CW19_Cpp)

file(GLOB_RECURSE SOURCES
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

file(GLOB_RECURSE HEADERS
        "${CMAKE_SOURCE_DIR}/src/*.h"
)

set(CMAKE_CXX_STANDARD 20)

add_executable(CW19_Cpp ${SOURCES} ${HEADERS})
