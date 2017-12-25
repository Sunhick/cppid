/**
 * uuid.cc - implementation file
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

#include <exception>

using namespace cppid;

uuid UUID::NewId(UNUSED std::unique_ptr<Generator> g) {
  // use generator to create a new uuid
  throw std::runtime_error("not implemented");
}

uuid::uuid(uint32_t time_low, uint16_t time_mid, uint16_t time_high_version,
           uint8_t clock_seq_reserved, uint8_t clock_seq_low, uint48_t node)
    : time_low(time_low),
      time_mid(time_mid),
      time_high_version(time_high_version),
      clock_seq_reserved(clock_seq_reserved),
      clock_seq_low(clock_seq_low),
      node(node) {}

std::string uuid::ToString() const {
  std::array<char, SIZE> buffer;
  sprintf(buffer.data(), "%u-%u-%u-%u-%u-%u", time_low, time_mid,
          time_high_version, clock_seq_reserved, clock_seq_low, node);
  return std::string(buffer.data());
}
