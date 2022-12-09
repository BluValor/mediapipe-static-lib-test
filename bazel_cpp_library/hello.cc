#include "hello.h"

std::string get_hello() {
  return "Hello world from inside library!";
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}