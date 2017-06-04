// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include "CryptoNote.h"

namespace CryptoNote {
class IBlock {
public:
  virtual ~IBlock();

  virtual const Block& getBlock() const = 0;
  virtual size_t getTransactionCount() const = 0;
  virtual const Transaction& getTransaction(size_t index) const = 0;
};
}
