#include <iostream>

int main(void) {
  int number1[12] = {1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1};
  int number2[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1};
  int sum = 0;
  int binary[12] = 0;

  for (int i = 11; i > -1; i--) {
    sum = number2[i] + number1[i];
    switch (sum) {
      case 0:
        binary[i] = 0;
        break;
      case 1:
        binary[i] = 1;
        break;
      case 2:
        binary[i] = 0;
        binary[i + 1] = 1;
        break;
    }
  }
}