#include <iostream>
using namespace std;
extern int *readNumbers(), printNumbers(int* array);

int main(void) {
  printNumbers(readNumbers());
  return 0;
}