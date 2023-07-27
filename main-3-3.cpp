#include <iostream>
extern double weighted_average(int array[], int n);
using namespace std;

int main(void) {
  int array[6] = {1, 1, 1, 1, 1, 1};
  cout << weighted_average(array, 6) << endl;
}
