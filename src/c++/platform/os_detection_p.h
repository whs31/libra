/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

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
