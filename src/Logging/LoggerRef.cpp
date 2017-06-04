// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "LoggerRef.h"

namespace Logging {

LoggerRef::LoggerRef(ILogger& logger, const std::string& category) : logger(&logger), category(category) {
}

LoggerMessage LoggerRef::operator()(Level level, const std::string& color) const {
  return LoggerMessage(*logger, category, level, color);
}

ILogger& LoggerRef::getLogger() const {
  return *logger;
}

}
