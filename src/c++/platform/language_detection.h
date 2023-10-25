//
// Created by whs31 on 24.10.2023.
//

#pragma once

#include "language_detection_p.h"

namespace Libra
{
  enum class CPlusPlusVersion
  {
    Pre98,
    Cxx98,
    Cxx03,
    Cxx11,
    Cxx14,
    Cxx17,
    Cxx20,
    Cxx23
  };
} // Libra

namespace Libra::Private
{
  constexpr inline const CPlusPlusVersion cxx_version =
      #if defined(LIBRA_CXX_PRE98)
      CPlusPlusVersion::Pre98
      #elif defined(LIBRA_CXX_98)
      CPlusPlusVersion::Cxx98
      #elif defined(LIBRA_CXX_03)
      CPlusPlusVersion::Cxx03
      #elif defined(LIBRA_CXX_11)
      CPlusPlusVersion::Cxx11
      #elif defined(LIBRA_CXX_14)
      CPlusPlusVersion::Cxx14
      #elif defined(LIBRA_CXX_17)
      CPlusPlusVersion::Cxx17
      #elif defined(LIBRA_CXX_20)
      CPlusPlusVersion::Cxx20
      #elif defined(LIBRA_CXX_23)
      CPlusPlusVersion::Cxx23
      #endif
  ;
} // Libra::Private