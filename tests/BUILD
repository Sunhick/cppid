# UUID testing using gtest
load(
    "//:cxxopts.bzl",
    "GCC_TEST_FLAGS"
)

cc_test(
    name = "uuid-test",
    srcs = ["uuid-test.cc"],
    copts = GCC_TEST_FLAGS,
    deps = [
        "//uuid:uuid",
        "@com_google_googletest//:gtest_main",
    ],
)
