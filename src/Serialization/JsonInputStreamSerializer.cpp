// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "Serialization/JsonInputStreamSerializer.h"

#include <ctype.h>
#include <exception>

namespace CryptoNote {

namespace {

Common::JsonValue getJsonValueFromStreamHelper(std::istream& stream) {
  Common::JsonValue value;
  stream >> value;
  return value;
}

}

JsonInputStreamSerializer::JsonInputStreamSerializer(std::istream& stream) : JsonInputValueSerializer(getJsonValueFromStreamHelper(stream)) {
}

JsonInputStreamSerializer::~JsonInputStreamSerializer() {
}

} //namespace CryptoNote
