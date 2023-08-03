
#include <cmath>
#include <iostream>
using namespace std;
extern bool is_palindrome(int array[], int n);
extern int sum_array_elements(int array[], int n);
extern int sum_if_palindrome(int array[], int n);

int main(void) {
  int array[4] = {1, 2, 2, 1};
  int n = 4;

  cout << sum_if_palindrome(array, n) << endl;
}