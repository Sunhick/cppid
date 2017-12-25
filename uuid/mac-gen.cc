/**
 * mac-gen.cc - UUID generation using 802 MAC 
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/strategy.h"

#include <exception>

using namespace cppid;

uuid MacGenerator::newId() {
  throw std::runtime_error("Not implemented");
}
