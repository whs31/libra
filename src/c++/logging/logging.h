/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#include "scope_macro.h"
#include <string>

#define LIBRA_SCOPE_INFORMATION Libra::Private::parseScopeInfo(LIBRA_SCOPE_INFO)
#define LIBRA_SCOPE_INFORMATION_STRING std::string(LIBRA_SCOPE_INFORMATION)

#define log()

namespace Libra
{

} // Libra

namespace Libra::Private
{
  const char* parseScopeInfo(const char*) noexcept;
} // Libra::Private

namespace Libra::Private
{
  const char* parseScopeInfo(const char*) noexcept
  {

  }
} // Libra::Private
