#include <iostream>
using namespace std;
// extern used to accedss function
extern int array_sum(int array[], int n);
int main(void) {
  int array[4] = {1, 2, 3, 4};
  cout << "The sum of the array is " << array_sum(array, 4);
  return 0;
}