// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <sstream>

namespace CryptoNote {

class IStreamSerializable {
public:
  virtual void save(std::ostream& os) = 0;
  virtual void load(std::istream& in) = 0;
};

}
