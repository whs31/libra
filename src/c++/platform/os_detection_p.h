/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#define LIBRA_OS_WINDOWS
#pragma message "-- [LIBRA] Operating system detected: Windows"
#elif defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
#define LIBRA_OS_LINUX
#pragma message "-- [LIBRA] Operating system detected: Linux"
#elif defined(macintosh) || defined(Macintosh) || (defined(__APPLE__) && defined(__MACH__))
#define LIBRA_OS_MACOS
#pragma message "-- [LIBRA] Operating system detected: MacOS"
#elif defined(__ANDROID__)
#define LIBRA_OS_ANDROID
#pragma message "-- [LIBRA] Operating system detected: Android"
#elif defined(__APPLE__) && defined(__MACH__) && defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__)
#define LIBRA_OS_IOS
#pragma message "-- [LIBRA] Operating system detected: IOS"
#elif defined(__CYGWIN__)
#define LIBRA_OS_CYGWIN
#pragma message "-- [LIBRA] Operating system detected: Cygwin"
#elif defined(__FreeBSD__)
#define LIBRA_OS_FREEBSD
#pragma message "-- [LIBRA] Operating system detected: FreeBSD"
#elif defined(__DragonFly__)
#define LIBRA_OS_DRAGONFLY
#pragma message "-- [LIBRA] Operating system detected: Dragonfly"
#elif defined(__NETBSD__) || defined(__NetBSD__)
#define LIBRA_OS_NETBSD
#pragma message "-- [LIBRA] Operating system detected: NetBSD"
#elif defined(__OpenBSD__)
#define LIBRA_OS_OPENBSD
#pragma message "-- [LIBRA] Operating system detected: OpenBSD"
#else
#define LIBRA_OS_UNRECOGNIZED
#warning "-- [LIBRA] Operating system is not detected."
#endif
