#include <iostream>
using namespace std;
extern int *readNumbers(), printNumbers(int* array);
extern void hexDigits(int* numbers, int length);

int main(void) {
  hexDigits(readNumbers(), 10);
  return 0;
}