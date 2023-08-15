#include <iostream>
using namespace std;
extern int *readNumbers(), printNumbers(int* array);
extern bool equalsArray(int* numbers1, int* numbers2, int length);

int main(void) {
  cout << "array1:" << endl;
  int* array1 = readNumbers();
  cout << "array2: " << endl;
  int* array2 = readNumbers();
  cout << equalsArray(array1, array2, 10) << endl;
  return 0;
}