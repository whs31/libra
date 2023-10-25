/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#include <Libra/Platform>

#if defined(LIBRA_COMPILER_GNU) || defined(LIBRA_COMPILER_GREENHILLS) || defined(LIBRA_COMPILER_DIAB) || \
    defined(LIBRA_COMPILER_HPA)
  #define LIBRA_SCOPE_INFO __PRETTY_FUNCTION__
#elif defined(LIBRA_COMPILER_MSVC)
  #define LIBRA_SCOPE_INFO __FUNCSIG__
#else
  #define LIBRA_SCOPE_INFO " "
#endif
