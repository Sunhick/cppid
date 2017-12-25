/**
 * uuid-test.cc
 *
 * Copyright (C) 2017 by Sunil
 */
#include "gtest/gtest.h"
#include "uuid/uuid.h"

using namespace cppid;

TEST(UUID, UUID_tostring) {
  // testing the uuid
  uuid f;
  EXPECT_EQ(f.to_string(), std::string("some-uuid-to-string-here"));
}
