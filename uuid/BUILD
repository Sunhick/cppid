# Copyright (C) 2017 by Sunil

# filegroup vs list ?
# filegroups allow you to exclude some of the files, glob for
# inclusion and exclusion etc. Which you can't do in list &
# would have to list all files manually.
filegroup(
    name = "uuid_srcs",
    srcs = [
        "uuid.cc",
    ],
)

filegroup(
    name = "uuid_hrds",
    srcs =  [
        "uuid.h"
    ]
)

cc_library(
    name = "uuid",
    srcs = [":uuid_srcs"],
    hdrs = [":uuid_hrds"],
    visibility = ["//visibility:public"],
)
