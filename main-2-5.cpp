#include <iostream>
extern bool is_descending(int array[], int n);
using namespace std;

int main(void) {
  int array[4] = {5, 3, 2, 2};
  cout << is_descending(array, 4) << endl;
}