/* Given a matrix of integers, return the sum of the elements along
the main diagonal (top left bottom right)*/
#include <array>
int sum_diagonal(int arrays[4][4]) {
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        sum = sum + arrays[i][j];
      }
    }
  }
  return sum;
}