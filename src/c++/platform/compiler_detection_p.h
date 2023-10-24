/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

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
