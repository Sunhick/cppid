# Copyright (C) 2017 by Sunil
load(
    "//:cxxopts.bzl",
    "GCC_FLAGS"
)

cc_binary(
    name = "uuid-gen",
    srcs = glob(["*.cc"]),
    deps = [
        "//uuid:uuid",
    ],
    copts = GCC_FLAGS,
    visibility = ["//visibility:public"],
)
