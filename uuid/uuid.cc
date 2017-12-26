/**
 * uuid.cc - implementation file
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

#include <exception>

using namespace cppid;

Generator::~Generator() {
  // required default implementation though dtor is marked pure virtual.
}

std::string UUID::NewId(std::unique_ptr<Generator> gen) {
  auto id = gen->NewId();
  return id.ToString();
}

uuid::uuid(const uint32_t& time_low,
           const uint16_t& time_mid,
           const uint16_t& time_high_version,
           const uint8_t& clock_seq_reserved,
           const uint8_t& clock_seq_low,
           const uint48_t& node)
    : time_low(time_low),
      time_mid(time_mid),
      time_high_version(time_high_version),
      clock_seq_reserved(clock_seq_reserved),
      clock_seq_low(clock_seq_low),
      node(node) {}

std::string uuid::ToString() const {
  std::array<char, SIZE> buffer;
  sprintf(buffer.data(), "%x-%x-%x-%x-%x-%lx", time_low, time_mid,
          time_high_version, clock_seq_reserved, clock_seq_low, (uint64_t)node);
  return std::string(buffer.data());
}
