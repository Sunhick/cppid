/**
 * pseudo-random.cc - UUID generation using pseudo random
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/strategy.h"

#include <exception>

using namespace cppid;

uuid PseudoRandomGenerator::newId() {
  throw std::runtime_error("Not implemented");
}
