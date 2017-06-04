// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <cstdint>
#include <utility>

namespace CryptoNote {

class IFusionManager {
public:
  struct EstimateResult {
    size_t fusionReadyCount;
    size_t totalOutputCount;
  };

  virtual ~IFusionManager() {}

  virtual size_t createFusionTransaction(uint64_t threshold, uint64_t mixin) = 0;
  virtual bool isFusionTransaction(size_t transactionId) const = 0;
  virtual EstimateResult estimate(uint64_t threshold) const = 0;
};

}
