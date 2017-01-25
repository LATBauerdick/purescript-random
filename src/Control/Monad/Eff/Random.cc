///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Random.cc
// Copyright   :  (c) Andy Arvanitis 2016
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
//  Random number generation FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#include <random>
#include "Random.hh"

namespace Control_Monad_Eff_Random {

  // foreign import random :: forall e. Eff (random :: RANDOM | e) Number
  //
  auto random() -> any {
    static std::uniform_real_distribution<double> distribution(0, 1);
    static std::random_device dev;
    static std::mt19937_64 generator(static_cast<uint64_t>(dev()) << 32 | dev());
    return distribution(generator);
  }

}
