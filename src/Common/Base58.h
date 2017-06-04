// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <cstdint>
#include <string>

namespace Tools
{
  namespace Base58
  {
    std::string encode(const std::string& data);
    bool decode(const std::string& enc, std::string& data);

    std::string encode_addr(uint64_t tag, const std::string& data);
    bool decode_addr(std::string addr, uint64_t& tag, std::string& data);
  }
}
