"""cppid specific cxxopts.

Flags for c++ compiler.
"""
GCC_FLAGS = [
    "-std=c++14",
    "-Wall",
    "-Werror",
    "-Wextra",
    "-Woverloaded-virtual",
    "-Wpedantic",
    "-Wsequence-point",
    "-Wunused",
    "-pedantic-errors",
    "-Wcast-qual",
    "-Wunused-local-typedefs",
    "-Wvla",
    "-Wwrite-strings",
    "-Wvarargs",
    "-Wpointer-arith"
]

GCC_TEST_FLAGS = [
    "-std=c++14",
    "-Wno-conversion-null",
    "-Wno-missing-declarations",
    "-Wno-sign-compare",
    "-Wno-unused-function",
    "-Wno-unused-parameter",
    "-Wno-unused-private-field",
]
