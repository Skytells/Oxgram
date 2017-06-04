// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include "IWallet.h"
#include "INode.h"
#include <System/Dispatcher.h>

#include <string>
#include <memory>

namespace CryptoNote {
class Currency;
}

namespace PaymentService {

class WalletFactory {
public:
  static CryptoNote::IWallet* createWallet(const CryptoNote::Currency& currency, CryptoNote::INode& node, System::Dispatcher& dispatcher);
private:
  WalletFactory();
  ~WalletFactory();

  static WalletFactory factory;
};

} //namespace PaymentService
