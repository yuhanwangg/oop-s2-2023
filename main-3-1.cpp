#include <iostream>
extern bool is_fanarray(int array[], int n);
using namespace std;

int main(void) {
  int array[3] = {1, 3, 1};
  cout << is_fanarray(array, 3) << endl;
}