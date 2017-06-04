// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

namespace CryptoNote {

class ICoreObserver {
public:
  virtual ~ICoreObserver() {};
  virtual void blockchainUpdated() {};
  virtual void poolUpdated() {};
};

}
