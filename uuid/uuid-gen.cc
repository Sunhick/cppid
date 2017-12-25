/**
 * pseudo-random.cc - UUID generation using pseudo random
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/uuid-gen.h"

#include <exception>

using namespace cppid;

uuid UidGenerator::NewId() {
  throw std::runtime_error("Not implemented");
}
