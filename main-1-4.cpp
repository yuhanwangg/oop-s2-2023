#include <array>
#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3], int scale);

int main(void) {
  int array[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
  print_scaled(array, 3);
}