#include <array>
#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main(void) {
  int array[10][10] = {};
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i == j) {
        array[i][j] = 0;
      } else {
        array[i][j] = 1;
      }
      //   cout << array[i][j] << " ";
    }
    // cout << '\n' << endl;
  }

  cout << is_identity(array) << endl;

  return 0;
}