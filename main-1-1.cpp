#include <iostream>
using namespace std;
extern void print_matrix(int array[10][10]);

int main(void) {
  int array[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      array[i][j] = 0;
    }
  }
  print_matrix(array);
}
