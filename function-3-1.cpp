#include <iostream>
using namespace std;

int* readNumbers() {
  int* array = new int[10];
  for (int i = 0; i < 10; i++) {
    cout << "Enter number: " << endl;
    cin >> array[i];
  }
  return array;
}

void printNumbers(int* array) {
  for (int i = 0; i < 10; i++) {
    cout << i << " " << array[i] << endl;
  }
  delete array;
}

/* Write a function, equalsArray that when passed two int arrays of the same
 * length that is greater than 0 will return true if every number in the first
 * array is equal to the number at the same index in the second array. If the
 * length of the arrays is less than 1 the function must return false. For
 * example, comparing the two arrays, {1,2,3,4,5} and {1,2,3,4,5} would return
 * true but the two arrays {3,7} and {3,6} would return false.*/

bool equalsArray(int* numbers1, int* numbers2, int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (numbers1[i] == numbers2[i]) {
      count++;
    }
  }
  if (count == length) {
    return true;
  } else {
    return false;
  }
  delete numbers1, numbers2;
}