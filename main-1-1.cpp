#include <array>
#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(void) {
  int array[4][4] = {};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      array[i][j] = 1;
    }
  }
  cout << sum_diagonal(array) << endl;
}