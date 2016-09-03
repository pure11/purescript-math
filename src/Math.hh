///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Math.hh
// Copyright   :  (c) Andy Arvanitis 2016
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Math FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Math_FFI_HH
#define Math_FFI_HH

#include <cmath>
#include "PureScript/PureScript.hh"

namespace Math {
  using namespace PureScript;

  // foreign import abs :: Number -> Number
  //
  inline auto abs(const double x) -> double {
    return std::fabs(x);
  }

  // foreign import acos :: Number -> Radians
  //
  inline auto acos(const double x) -> double {
    return std::acos(x);
  }

  // foreign import asin :: Number -> Radians
  //
  inline auto asin(const double x) -> double {
    return std::asin(x);
  }

  // foreign import atan :: Number -> Radians
  //
  inline auto atan(const double x) -> double {
    return std::atan(x);
  }

  // foreign import atan2 :: Number -> Number -> Radians
  //
  inline auto atan2(const double y, const double x) -> double {
    return std::atan2(y, x);
  }

  // foreign import ceil :: Number -> Number
  //
  inline auto ceil(const double x) -> double {
    return std::ceil(x);
  }

  // foreign import cos :: Radians -> Number
  //
  inline auto cos(const double x) -> double {
    return std::cos(x);
  }

  // foreign import exp :: Number -> Number
  //
  inline auto exp(const double x) -> double {
    return std::exp(x);
  }

  // foreign import floor :: Number -> Number
  //
  inline auto floor(const double x) -> double {
    return std::floor(x);
  }

  // foreign import log :: Number -> Number
  //
  inline auto log(const double x) -> double {
    return std::log(x);
  }

  // foreign import max :: Number -> Number -> Number
  //
  inline auto max(const double a, const double b) -> double {
    return (a < b) ? b : a;
  }

  // foreign import min :: Number -> Number -> Number
  //
  inline auto min(const double a, const double b) -> double {
    return (a < b) ? a : b;
  }

  // foreign import pow :: Number -> Number -> Number
  //
  inline auto pow(const double x, const double y) -> double {
    return std::pow(x, y);
  }

  // foreign import round :: Number -> Number
  //
  inline auto round(const double x) -> double {
    return std::round(x);
  }

  // foreign import sin :: Radians -> Number
  //
  inline auto sin(const double x) -> double {
    return std::sin(x);
  }

  // foreign import sqrt :: Number -> Number
  //
  inline auto sqrt(const double x) -> double {
    return std::sqrt(x);
  }

  // foreign import tan :: Radians -> Number
  //
  inline auto tan(const double x) -> double {
    return std::tan(x);
  }

  // foreign import trunc :: Number -> Number
  //
  inline auto trunc(const double x) -> double {
    return std::trunc(x);
  }

  // foreign import remainder :: Number -> Number -> Number
  //
  inline auto remainder(const double x, const double y) -> double {
    return std::remainder(x, y);
  }

  // foreign import e :: Number
  //
  constexpr double e = 2.7182818284590451;

  // foreign import ln2 :: Number
  //
  constexpr double ln2 = 0.6931471805599453;

  // foreign import ln10 :: Number
  //
  constexpr double ln10 = 2.302585092994046;

  // foreign import log2e :: Number
  //
  constexpr double log2e = 1.4426950408889634;

  // foreign import log10e :: Number
  //
  constexpr double log10e = 0.4342944819032518;

  // foreign import pi :: Number
  //
  constexpr double pi = 3.141592653589793;

  // foreign import sqrt1_2 :: Number
  //
  constexpr double sqrt1_2 = 0.7071067811865476;

  // foreign import sqrt2 :: Number
  //
  constexpr double sqrt2 = 1.4142135623730951;

}

#endif // Math_FFI_HH
