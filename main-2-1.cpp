
#include <iostream>
extern int min_element(int array[], int n);
using namespace std;

int main(void) {
  int array[5] = {10, 2, 3, 1, 5};
  cout << "The minimum of the array is " << min_element(array, 5);
  return 0;
}