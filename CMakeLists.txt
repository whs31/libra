cmake_minimum_required(VERSION 3.15)

project(Backbone
  VERSION 1.0.0
  DESCRIPTION "Foundation library for C++ projects"
  HOMEPAGE_URL "io.github.whs31"
  LANGUAGES C CXX
)

if(TARGET ${PROJECT_NAME})
  return()
endif()

option(BB_QT_TYPEDEFS "Enable Qt-specific type aliases" OFF)

message(STATUS "[Backbone] Library CMake loaded.")

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 17)
  set(CMAKE_C_STANDARD_REQUIRED OFF)
  set(CMAKE_C_EXTENSIONS OFF)
endif(NOT CMAKE_C_STANDARD)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif(NOT CMAKE_CXX_STANDARD)

set(EXPECTED_BUILD_PACKAGE OFF CACHE BOOL "Build package files as well" FORCE)
set(EXPECTED_BUILD_TESTS OFF CACHE BOOL "Build package files as well" FORCE)
set(EXPECTED_BUILD_PACKAGE_DEB OFF CACHE BOOL "Build package files as well" FORCE)
add_subdirectory(libs/3rd-party/tl-expected)

set(RANGES_BUILD_CALENDAR_EXAMPLE OFF CACHE BOOL "Build package files as well" FORCE)
set(RANGES_ASSERTIONS OFF CACHE BOOL "Build package files as well" FORCE)
set(RANGES_DEBUG_INFO OFF CACHE BOOL "Build package files as well" FORCE)
set(RANGES_VERBOSE_BUILD OFF CACHE BOOL "Build package files as well" FORCE)
add_subdirectory(libs/3rd-party/range-v3)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PUBLIC
    include/Backbone/Global
    include/Backbone/Expected
  PRIVATE
    src/c++/core/global.h
    src/c++/core/expected.h
    src/c++/core/qtaliases_p.h
    src/c++/cli/commandlineparser.h
    src/c++/cli/commandlineparser.c++
)

message(STATUS "[Backbone] Qt aliases status: ${BB_QT_TYPEDEFS}.")
if(BB_QT_TYPEDEFS)
  message(STATUS "[Backbone] Enabling Qt type aliases.")
  target_compile_definitions(${PROJECT_NAME} PRIVATE BB_ENABLE_QT_TYPEDEFS)
endif()

target_include_directories(${PROJECT_NAME} PUBLIC include src/c++)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    expected
    range-v3
  #PRIVATE
)

unset(BB_QT_TYPEDEFS CACHE)