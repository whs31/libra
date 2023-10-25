//
// Created by whs31 on 24.10.2023.
//

#pragma once

#include "compiler_detection_p.h"

namespace Libra
{
  enum class Compiler
  {
    Borland,
    Clang,
    Comeau,
    Como = Comeau,
    Compaq,
    Diab,
    DigitalMars,
    DignusSystems,
    EDG,
    PathScale,
    GNU,
    GCC = GNU,
    GreenHills,
    HPA,
    IAR,
    IBM,
    Intel,
    Kai,
    KCC = Kai,
    LLVM,
    MetaWareHighC,
    HighC = MetaWareHighC,
    MetrowerksCodeWarrior,
    CodeWarrior = MetrowerksCodeWarrior,
    Microtec,
    MacintoshProgrammerWorkshop,
    MPW = MacintoshProgrammerWorkshop,
    NVidiaCUDA,
    Palm,
    PortlandGroup,
    MIPSpro,
    OracleSolarisStudio,
    TenDRA,
    MSVC,
    Microsoft = MSVC,
    Watcom,
    Unknown
  };
} // Libra

namespace Libra::Private
{
  constexpr inline const Compiler compiler =
      #if defined(LIBRA_COMPILER_BORLAND)
      Compiler::Borland
      #elif defined(LIBRA_COMPILER_CLANG)
      Compiler::Clang
      #elif defined(LIBRA_COMPILER_COMO)
      Compiler::Como
      #elif defined(LIBRA_COMPILER_COMPAQ)
      Compiler::Compaq
      #elif defined(LIBRA_COMPILER_DIAB)
      Compiler::Diab
      #elif defined(LIBRA_COMPILER_DIGITAL_MARS)
      Compiler::DigitalMars
      #elif defined(LIBRA_COMPILER_DIGNUS)
      Compiler::DignusSystems
      #elif defined(LIBRA_COMPILER_EDG)
      Compiler::EDG
      #elif defined(LIBRA_COMPILER_PATHSCALE)
      Compiler::PathScale
      #elif defined(LIBRA_COMPILER_GNU)
      Compiler::GCC
      #elif defined(LIBRA_COMPILER_GREENHILLS)
      Compiler::GreenHills
      #elif defined(LIBRA_COMPILER_HPA)
      Compiler::HPA
      #elif defined(LIBRA_COMPILER_IAR)
      Compiler::IAR
      #elif defined(LIBRA_COMPILER_IBM)
      Compiler::IBM
      #elif defined(LIBRA_COMPILER_INTEL)
      Compiler::Intel
      #elif defined(LIBRA_COMPILER_KAI)
      Compiler::Kai
      #elif defined(LIBRA_COMPILER_LLVM)
      Compiler::LLVM
      #elif defined(LIBRA_COMPILER_HIGHC)
      Compiler::HighC
      #elif defined(LIBRA_COMPILER_CODEWARRIOR)
      Compiler::CodeWarrior
      #elif defined(LIBRA_COMPILER_MICROTEC)
      Compiler::Microtec
      #elif defined(LIBRA_COMPILER_MPW)
      Compiler::MPW
      #elif defined(LIBRA_COMPILER_NVIDIA_CUDA)
      Compiler::NVidiaCUDA
      #elif defined(LIBRA_COMPILER_PALM)
      Compiler::Palm
      #elif defined(LIBRA_COMPILER_PORTLAND_GROUP)
      Compiler::PortlandGroup
      #elif defined(LIBRA_COMPILER_MIPSPRO)
      Compiler::MIPSpro
      #elif defined(LIBRA_COMPILER_ORACLE)
      Compiler::OracleSolarisStudio
      #elif defined(LIBRA_COMPILER_TENDRA)
      Compiler::TenDRA
      #elif defined(LIBRA_COMPILER_MSVC)
      Compiler::Microsoft
      #elif defined(LIBRA_COMPILER_WATCOM)
      Compiler::Watcom
      #elif defined(LIBRA_COMPILER_UNKNOWN)
      Compiler::Unknown
      #endif
  ;
} // Libra::Private
