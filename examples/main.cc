/**
 * main.cc - sample usage of uuid library
 *
 * Copyright (C) 2017 by Sunil
 */
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/types.h>

#include <cstdlib>
#include <ctime>

#include "uuid/uuid.h"

using namespace std;
using namespace cppid;

int main(UNUSED int argc, UNUSED char** argv) {
  cout << "sample usage of uuid" << endl;

  UUID f;
  auto uid = f.NewId();

  cout << "random uuid: " << uid << endl;
  cout << "size of uuid: " << sizeof(uuid) * 8 << " bits." << endl;
  cout << "size of time: " << sizeof(time_t) * 8 << endl;
  cout << "time-stamp : " << time(nullptr) << endl;

  struct ifaddrs* ifAddrs = NULL;
  struct ifaddrs* ifa = NULL;
  void* addrPtr = NULL;

  getifaddrs(&ifAddrs);

  for (ifa = ifAddrs; ifa != NULL; ifa = ifa->ifa_next) {
    if (!ifa->ifa_addr)
      continue;

    if (ifa->ifa_addr->sa_family == AF_INET) {
      addrPtr = &((struct sockaddr_in*)ifa->ifa_addr)->sin_addr;
      char buff[INET_ADDRSTRLEN];
      inet_ntop(AF_INET, addrPtr, buff, INET_ADDRSTRLEN);
      cout << ifa->ifa_name << " ipv4 addr: " << buff << endl;
    } else if (ifa->ifa_addr->sa_family == AF_INET6) {
      addrPtr = &((struct sockaddr_in6*)ifa->ifa_addr)->sin6_addr;
      char buff[INET6_ADDRSTRLEN];
      inet_ntop(AF_INET6, addrPtr, buff, INET6_ADDRSTRLEN);
      cout << ifa->ifa_name << " ipv6 addr: " << buff << endl;
    }
  }
  if (ifAddrs != NULL)
    freeifaddrs(ifAddrs);

  srand48(time(nullptr));
  auto r = lrand48();
  cout << "lrand48() = " << r << endl;

  return 0;
}
