# UUID testing using gtest
cc_test(
    name = "uuid-test",
    srcs = ["uuid-test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "//uuid:uuid",
        "@gtest//:main",
    ],
)
