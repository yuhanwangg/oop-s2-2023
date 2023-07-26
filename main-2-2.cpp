
#include <iostream>
extern int max_element(int array[], int n);
using namespace std;

int main(void) {
  int array[5] = {1, 2, 30, 1, 5};
  cout << "The maximum of the array is " << max_element(array, 5);
  return 0;
}