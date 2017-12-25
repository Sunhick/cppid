/**
 * uuid.h - uuid definition file
 *
 * Copyright (C) 2017 by Sunil
 */

#ifndef UUID_H
#define UUID_H

#include <iostream>
#include <string>

namespace cppid {

class uuid {
 public:
  uuid();
  virtual ~uuid();
  std::string to_string();

 private:
  std::string id;
};

}  // namespace cppid

#endif /* UUID_H */
