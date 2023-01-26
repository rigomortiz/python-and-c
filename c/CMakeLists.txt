cmake_minimum_required(VERSION 3.7)
project(c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES hello_world.c)
add_executable(c ${SOURCE_FILES})

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(c ${PYTHON_LIBRARIES})
