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

option(LIBRA_QT_TYPEDEFS "Enable Qt-specific type aliases" ON)
option(LIBRA_NO_FMT "Exclude <fmt> library and rely on std::format (c++20 and newer)" OFF)
option(LIBRA_NO_RANGE_V3 "Exclude <range-v3> library and rely on std::ranges (c++23 and newer)" ON)
option(LIBRA_NO_TL_EXPECTED "Exclude <tl-expected> library and rely on std::expected (c++23 and newer)" ON)

message(STATUS "[Libra] Library CMake loaded.")
message(STATUS "[Libra] Qt aliases enabled: ${LIBRA_QT_TYPEDEFS}.")
message(STATUS "[Libra] <fmt> library disabled: ${LIBRA_NO_FMT}.")
message(STATUS "[Libra] <range-v3> library disabled: ${LIBRA_NO_RANGE_V3}.")
message(STATUS "[Libra] <tl-expected> library disabled: ${LIBRA_NO_TL_EXPECTED}.")

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

add_subdirectory(libs/3rd-party/fmt)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PUBLIC
    include/Libra/Global
    include/Libra/Expected
  PRIVATE
    src/c++/core/cmake_defs.h
    src/c++/core/global.h
    src/c++/core/expected.h
    src/c++/core/qtaliases_p.h
    src/c++/cli/commandlineparser.h
    src/c++/cli/commandlineparser.c++
)

if(LIBRA_QT_TYPEDEFS)
  message(STATUS "[Libra] Enabling Qt type aliases.")
  target_compile_definitions(${PROJECT_NAME} PUBLIC CMAKE_LIBRA_ENABLE_QT_TYPEDEFS)
endif()

if(LIBRA_NO_FMT)
  message(STATUS "[Libra] Excluding <fmt> and relying on std::format.")
  target_compile_definitions(${PROJECT_NAME} PUBLIC CMAKE_LIBRA_NO_FMT)
else()
  target_link_libraries(${PROJECT_NAME} PUBLIC fmt)
endif()

if(LIBRA_NO_RANGE_V3)
  message(STATUS "[Libra] Excluding <range-v3> and relying on std::ranges.")
  target_compile_definitions(${PROJECT_NAME} PUBLIC CMAKE_LIBRA_NO_RANGE)
else()
  target_link_libraries(${PROJECT_NAME} PUBLIC range-v3)
endif()

if(LIBRA_NO_TL_EXPECTED)
  message(STATUS "[Libra] Excluding <tl-expected> and relying on std::expected.")
  target_compile_definitions(${PROJECT_NAME} PUBLIC CMAKE_LIBRA_NO_EXPECTED)
else()
  target_link_libraries(${PROJECT_NAME} PUBLIC expected)
endif()

target_include_directories(${PROJECT_NAME} PUBLIC include src/c++)

unset(LIBRA_QT_TYPEDEFS CACHE)
unset(LIBRA_NO_FMT CACHE)
unset(LIBRA_NO_RANGE_V3 CACHE)
unset(LIBRA_NO_TL_EXPECTED CACHE)