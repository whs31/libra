//
// Created by whs31 on 24.10.2023.
//

#pragma once

#include "os_detection_p.h"

namespace Libra
{
  enum class OperatingSystem
  {
    Windows,
    Linux,
    MacOS,
    Android,
    IOS,
    Cygwin,
    FreeBSD,
    DragonFly,
    NetBSD,
    OpenBSD,
    Unrecognized
  };
} // Libra

namespace Libra::Private
{
  constexpr inline const OperatingSystem os =
    #if defined(LIBRA_OS_WINDOWS)
      OperatingSystem::Windows
    #elif defined(LIBRA_OS_LINUX)
      OperatingSystem::Linux
    #elif defined(LIBRA_OS_MACOS)
      OperatingSystem::MacOS
    #elif defined(LIBRA_OS_ANDROID)
      OperatingSystem::Android
    #elif defined(LIBRA_OS_IOS)
      OperatingSystem::IOS
    #elif defined(LIBRA_OS_CYGWIN)
      OperatingSystem::Cygwin
    #elif defined(LIBRA_OS_FREEBSD)
      OperatingSystem::FreeBSD
    #elif defined(LIBRA_OS_DRAGONFLY)
      OperatingSystem::DragonFly
    #elif defined(LIBRA_OS_NETBSD)
      OperatingSystem::NetBSD
    #elif defined(LIBRA_OS_OPENBSD)
      OperatingSystem::OpenBSD
    #elif defined(LIBRA_OS_UNRECOGNIZED)
      OperatingSystem::Unrecognized
    #endif
  ;
} // Libra::Private