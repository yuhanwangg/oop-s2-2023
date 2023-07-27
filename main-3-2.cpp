#include <iostream>
extern int median_array(int array[], int n);
using namespace std;

int main(void) {
  int array[5] = {3, 4, 2, 8, 1};
  cout << median_array(array, 5) << endl;
}