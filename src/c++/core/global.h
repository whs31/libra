//
// Created by whs31 on 19.10.2023.
//

#pragma once

#include <cstdint>
#include <utility>
#include <type_traits>
#include <cstddef>

#include "cmake_defs.h"

namespace Libra
{
  template<typename T>
  using error_if_not_decimal = std::enable_if_t<std::is_floating_point<T>::value, T>;

  template<typename T>
  using error_if_not_decimal_bool = std::enable_if_t<std::is_floating_point<T>::value, bool>;
} // Libra

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using usize = size_t;
using isize = int;
using uptr = uintptr_t;
using iptr = ptrdiff_t;
using f32 = float;
using f64 = double;

#if defined(LIBRA_QT)
  #include "qtaliases_p.h"
#endif
