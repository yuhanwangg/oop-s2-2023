#include <math.h>

#include <iostream>
using namespace std;
extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(void) {
  int binary[30] = {1, 0, 1, 1, 1};
  int number_of_digits = 5;
  cout << bin_to_int(binary, number_of_digits) << endl;
}