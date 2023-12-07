#ifndef MY_PROJECT_HELLO_HANDLER_H
#define MY_PROJECT_HELLO_HANDLER_H

#include <string>

namespace myproject {

class HelloHandler {
 public:
  static std::string get_hello_text();
};

}  // namespace myproject

#endif