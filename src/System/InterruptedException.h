// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <exception>

namespace System {

class InterruptedException : public std::exception {
  public:
    virtual const char* what() const throw() override {
      return "interrupted";
    }
};

}
