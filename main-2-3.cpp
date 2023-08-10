#include <iostream>
using namespace std;
extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(void) {
  int integers[5] = {1, 2, 3, 2, 1};
  int length = 5;
  cout << palindrome_sum(integers, length) << endl;
}