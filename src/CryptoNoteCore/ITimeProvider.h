// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <time.h>

namespace CryptoNote {

  struct ITimeProvider {
    virtual time_t now() = 0;
    virtual ~ITimeProvider() {}
  };

  struct RealTimeProvider : public ITimeProvider {
    virtual time_t now() override {
      return time(nullptr);
    }
  };

}
