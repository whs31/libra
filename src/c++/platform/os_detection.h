//
// Created by whs31 on 24.10.2023.
//

#pragma once

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

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
  #define LIBRA_OS_WINDOWS
#elif defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
  #define LIBRA_OS_LINUX
#elif defined(macintosh) || defined(Macintosh) || (defined(__APPLE__) && defined(__MACH__))
  #define LIBRA_OS_MACOS
#elif defined(__ANDROID__)
  #define LIBRA_OS_ANDROID
#elif defined(__APPLE__) && defined(__MACH__) && defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__)
  #define LIBRA_OS_IOS
#elif defined(__CYGWIN__)
  #define LIBRA_OS_CYGWIN
#elif defined(__FreeBSD__)
  #define LIBRA_OS_FREEBSD \
#elif defined(__DragonFly__)
  #define LIBRA_OS_DRAGONFLY
#elif defined(__NETBSD__) || defined(__NetBSD__)
  #define LIBRA_OS_NETBSD
#elif defined(__OpenBSD__)
  #define LIBRA_OS_OPENBSD
#else
  #warning "Unrecognized operating system!"
  #define LIBRA_OS_UNRECOGNIZED
#endif

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