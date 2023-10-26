/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  */

#pragma once

#if defined(__BORLANDC__) || defined(__CODEGEARC__)
#define LIBRA_COMPILER_BORLAND
#pragma message "-- [LIBRA] Compiler detected: Borland"
#elif defined(__clang__)
#define LIBRA_COMPILER_CLANG
#pragma message "-- [LIBRA] Compiler detected: Clang"
#elif defined(__COMO__)
#define LIBRA_COMPILER_COMO
#pragma message "-- [LIBRA] Compiler detected: Como"
#elif defined(__DECC) || defined(__DECCXX)
#define LIBRA_COMPILER_COMPAQ
#pragma message "-- [LIBRA] Compiler detected: Compaq"
#elif defined(__DCC__)
#define LIBRA_COMPILER_DIAB
#pragma message "-- [LIBRA] Compiler detected: Diab"
#elif defined(__DMC__)
#define LIBRA_COMPILER_DIGITAL_MARS
#pragma message "-- [LIBRA] Compiler detected: DigitalMars"
#elif defined(__SYSC__)
#define LIBRA_COMPILER_DIGNUS
#pragma message "-- [LIBRA] Compiler detected: DignusSystems"
#elif defined(__EDG__)
#define LIBRA_COMPILER_EDG
#pragma message "-- [LIBRA] Compiler detected: EDG"
#elif defined(__PATHCC__)
#define LIBRA_COMPILER_PATHSCALE
#pragma message "-- [LIBRA] Compiler detected: PathScale"
#elif defined(__GNUC__)
#define LIBRA_COMPILER_GNU
#pragma message "-- [LIBRA] Compiler detected: GNU GCC"
#elif defined(__ghs) || defined(__ghs__)
#define LIBRA_COMPILER_GREENHILLS
#pragma message "-- [LIBRA] Compiler detected: GreenHills"
#elif defined(__HP_aCC)
#define LIBRA_COMPILER_HPA
#pragma message "-- [LIBRA] Compiler detected: HPA"
#elif defined(__IAR_SYSTEMS_ICC__)
#define LIBRA_COMPILER_IAR
#pragma message "-- [LIBRA] Compiler detected: IAR"
#elif defined(__IBMCPP__) || defined(__xlC__) || defined(__xlc__)
#define LIBRA_COMPILER_IBM
#pragma message "-- [LIBRA] Compiler detected: IBM"
#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || defined(__ECC)
#define LIBRA_COMPILER_INTEL
#pragma message "-- [LIBRA] Compiler detected: Intel"
#elif defined(__KCC)
#define LIBRA_COMPILER_KAI
#pragma message "-- [LIBRA] Compiler detected: Kai"
#elif defined(__llvm__)
#define LIBRA_COMPILER_LLVM
#pragma message "-- [LIBRA] Compiler detected: LLVM"
#elif defined(__HIGHC__)
#define LIBRA_COMPILER_HIGHC
#pragma message "-- [LIBRA] Compiler detected: High C"
#elif defined(__MWERKS__) || defined(__CWCC__)
#define LIBRA_COMPILER_CODEWARRIOR
#pragma message "-- [LIBRA] Compiler detected: CodeWarrior"
#elif defined(_MRI)
#define LIBRA_COMPILER_MICROTEC
#pragma message "-- [LIBRA] Compiler detected: Microtec"
#elif defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
#define LIBRA_COMPILER_MPW
#pragma message "-- [LIBRA] Compiler detected: MPW"
#elif defined(__NVCC__)
#define LIBRA_COMPILER_NVIDIA_CUDA
#pragma message "-- [LIBRA] Compiler detected: NVidia CUDA"
#elif defined(_PACC_VER)
#define LIBRA_COMPILER_PALM
#pragma message "-- [LIBRA] Compiler detected: Palm"
#elif defined(__PGI)
#define LIBRA_COMPILER_PORTLAND_GROUP
#pragma message "-- [LIBRA] Compiler detected: Portland Group"
#elif defined(__sgi) || defined(sgi)
#define LIBRA_COMPILER_MIPSPRO
#pragma message "-- [LIBRA] Compiler detected: MIPSpro"
#elif defined(__SUNPRO_CC) || defined(__SUNPRO_C)
#define LIBRA_COMPILER_ORACLE
#pragma message "-- [LIBRA] Compiler detected: Oracle Solaris Studio"
#elif defined(__TenDRA__)
#define LIBRA_COMPILER_TENDRA
#pragma message "-- [LIBRA] Compiler detected: TenDRA"
#elif defined(_MSC_VER)
#define LIBRA_COMPILER_MSVC
#pragma message "-- [LIBRA] Compiler detected: Microsoft MSVC"
#elif defined(__WATCOMC__)
#define LIBRA_COMPILER_WATCOM
#pragma message "-- [LIBRA] Compiler detected: Watcom"
#else
#define LIBRA_COMPILER_UNKNOWN
#warning "-- [LIBRA] Compiler is not detected."
#endif
