// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include <System/ErrorMessage.h>
#include <gtest/gtest.h>

using namespace System;

TEST(ErrorMessageTests, testErrorMessage) {
  auto msg = errorMessage(100);
  ASSERT_EQ(msg.substr(0, 12), "result=100, ");
}
