/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 25.10.23
  */

#pragma once

#include <Libra/Windows>

namespace Libra::Windows
{
  void releaseConsole();
} // Libra::Windows

namespace Libra::Windows
{
  void releaseConsole()
  {
    #if defined(LIBRA_OS_WINDOWS)
    FreeConsole();
    #else
    return;
    #endif
  }
} // Libra::Windows
