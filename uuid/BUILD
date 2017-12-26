# Copyright (C) 2017 by Sunil
load(
    "//:cxxopts.bzl",
    "GCC_FLAGS"
)
package(default_visibility = ["//visibility:private"])

licenses(["notice"])

cc_library(
    name = "uuid",
    hdrs = [":export-hdrs"],
    deps = [
        ":uuid-internal"
    ],
    copts = GCC_FLAGS,
    visibility = ["//visibility:public"],
)

cc_library(
    name = "uuid-internal",
    srcs = [":uuid-srcs"],
    hdrs = [":uuid-hdrs"],
    copts = GCC_FLAGS,
)

# filegroup vs list ?
# filegroups allow you to exclude some of the files, glob for
# inclusion and exclusion etc. Which you can't do in list &
# would have to list alln files manually.
filegroup(
    name = "uuid-srcs",
    srcs = [
        "uuid.cc",
        "uuid-gen.cc",
    ],
)

filegroup(
    name = "export-hdrs",
    srcs =  [
        "uuid.h"
    ],
)

filegroup(
    name = "uuid-hdrs",
    srcs = [
        ":export-hdrs",
        # internal headers...
        # This doesn't work. How can i achieve this?
        # Export only subset of header files for consumption
        # "internal.h",
    ],
)
