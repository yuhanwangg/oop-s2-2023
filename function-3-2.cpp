/* Write a function, reverseArray that when passed an int array of length
 * greater than 0 will return a dynamically allocated array of the same length
 * but with the elements in the reverse order. For example, if passed the array,
 * {1,2,3,4,5,6,7,8,9,0} the function would return the array
 * {0,9,8,7,6,5,4,3,2,1}.*/

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

int* reverseArray(int* numbers1, int length) {
  int j = 0;
  int* new_array = new int[length];
  for (int i = length - 1; i > -1; i--) {
    new_array[j] = numbers1[i];
    j++;
  }
  return new_array;
}

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