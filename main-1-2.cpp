#include <iostream>

using namespace std;
extern double array_mean(int array[], int n);

int main(void) {
  int array[4] = {1, 2, 3, 4};
  cout << "The mean of array is: " << array_mean(array, 4);

  return 0;
}