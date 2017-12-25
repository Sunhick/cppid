/**
 * crypto-hash.cc - UUID generation using cryptographic hash function 
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/strategy.h"

#include <exception>

using namespace cppid;

uuid HashGenerator::newId() {
  throw std::runtime_error("Not implemented");
}
