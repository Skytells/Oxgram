// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "StringOutputStream.h"

namespace Common {

StringOutputStream::StringOutputStream(std::string& out) : out(out) {
}

size_t StringOutputStream::writeSome(const void* data, size_t size) {
  out.append(static_cast<const char*>(data), size);
  return size;
}

}
