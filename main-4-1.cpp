#include <iostream>
using namespace std;
extern int *readNumbers(), printNumbers(int* array);
extern int secondSmallestSum(int* numbers, int length);

int main(void) {
  int* array1 = readNumbers();
  cout << secondSmallestSum(array1, 4) << endl;
  delete array1;
}