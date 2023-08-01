#include <iostream>
#include <string>
using namespace std;

string base_two(int number) {
  int mod = 0;
  int div = number;
  string binary = "";

  while (div != 0) {
    mod = div % 2;
    div = div / 2;

    binary = binary + to_string(mod);
  }

  return binary;
}