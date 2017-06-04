// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "ErrorMessage.h"
#include <cerrno>
#include <cstring>

namespace System {

std::string lastErrorMessage() {
  return errorMessage(errno);
}

std::string errorMessage(int err) {
  return "result=" + std::to_string(err) + ", " + std::strerror(err);
}

}
