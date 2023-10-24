//
// Created by whs31 on 24.10.2023.
//

#pragma once

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

#if __cplusplus == 1
  #define LIBRA_CXX_PRE98
#elif __cplusplus <= 199811L
  #define LIBRA_CXX_98
#elif __cplusplus <= 200911L
  #define LIBRA_CXX_03
#elif __cplusplus <= 201104L
  #define LIBRA_CXX_11
#elif __cplusplus <= 201404L
  #define LIBRA_CXX_14
#elif __cplusplus <= 201704L
  #define LIBRA_CXX_17
#elif __cplusplus <= 202004L
  #define LIBRA_CXX_20
#else
  #define LIBRA_CXX_23
#endif

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