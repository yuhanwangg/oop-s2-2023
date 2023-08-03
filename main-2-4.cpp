
#include <cmath>
#include <iostream>
using namespace std;
extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main(void) {
  int integers[5] = {2, 3, 1, 4, 5};
  int length = 5;

  cout << sum_min_max(integers, length) << endl;
  return 0;
}