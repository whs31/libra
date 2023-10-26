/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#if defined(i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || \
      defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || \
      defined(__INTEL__)
#define LIBRA_ARCH_X86_32
#pragma message( "-- [LIBRA] Architecture detected: x86_32")
#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64__) || defined(__amd64) || defined(_M_X64)
#define LIBRA_ARCH_X86_64
#pragma message "-- [LIBRA] Architecture detected: x86_64"
#elif defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#define LIBRA_ARCH_ALPHA
#pragma message( "-- [LIBRA] Architecture detected: Alpha")
#elif defined(__ARM_ARCH) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_M_ARM) || \
    defined(__arm__) || defined(__arm64) || defined(__thumb__) || defined(_M_ARM64) || defined(__aarch64__) || \
    defined(__AARCH64EL__) || defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || \
    defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6KZ__) || \
    defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_5TE__) || defined(__ARM_ARCH_5TEJ__) || defined(__ARM_ARCH_4T__) || \
    defined(__ARM_ARCH_4__)
  #define LIBRA_ARCH_ARM
#pragma message( "-- [LIBRA] Architecture detected: ARM")
#elif defined(__bfin__) || defined(__BFIN__) || defined(bfin) || defined(BFIN)
  #define LIBRA_ARCH_BLACKFIN
#pragma message( "-- [LIBRA] Architecture detected: Blackfin")
#elif defined(__convex__)
  #define LIBRA_ARCH_CONVEX
#pragma message("-- [LIBRA] Architecture detected: Convex")
#elif defined(__e2k__)
  #define LIBRA_ARCH_ELBRUS2000
#pragma message("-- [LIBRA] Architecture detected: Elbrus2000")
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || \
      defined(_M_IA64) || defined(__itanium__)
  #define LIBRA_ARCH_IA64
#pragma message("-- [LIBRA] Architecture detected: Itanium64")
#elif defined(__loongarch__)
  #define LIBRA_ARCH_LOONGARCH
#pragma message("-- [LIBRA] Architecture detected: Loongarch")
#elif defined(__m68k__) || defined(M68000)
  #define LIBRA_ARCH_M68K
#pragma message("-- [LIBRA] Architecture detected: Motorola68K")
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
  #define LIBRA_ARCH_MIPS
#pragma message("-- [LIBRA] Architecture detected: MIPS")
#elif defined(__hppa__) || defined(__hppa) || defined(__HPPA__)
  #define LIBRA_ARCH_PARISC
#pragma message("-- [LIBRA] Architecture detected: PA_RISC")
#elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || \
      defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || \
      defined(_M_PPC) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(__PPCGECKO__) || \
      defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
  #define LIBRA_ARCH_POWERPC
#pragma message("-- [LIBRA] Architecture detected: PowerPC")
#elif defined(__CUDA_ARCH__)
  #define LIBRA_ARCH_PTX
#pragma message("-- [LIBRA] Architecture detected: PTX")
#elif defined(pyr)
  #define LIBRA_ARCH_PYRAMID
#pragma message("-- [LIBRA] Architecture detected: Pyramid")
#elif defined(__riscv)
  #define LIBRA_ARCH_RISCV
#pragma message("-- [LIBRA] Architecture detected: RISC V")
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2)
  #define LIBRA_ARCH_RS6000
#pragma message("-- [LIBRA] Architecture detected: RS6000")
#elif defined(__sparc__) || defined(__sparc)
  #define LIBRA_ARCH_SPARC
#pragma message("-- [LIBRA] Architecture detected: Sparc")
#elif defined(__sh__)
  #define LIBRA_ARCH_SUPERH
#pragma message("-- [LIBRA] Architecture detected: SuperH")
#elif defined(__370__) || defined(__THW_370__)
  #define LIBRA_ARCH_SYS370
#pragma message("-- [LIBRA] Architecture detected: System370")
#elif defined(__s390__) || defined(__s390x__)
  #define LIBRA_ARCH_SYS390
#pragma message("-- [LIBRA] Architecture detected: System390")
#elif defined(__SYSC_ZARCH__)
  #define LIBRA_ARCH_Z_ARCHITECTURE
#pragma message("-- [LIBRA] Architecture detected: Z Architecture")
#else
  #define LIBRA_ARCH_UNKNOWN
#warning "-- [LIBRA] Architecture is not detected."
#endif