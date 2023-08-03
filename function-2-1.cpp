/* Convert base 10 string into base 2 */

#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int mod = 0;
  int div = stoi(decimal_number);
  int arr[30] = {0};
  int i = 0;

  while (div != 0) {
    mod = div % 2;
    arr[i] = mod;
    div = div / 2;
    i++;
  }

  for (int j = i - 1; j > -1; j--) {
    cout << arr[j];
  }
  cout << endl;
}