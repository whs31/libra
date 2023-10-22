//
// Created by whs31 on 22.10.2023.
//

#pragma once

#if defined(CMAKE_LIBRA_ENABLE_QT_TYPEDEFS)
  #define LIBRA_QT
#else
  #define LIBRA_NO_QT
#endif

#if defined(CMAKE_LIBRA_NO_FMT)
  #define LIBRA_NO_FMT
#else
  #define LIBRA_FMT
#endif

#if defined(CMAKE_LIBRA_NO_RANGE)
  #define LIBRA_NO_RANGE
#else
  #define LIBRA_RANGE
#endif

#if defined(CMAKE_LIBRA_NO_EXPECTED)
  #define LIBRA_NO_EXPECTED
#else
  #define LIBRA_EXPECTED
#endif
