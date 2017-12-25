/**
 * uuid.h - uuid definition file
 *
 * Copyright (C) 2017 by Sunil
 */

#ifndef UUID_H
#define UUID_H

#include <iostream>
#include <memory>
#include <string>

// TODO (sunil): stop gap rm it later.
#define UNUSED __attribute__((__unused__))

namespace cppid {

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
struct uuid {
  std::string time_low;
  std::string time_mid;
  std::string time_high_version;
  std::string clock_seq_reserved;
  std::string clock_seq_low;
  std::string node;
};

// Interface for creating a new id strategies. It could be
// pseudo generator, 802 mac based or cryptographic hashing.
class Generator {
 public:
  virtual uuid newId() = 0;
};

class UUID {
 public:
  // TODO (sunil):
  // provide an overload with default generator
  // without introducing cyclic dep. maybe i have
  // to refactor. (later)
  static uuid newId(std::unique_ptr<Generator> g);
};

}  // namespace cppid

#endif /* UUID_H */
