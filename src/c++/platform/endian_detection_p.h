/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#if (defined(__BIG_ENDIAN__) && !defined(__LITTLE_ENDIAN__)) || (defined(_BIG_ENDIAN) && !defined(_LITTLE_ENDIAN)) || \
    defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIPSEB) || defined(__MIPSEB) || \
    defined(__MIPSEB__)
#define LIBRA_ENDIAN_BIG
#pragma message "-- [LIBRA] Endianness detected: Big Endian"
#elif (defined(__LITTLE_ENDIAN__) && !defined(__BIG_ENDIAN__)) || (defined(_LITTLE_ENDIAN) && !defined(_BIG_ENDIAN)) || \
      defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(__loongarch__) || defined(_MIPSEL) || \
      defined(__MIPSEL) || defined(__MIPSEL__) || defined(__riscv) || defined(__e2k__)
#define LIBRA_ENDIAN_LITTLE
#pragma message "-- [LIBRA] Endianness detected: Little Endian"
#else
#define LIBRA_ENDIAN_UNKNOWN
#pragma message "-- [LIBRA] Endianness is not detected."
#endif
