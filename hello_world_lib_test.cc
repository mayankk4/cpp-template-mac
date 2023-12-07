#include <string>

#include "hello_world_lib.h"
#include "gtest/gtest.h"

using std::string;

namespace {
TEST(HelloWorldLibTest, TestMessage) {
    myproject::HelloHandler handler;
    string message = handler.get_hello_text();
    string expected = "Hello World!";
    EXPECT_EQ(expected, message);
}
}