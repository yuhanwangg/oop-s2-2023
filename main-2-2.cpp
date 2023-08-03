
#include <cmath>
#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(void) {
  int binary_digits[3] = {1, 0, 0};
  int number_of_digits = 3;

  std::cout << binary_to_int(binary_digits, number_of_digits) << endl;
}