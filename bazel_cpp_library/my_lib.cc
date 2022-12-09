
#include "my_lib.h"
#include <string>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int get_int() {
    return 12;
}

const char* get_char_string() {
    return "const char string from lib";
}

someStructure get_struct(const char* base) {
    someStructure result;
    result.some_int = 10;
    result.some_char_string = base;
    return result;
}

// const char* work_on_strings() {
//     std::string x = "some string";
//     const char* result = x.c_str();
//     return result;
// }

std::string get_std_string() {
    return "std string from lib";
}
