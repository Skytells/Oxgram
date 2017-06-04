// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

namespace System {

class Event;

class EventLock {
public:
  explicit EventLock(Event& event);
  ~EventLock();
  EventLock& operator=(const EventLock&) = delete;

private:
  Event& event;
};

}
