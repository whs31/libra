//
// Created by whs31 on 24.10.2023.
//

#pragma once

#include "arch_detection_p.h"

namespace Libra
{
  enum class Architecture
  {
    X86_32,
    X86_64,
    DEC_Alpha,
    ARM,
    Blackfin,
    Convex,
    Elbrus2000,
    Itanium64,
    LoongArch,
    Motorola68K,
    MIPS,
    PA_RISC,
    PowerPC,
    PTX,
    Pyramid,
    RISC_V,
    RS6000,
    Sparc,
    SuperH,
    System370,
    System390,
    ZArchitecture,
    Unknown
  };
} // Libra

namespace Libra::Private
{
  constexpr inline const Architecture arch =
      #if defined(LIBRA_ARCH_X86_32)
      Architecture::X86_32
      #elif defined(LIBRA_ARCH_X86_64)
      Architecture::X86_64
      #elif defined(LIBRA_ARCH_ALPHA)
      Architecture::DEC_Alpha
      #elif defined(LIBRA_ARCH_ARM)
      Architecture::ARM
      #elif defined(LIBRA_ARCH_BLACKFIN)
      Architecture::Blackfin
      #elif defined(LIBRA_ARCH_CONVEX)
      Architecture::Convex
      #elif defined(LIBRA_ARCH_ELBRUS2000)
      Architecture::Elbrus2000
      #elif defined(LIBRA_ARCH_IA64)
      Architecture::Itanium64
      #elif defined(LIBRA_ARCH_LOONGARCH)
      Architecture::LoongArch
      #elif defined(LIBRA_ARCH_M68K)
      Architecture::Motorola68K
      #elif defined(LIBRA_ARCH_MIPS)
      Architecture::MIPS
      #elif defined(LIBRA_ARCH_PARISC)
      Architecture::PA_RISC
      #elif defined(LIBRA_ARCH_POWERPC)
      Architecture::PowerPC
      #elif defined(LIBRA_ARCH_PTX)
      Architecture::PTX
      #elif defined(LIBRA_ARCH_PYRAMID)
      Architecture::Pyramid
      #elif defined(LIBRA_ARCH_RISCV)
      Architecture::RISC_V
      #elif defined(LIBRA_ARCH_RS6000)
      Architecture::RS6000
      #elif defined(LIBRA_ARCH_SPARC)
      Architecture::Sparc
      #elif defined(LIBRA_ARCH_SUPERH)
      Architecture::SuperH
      #elif defined(LIBRA_ARCH_SYS370)
      Architecture::System370
      #elif defined(LIBRA_ARCH_SYS390)
      Architecture::System390
      #elif defined(LIBRA_ARCH_Z_ARCHITECTURE)
      Architecture::ZArchitecture
      #elif defined(LIBRA_ARCH_UNKNOWN)
      Architecture::Unknown
      #endif
  ;
} // Libra::Private