//
// Created by whs31 on 24.10.2023.
//

#pragma once

#include "endian_detection_p.h"

namespace Libra
{
  enum class Endianness
  {
    Little,
    Big,
    Unknown
  };
} // Libra

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
