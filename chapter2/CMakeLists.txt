cmake_minimum_required(VERSION 2.8)

project(chapter2)

# set version number
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (CMAKE_BUILD_TYPE "Debug")
add_compile_options (-std=c++11)
# following 2 lines should be written in ${PROJECT_SOURCE_DIR}/config.h.in
# if configure_file enable.
# #define VERSION_MAJOR @VERSION_MAJOR@
# #define VERSION_MINOR @VERSION_MINOR@

# configure a header file to pass some of the CMake settings
# to the source code
# configure_file(
#     "${PROJECT_SOURCE_DIR}/config.h.in"
#     "${PROJECT_SOURCE_DIR}/config.h"
#     )

aux_source_directory(. DIR_SRCS)

add_executable(chapter2 ${DIR_SRCS})
