/* Given a matrix, print out the scaled version of the matrix, where you
 * multiply every element in the matrix by the same numeric value. Elements
 * should be printed by row, with a space separating elements on a row, and a
 * newline character separating rows. */

#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale) {
  int new_array[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      new_array[i][j] = 0;
    }
  }

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      new_array[r][c] = array[r][c] * scale;
      cout << new_array[r][c] << " ";
    }
    cout << endl;
  }
}