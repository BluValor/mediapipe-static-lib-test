#ifndef MY_LIB_H
#define MY_LIB_H

#include <string>

struct someStructure {
  int some_int;
  const char* some_char_string;
};

int factorial(int n);
int get_int();
const char* get_char_string();
someStructure get_struct(const char* base);
// const char* work_on_strings();
std::string get_std_string();

#endif // MY_LIB_H