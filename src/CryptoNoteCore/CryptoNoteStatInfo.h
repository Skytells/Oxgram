// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include "Serialization/ISerializer.h"

namespace CryptoNote
{
  struct core_stat_info
  {
    uint64_t tx_pool_size;
    uint64_t blockchain_height;
    uint64_t mining_speed;
    uint64_t alternative_blocks;
    std::string top_block_id_str;
    
    void serialize(ISerializer& s) {
      KV_MEMBER(tx_pool_size)
      KV_MEMBER(blockchain_height)
      KV_MEMBER(mining_speed)
      KV_MEMBER(alternative_blocks)
      KV_MEMBER(top_block_id_str)
    }
  };
}
