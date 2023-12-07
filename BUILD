load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "hello_world_lib",
    srcs = ["hello_world_lib.cc"],
    hdrs = ["hello_world_lib.h"],
    visibility = ["//visibility:public"],
)

# All tests 
cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        ":hello_world_lib",
        "@googletest//:gtest_main"
    ],
)

cc_binary(
    name = "hello_world",
    srcs = ["hello_world_main.cc"],
    deps = [
        ":hello_world_lib",
    ],
)


