#include <iostream>
#include <string>
#include "my_lib.h"

int main() {
    std::cout << "5! = " << factorial(5) << std::endl;
    std::cout << get_int() << std::endl;
    std::cout << get_char_string() << std::endl;
    someStructure s = get_struct("some string");
    std::cout << s.some_int << " " << s.some_char_string << std::endl;
    // std::cout << work_on_strings();
    std::cout << get_std_string();
    return 0;
}