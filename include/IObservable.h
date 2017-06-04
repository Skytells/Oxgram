// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

namespace CryptoNote {

template <typename T>
class IObservable {
public:
  virtual void addObserver(T* observer) = 0;
  virtual void removeObserver(T* observer) = 0;
};

}
