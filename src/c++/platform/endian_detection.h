//
// Created by whs31 on 24.10.2023.
//

#pragma once

namespace Libra
{
  enum class Endianness
  {
    Little,
    Big,
    Unknown
  };
} // Libra

#if (defined(__BIG_ENDIAN__) && !defined(__LITTLE_ENDIAN__)) || (defined(_BIG_ENDIAN) && !defined(_LITTLE_ENDIAN)) || \
    defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIPSEB) || defined(__MIPSEB) || \
    defined(__MIPSEB__)
  #define LIBRA_ENDIAN_BIG
#elif (defined(__LITTLE_ENDIAN__) && !defined(__BIG_ENDIAN__)) || (defined(_LITTLE_ENDIAN) && !defined(_BIG_ENDIAN)) || \
      defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(__loongarch__) || defined(_MIPSEL) || \
      defined(__MIPSEL) || defined(__MIPSEL__) || defined(__riscv) || defined(__e2k__)
  #define LIBRA_ENDIAN_LITTLE
#else
  #warning "Unknown endianness!"
  #define LIBRA_ENDIAN_UNKNOWN
#endif

namespace Libra::Private
{
  constexpr inline const Endianness endianness =
      #if defined(LIBRA_ENDIAN_BIG)
      Endianness::Big
      #elif defined(LIBRA_ENDIAN_LITTLE)
      Endianness::Little
      #elif defined(LIBRA_ENDIAN_UNKNOWN)
      Endianness::Unknown
      #endif
  ;
} // Libra::Private
