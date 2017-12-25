/**
 * main.cc - sample usage of uuid library
 *
 * Copyright (C) 2017 by Sunil
 */

#include "uuid/uuid-gen.h"
#include "uuid/uuid.h"

using namespace std;
using namespace cppid;

int main(UNUSED int argc, UNUSED char **argv) {
  cout << "sample usage of uuid" << endl;

  UUID f;
  auto uid = f.NewId(std::move(std::make_unique<UidGenerator>()));
  cout << "random uuid: " << uid << endl;
  cout << "size of uuid: " << sizeof(uuid) * 8 << " bits." << endl;
  return 0;
}
