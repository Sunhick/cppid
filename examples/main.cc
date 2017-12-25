/**
 * main.cc - sample usage of uuid library
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid.h"

using namespace std;
using namespace cppid;

int main(UNUSED int argc, UNUSED char **argv) {
  cout << "sample usage of uuid" << endl;
  // UUID f;
  // cout << "random uuid: " << f.to_string() << endl;
  cout << "size of uuid: " << sizeof(uuid)*8 << " bits." << endl;
  return 0;
}
