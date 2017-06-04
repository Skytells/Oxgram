// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

namespace System {

class Dispatcher;

class Event {
public:
  Event();
  explicit Event(Dispatcher& dispatcher);
  Event(const Event&) = delete;
  Event(Event&& other);
  ~Event();
  Event& operator=(const Event&) = delete;
  Event& operator=(Event&& other);
  bool get() const;
  void clear();
  void set();
  void wait();

private:
  Dispatcher* dispatcher;
  bool state;
  void* first;
  void* last;
};

}
