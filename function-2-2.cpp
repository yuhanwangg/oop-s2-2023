/* base 10 to base 2 */

#include <cmath>
#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  int integer = 0;
  int index = 0;
  for (int i = number_of_digits - 1; i > -1; i--) {
    if (binary_digits[i] == 1) {
      integer = integer + pow(2, index);
      index++;
    } else {
      index++;
    }
  }
  return integer;
}
