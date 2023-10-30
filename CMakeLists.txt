cmake_minimum_required(VERSION 3.15)

project(Libra
  VERSION 1.0.0
  DESCRIPTION "Foundation library for C++ projects"
  HOMEPAGE_URL "io.github.whs31"
  LANGUAGES C CXX
)

if(TARGET ${PROJECT_NAME})
  return()
endif()

option(LIBRA_QT_TYPEDEFS "Enable Qt-specific type aliases" OFF)

message(STATUS "[Libra] Library CMake loaded.")
message(STATUS "[Libra] Qt aliases enabled: ${LIBRA_QT_TYPEDEFS}.")

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 20)
  set(CMAKE_C_STANDARD_REQUIRED OFF)
  set(CMAKE_C_EXTENSIONS OFF)
endif(NOT CMAKE_C_STANDARD)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif(NOT CMAKE_CXX_STANDARD)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PUBLIC
    include/Libra/Global
    include/Libra/Expected
    include/Libra/Platform
    include/Libra/Windows
    include/Libra/WinAPI
  PRIVATE
    src/c++/cli/commandlineparser.h
    src/c++/cli/commandlineparser.c++

    src/c++/core/cmake_defs.h
    src/c++/core/global.h
    src/c++/core/expected.h
    src/c++/core/qtaliases_p.h

    src/c++/logging/scope_macro.h
    src/c++/logging/logging.h

    src/c++/platform/arch_detection.h
    src/c++/platform/arch_detection_p.h
    src/c++/platform/compiler_detection.h
    src/c++/platform/compiler_detection_p.h
    src/c++/platform/endian_detection.h
    src/c++/platform/endian_detection_p.h
    src/c++/platform/language_detection.h
    src/c++/platform/language_detection_p.h
    src/c++/platform/os_detection.h
    src/c++/platform/os_detection_p.h
    src/c++/platform/word_detection.h
    src/c++/platform/word_detection_p.h
    src/c++/platform/platform.h
    src/c++/platform/windows_header.h
    src/c++/platform/winapi_wrapper.h
)

if(LIBRA_QT_TYPEDEFS)
  message(STATUS "[Libra] Enabling Qt type aliases.")
  target_compile_definitions(${PROJECT_NAME} PUBLIC CMAKE_LIBRA_ENABLE_QT_TYPEDEFS)
endif()

set(EXPECTED_BUILD_PACKAGE OFF CACHE BOOL "Build package files as well" FORCE)
set(EXPECTED_BUILD_TESTS OFF CACHE BOOL "Build package files as well" FORCE)
set(EXPECTED_BUILD_PACKAGE_DEB OFF CACHE BOOL "Build package files as well" FORCE)
add_subdirectory(libs/3rd-party/tl-expected)
target_link_libraries(${PROJECT_NAME} PUBLIC expected)

target_include_directories(${PROJECT_NAME} PUBLIC include src/c++)

unset(LIBRA_QT_TYPEDEFS CACHE)