// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "crypto/random.c"

#include "crypto-tests.h"

void setup_random(void) {
    memset(&state, 42, sizeof(union hash_state));
}
