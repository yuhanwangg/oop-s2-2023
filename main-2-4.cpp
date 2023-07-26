#include <iostream>
extern bool is_ascending(int array[], int n);
using namespace std;

int main(void) {
  int array[4] = {1, 5, 3, 4};
  cout << is_ascending(array, 4) << endl;
}