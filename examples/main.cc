/**
 * main.cc - sample usage of uuid library
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

#define UNUSED __attribute__((__unused__))

using namespace std;
using namespace cppid;

int main(UNUSED int argc, UNUSED char **argv) {
  cout << "sample usage of uuid" << endl;
  uuid f;
  cout << "random uuid: " << f.to_string() << endl;
  return 0;
}
