// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <System/Dispatcher.h>

namespace System {

class ContextGroup {
public:
  explicit ContextGroup(Dispatcher& dispatcher);
  ContextGroup(const ContextGroup&) = delete;
  ContextGroup(ContextGroup&& other);
  ~ContextGroup();
  ContextGroup& operator=(const ContextGroup&) = delete;
  ContextGroup& operator=(ContextGroup&& other);
  void interrupt();
  void spawn(std::function<void()>&& procedure);
  void wait();

private:
  Dispatcher* dispatcher;
  NativeContextGroup contextGroup;
};

}
