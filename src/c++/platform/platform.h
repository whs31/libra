/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright whs31 2023
  */

#pragma once

#include "arch_detection.h"
#include "compiler_detection.h"
#include "endian_detection.h"
#include "language_detection.h"
#include "os_detection.h"
#include "word_detection.h"

#define LIBRA_STRINGIFY(x) LIBRA_STRINGIFY2(x)
#define LIBRA_STRINGIFY2(x) #x

#if defined(QT_CORE_LIB)
#include <QtCore/QtGlobal>
#pragma message "-- [LIBRA] Qt Libraries found"
#pragma message("-- [LIBRA] Qt Version: " LIBRA_STRINGIFY(QT_VERSION_MAJOR) "." LIBRA_STRINGIFY(QT_VERSION_MINOR) "." LIBRA_STRINGIFY(QT_VERSION_PATCH))
#endif

namespace Libra
{
  class Platform
  {
    public:
      [[nodiscard]] static Architecture architecture() noexcept;
      [[nodiscard]] static Compiler compiler() noexcept;
      [[nodiscard]] static Endianness endianness() noexcept;
      [[nodiscard]] static CPlusPlusVersion standardVersion() noexcept;
      [[nodiscard]] static OperatingSystem os() noexcept;
      [[nodiscard]] static usize wordSize() noexcept;

      #if defined(QT_CORE_LIB)
      [[nodiscard]] static u8 qtVersionMajor() noexcept;
      [[nodiscard]] static u8 qtVersionMinor() noexcept;
      [[nodiscard]] static u8 qtVersionPatch() noexcept;
      [[nodiscard]] static const char* qtVersion() noexcept;
      #endif
  };
} // Libra

namespace Libra
{
  inline Architecture Platform::architecture() noexcept { return Private::arch; }
  inline Compiler Platform::compiler() noexcept { return Private::compiler; }
  inline Endianness Platform::endianness() noexcept { return Private::endianness; }
  inline CPlusPlusVersion Platform::standardVersion() noexcept { return Private::cxx_version; }
  inline OperatingSystem Platform::os() noexcept { return Private::os; }
  inline usize Platform::wordSize() noexcept { return Private::word_size; }

  #if defined(QT_CORE_LIB)
  inline u8 Platform::qtVersionMajor() noexcept { return QT_VERSION_MAJOR; }
  inline u8 Platform::qtVersionMinor() noexcept { return QT_VERSION_MINOR; }
  inline u8 Platform::qtVersionPatch() noexcept { return QT_VERSION_PATCH; }
  inline const char* Platform::qtVersion() noexcept { return qVersion(); }
  #endif
} // Libra