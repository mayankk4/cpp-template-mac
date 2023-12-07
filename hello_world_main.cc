#include <iostream>

#include "hello_world_lib.h"

int main() {
    myproject::HelloHandler handler;
    std::cout << handler.get_hello_text() << std::endl;
}
