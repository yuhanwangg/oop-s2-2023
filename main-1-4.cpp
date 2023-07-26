#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
using namespace std;

int main(void) {
  int array[4] = {1, 2, 3, 4};
  int secondarray[4] = {2, 3, 4, 5};

  cout << "The sum of two arrays is: " << sum_two_arrays(array, secondarray, 4);
  return 0;
}