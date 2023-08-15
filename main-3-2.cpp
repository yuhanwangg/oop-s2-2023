#include <iostream>
using namespace std;
extern int *readNumbers(), printNumbers(int* array);
extern int* reverseArray(int* numbers1, int length);
extern bool equalsArray(int* numbers1, int* numbers2, int length);

int main(void) {
  int* array1 = readNumbers();
  cout << equalsArray(reverseArray(array1, 10), array1, 10) << endl;
  delete array1;
}