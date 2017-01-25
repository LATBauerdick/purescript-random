///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Random.hh
// Copyright   :  (c) Andy Arvanitis 2016
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Random number generation FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Control_Monad_Eff_Random_FFI_HH
#define Control_Monad_Eff_Random_FFI_HH

#include "PureScript/PureScript.hh"

namespace Control_Monad_Eff_Random {
  using namespace PureScript;

  // foreign import random :: forall e. Eff (random :: RANDOM | e) Number
  //
  auto random() -> any;

}

#endif // Control_Monad_Eff_Random_FFI_HH
