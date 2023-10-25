/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 25.10.23
  */

#pragma once

#include <Libra/Platform>

#if defined(LIBRA_OS_WINDOWS)
  #define WIN32_LEAN_AND_MEAN
  #include <windows.h>
#endif
