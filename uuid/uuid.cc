/**
 * uuid.cc - implementation file
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

using namespace cppid;

uuid UUID::newId(UNUSED std::unique_ptr<Generator> g) {
  return uuid();
}
