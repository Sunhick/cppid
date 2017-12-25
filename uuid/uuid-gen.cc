/**
 * pseudo-random.cc - UUID generation using pseudo random
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/uuid-gen.h"

#include <exception>

using namespace cppid;

uuid UidGenerator::NewId() {
  return uuid((uint32_t)0xA12F0, (uint16_t)0xBB0, (uint16_t)0, (uint8_t)0,
              (uint8_t)0, (uint48_t)0x99);
}
