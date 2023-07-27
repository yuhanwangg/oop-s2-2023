#include <iostream>
extern double sum_even(double array[], int n);
using namespace std;

int main(void) {
  double array[6] = {1, 2, 3, 4, 5, 6};
  cout << sum_even(array, 6) << endl;
  return 0;
}