# Copyright (C) 2017 by Sunil
package(
    default_visibility = ["//visibility:private"],
)

cc_inc_library(
    name = "uuid",
    hdrs = [":export-hdrs"],
    deps = [
        ":uuid-internal"
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "uuid-internal",
    srcs = [":uuid-srcs"],
    hdrs = [":uuid-hdrs"],
)

# filegroup vs list ?
# filegroups allow you to exclude some of the files, glob for
# inclusion and exclusion etc. Which you can't do in list &
# would have to list all files manually.
filegroup(
    name = "uuid-srcs",
    srcs = [
        "uuid.cc",
        "pseudo-random.cc",
        "mac-gen.cc",
        "crypto-hash.cc"
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
        "strategy.h",
        # internal headers...
        # This doesn't work. How can i achieve this?
        # Export only subset of header files for consumption
        # "internal.h",
    ],
)
