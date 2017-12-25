/**
 * uuid.cc - implementation file
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

using namespace cppid;

uuid UUID::newId(UNUSED std::unique_ptr<Generator> g) {
  // use generator to create a new uuid
  return uuid();
}

std::string uuid::to_string() {
  std::array<char, SIZE> buffer;
  sprintf(buffer.data(), "%u-%u-%u-%u-%u-%u", time_low, time_mid,
          time_high_version, clock_seq_reserved, clock_seq_low, node);
  return std::string(buffer.data());
}
