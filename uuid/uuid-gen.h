/**
 * strategy.h - defines the interface for generating UUID strategy.
 *
 * Copyright (C) 2017 by Sunil
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include "uuid/uuid.h"

namespace cppid {

class UidGenerator : public Generator {
 public:
  uuid NewId();
};

}  // namespace cppid

#endif /* STRATEGY_H */
