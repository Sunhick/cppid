/**
 * uuid.cc - implementation file
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

using namespace cppid;

uuid::uuid() {}

uuid::~uuid() {}

std::string uuid::to_string() {
  auto f = [] () {
    return std::string("some-uuid-to-string-here");
  };
  auto str = f();
  return str;
}
