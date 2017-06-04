// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <mutex>
#include "CommonLogger.h"

namespace Logging {

class ConsoleLogger : public CommonLogger {
public:
  ConsoleLogger(Level level = DEBUGGING);

protected:
  virtual void doLogString(const std::string& message) override;

private:
  std::mutex mutex;
};

}
