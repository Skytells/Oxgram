// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#include "CryptoNoteBasic.h"
#include "crypto/crypto.h"

namespace CryptoNote {

KeyPair generateKeyPair() {
  KeyPair k;
  Crypto::generate_keys(k.publicKey, k.secretKey);
  return k;
}

}
