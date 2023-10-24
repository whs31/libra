//
// Created by whs31 on 24.10.2023.
//

#pragma once

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

#if defined(__BORLANDC__) || defined(__CODEGEARC__)
  #define LIBRA_COMPILER_BORLAND
#elif defined(__clang__)
  #define LIBRA_COMPILER_CLANG
#elif defined(__COMO__)
  #define LIBRA_COMPILER_COMO
#elif defined(__DECC) || defined(__DECCXX)
  #define LIBRA_COMPILER_COMPAQ
#elif defined(__DCC__)
  #define LIBRA_COMPILER_DIAB
#elif defined(__DMC__)
  #define LIBRA_COMPILER_DIGITAL_MARS
#elif defined(__SYSC__)
  #define LIBRA_COMPILER_DIGNUS
#elif defined(__EDG__)
  #define LIBRA_COMPILER_EDG
#elif defined(__PATHCC__)
  #define LIBRA_COMPILER_PATHSCALE
#elif defined(__GNUC__)
  #define LIBRA_COMPILER_GNU
#elif defined(__ghs) || defined(__ghs__)
  #define LIBRA_COMPILER_GREENHILLS
#elif defined(__HP_aCC)
  #define LIBRA_COMPILER_HPA
#elif defined(__IAR_SYSTEMS_ICC__)
  #define LIBRA_COMPILER_IAR
#elif defined(__IBMCPP__) || defined(__xlC__) || defined(__xlc__)
  #define LIBRA_COMPILER_IBM
#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || defined(__ECC)
  #define LIBRA_COMPILER_INTEL
#elif defined(__KCC)
  #define LIBRA_COMPILER_KAI
#elif defined(__llvm__)
  #define LIBRA_COMPILER_LLVM
#elif defined(__HIGHC__)
  #define LIBRA_COMPILER_HIGHC
#elif defined(__MWERKS__) || defined(__CWCC__)
  #define LIBRA_COMPILER_CODEWARRIOR
#elif defined(_MRI)
  #define LIBRA_COMPILER_MICROTEC
#elif defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
  #define LIBRA_COMPILER_MPW
#elif defined(__NVCC__)
  #define LIBRA_COMPILER_NVIDIA_CUDA
#elif defined(_PACC_VER)
  #define LIBRA_COMPILER_PALM
#elif defined(__PGI)
  #define LIBRA_COMPILER_PORTLAND_GROUP
#elif defined(__sgi) || defined(sgi)
  #define LIBRA_COMPILER_MIPSPRO
#elif defined(__SUNPRO_CC) || defined(__SUNPRO_C)
  #define LIBRA_COMPILER_ORACLE
#elif defined(__TenDRA__)
  #define LIBRA_COMPILER_TENDRA
#elif defined(_MSC_VER)
  #define LIBRA_COMPILER_MSVC
#elif defined(__WATCOMC__)
  #define LIBRA_COMPILER_WATCOM
#else
  #warning "Unknown compiler!"
  #define LIBRA_COMPILER_UNKNOWN
#endif

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
