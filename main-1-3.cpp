#include <iostream>

extern int num_count(int array[], int n, int number);
using namespace std;

int main(void) {
  int array[6] = {1, 2, 2, 3, 4, 4};
  cout << "The number of same numbers are: " << num_count(array, 6, 2);
  return 0;
}