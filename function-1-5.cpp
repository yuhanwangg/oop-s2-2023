/* Given two two-dimensional arrays, add them together and print the result as
 * in 1-4 above. What relationship needs to be between the sizes of the two
 * matrices? */
#include <iostream>
using namespace std;

void print_summed(int array1[3][3], int array2[3][3]) {
  int new_array[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      new_array[i][j] = 0;
    }
  }
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      new_array[r][c] = array1[r][c] + array2[r][c];
      cout << new_array[r][c] << " ";
    }
    cout << endl;
  }
}