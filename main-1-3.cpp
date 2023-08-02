#include <array>
#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main(void) {
  int array[4][4] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
  count_digits(array);
  return 0;
}