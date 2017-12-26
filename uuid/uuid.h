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
  uint64_t v : 48;
  explicit uint48_t(uint64_t v) : v(v) {}

  // Define implicit conversion. so that we can
  // use uint48_t as primitive data type w/o explicit
  // type casting. Doesn't seem to work investigate.
  operator uint64_t() const { return v; }
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
  explicit uuid(const uint32_t& time_low, const uint16_t& time_mid,
                const uint16_t& time_high_version,
                const uint8_t& clock_seq_reserved, const uint8_t& clock_seq_low,
                const uint48_t& node);

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
  virtual ~Generator() = 0;
};

class UidGenerator : public Generator {
 public:
  uuid NewId();

 private:
  uint48_t getMAC();
};

class UUID {
 public:
  static std::string NewId(
      std::unique_ptr<Generator> gen = std::make_unique<UidGenerator>());
};

}  // namespace cppid

#endif /* UUID_H */
