//
// Created by whs31 on 19.10.2023.
//

#pragma once

#include "cmake_defs.h"

#if defined(LIBRA_EXPECTED)
  #include <tl/expected.hpp>
  using namespace tl;
#else
  #if __cplusplus > 202002L && __cpp_concepts >= 202002L
    #include <expected>
    using std::expected;
  #else
    #error "You are doing something wrong. Expected is available since c++23, and your CMAKE_CXX_STANDARD is lower. Use LIBRA_NO_TL_EXPECTED OFF :3"
  #endif
#endif

