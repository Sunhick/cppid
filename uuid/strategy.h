/**
 * strategy.h - defines the interface for generating UUID strategy.
 *
 * Copyright (C) 2017 by Sunil
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include "uuid/uuid.h"

namespace cppid {

class PseudoRandomGenerator : public Generator {
 public:
  uuid newId();
};

class MacGenerator : public Generator {
 public:
  uuid newId();
};

class HashGenerator : public Generator {
 public:
  uuid newId();
};

}  // namespace cppid

#endif /* STRATEGY_H */
