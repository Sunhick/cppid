/**
 * uuid-gen.cc - UUID generator gathers information required for
 *  UUID creation.
 *
 * Copyright (C) 2017 by Sunil
 */
#include "uuid/uuid.h"

#include <ctime>
#include <exception>
#include <mutex>

using namespace cppid;

uuid UidGenerator::NewId() {
  std::mutex state;
  std::lock_guard<std::mutex> lock(state);

  UNUSED auto timeStamp = std::time(nullptr);
  UNUSED auto nodeId = getMAC();
  return uuid((uint32_t)0xA12F0, (uint16_t)0xBB0, (uint16_t)0, (uint8_t)0,
              (uint8_t)0, (uint48_t)0x99);
}

uint48_t UidGenerator::getMAC() {
  // look for 802 MAC address if not then just return
  // a random 48bit integer
  // TODO (sunil): get mac address
  srand48(std::time(nullptr));
  return static_cast<uint48_t>(lrand48());
}
