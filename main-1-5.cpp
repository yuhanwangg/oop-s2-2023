#include <iostream>
extern int count_evens(int number);
using namespace std;

int main(void) {
  int number = 10;
  cout << "No. of even number is " << count_evens(number);
  return 0;
}