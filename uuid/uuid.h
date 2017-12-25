/**
 * uuid.h - uuid definition file
 *
 * Copyright (C) 2017 by Sunil
 */

#ifndef UUID_H
#define UUID_H

#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

// TODO (sunil): stop gap rm it later.
#define UNUSED __attribute__((__unused__))

namespace cppid {

// custom unsigned int with 48bits
struct uint48_t {
  uint64_t x : 48;
} __attribute__((packed));

/**
 * UUID string representation
 * UUID                   = time-low "-" time-mid "-"
 *                          time-high-and-version "-"
 *                          clock-seq-and-reserved
 *                          clock-seq-low "-" node
 * time-low               = 4hexOctet
 * time-mid               = 2hexOctet
 * time-high-and-version  = 2hexOctet
 * clock-seq-and-reserved = hexOctet
 * clock-seq-low          = hexOctet
 * node                   = 6hexOctet
 */
class uuid {
 public:
  std::string ToString() const;
  uuid(uint32_t time_low, uint16_t time_mid, uint16_t time_high_version,
       uint8_t clock_seq_reserved, uint8_t clock_seq_low, uint48_t node);

 private:
  const uint32_t time_low;
  const uint16_t time_mid;
  const uint16_t time_high_version;
  const uint8_t clock_seq_reserved;
  const uint8_t clock_seq_low;
  const uint48_t node;

  constexpr static int SIZE = 16;
};

// Interface for creating a new id strategies. It could be
// pseudo generator, 802 mac based or cryptographic hashing.
class Generator {
 public:
  virtual uuid NewId() = 0;
};

class UUID {
 public:
  // TODO (sunil):
  // provide an overload with default generator
  // without introducing cyclic dep. maybe i have
  // to refactor. (later)
  static uuid NewId(std::unique_ptr<Generator> g);
};

}  // namespace cppid

#endif /* UUID_H */
