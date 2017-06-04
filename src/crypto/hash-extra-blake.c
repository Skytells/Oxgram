// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include <stddef.h>
#include <stdint.h>

#include "blake256.h"

void hash_extra_blake(const void *data, size_t length, char *hash) {
  blake256_hash((uint8_t*)hash, data, length);
}
