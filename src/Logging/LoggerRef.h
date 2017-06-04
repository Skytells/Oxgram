// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include "ILogger.h"
#include "LoggerMessage.h"

namespace Logging {

class LoggerRef {
public:
  LoggerRef(ILogger& logger, const std::string& category);
  LoggerMessage operator()(Level level = INFO, const std::string& color = DEFAULT) const;
  ILogger& getLogger() const;

private:
  ILogger* logger;
  std::string category;
};

}
