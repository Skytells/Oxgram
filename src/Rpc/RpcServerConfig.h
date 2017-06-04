// Copyright (c) 2011-2016 The Skytells developers
// Distributed under the MIT/X11 software license, see the accompanying
// @license MIT : http://www.opensource.org/licenses/mit-license.php.
// @package Oxgram Cryptocurrency by Skytells, Inc.

#pragma once

#include <boost/program_options.hpp>

namespace CryptoNote {

class RpcServerConfig {
public:

  RpcServerConfig();

  static void initOptions(boost::program_options::options_description& desc);
  void init(const boost::program_options::variables_map& options);

  std::string getBindAddress() const;

  std::string bindIp;
  uint16_t bindPort;
};

}