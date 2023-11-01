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

namespace Libra::literals
{
  inline u8 operator "" _u8(unsigned long long value) { return static_cast<u8>(value); }
  inline u16 operator "" _u16(unsigned long long value) { return static_cast<u16>(value); }
  inline u32 operator "" _u32(unsigned long long value) { return static_cast<u32>(value); }
  inline u64 operator "" _u64(unsigned long long value) { return static_cast<u64>(value); }
  inline i8 operator "" _i8(unsigned long long value) { return static_cast<i8>(value); }
  inline i16 operator "" _i16(unsigned long long value) { return static_cast<i16>(value); }
  inline i32 operator "" _i32(unsigned long long value) { return static_cast<i32>(value); }
  inline i64 operator "" _i64(unsigned long long value) { return static_cast<i64>(value); }
} // Libra::literals

#if defined(LIBRA_QT)
  #include "qtaliases_p.h"
#endif
