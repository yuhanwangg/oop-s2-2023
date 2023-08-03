#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main(void) {
  int num = 789;
  print_binary_str(to_string(num));
  return 0;
}