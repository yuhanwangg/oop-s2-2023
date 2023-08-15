#include <iostream>
using namespace std;

int* readNumbers() {
  int* array = new int[10];
  for (int i = 0; i < 10; i++) {
    cout << "Enter number: " << endl;
    cin >> array[i];
  }
  return array;
}

void printNumbers(int* array) {
  for (int i = 0; i < 10; i++) {
    cout << i << " " << array[i] << endl;
  }
  delete array;
}

/* Write a function, hexDigits that when passed an int array of any length
 * greater than 0 will print the corresponding hex digit for each int, one per
 * line. The corresponding hex digit should be determined using a switch
 * statement. The hex digits must be printed in uppercase and in order starting
 * with the first entry. Each line of output should start with the array index
 * of the number being written out, followed by a space, then the number, then
 * another space, then the matching hex digit and finally a newline. You may
 * assume that all ints are numbers in the range 0 to 15. The For example, if
 * the numbers 11 12 3 4 15 6 7 8 9 10 are read by the program, the output
 * should be:*/

void hexDigits(int* numbers, int length) {
  for (int i = 0; i < length; i++) {
    if (numbers[i] < 11) {
      cout << i << " " << numbers[i] << endl;
    } else {
      switch (numbers[i]) {
        case 11:
          cout << i << " " << numbers[i] << " " << 'A' << endl;
          break;
        case 12:
          cout << i << " " << numbers[i] << " " << 'B' << endl;
          break;
        case 13:
          cout << i << " " << numbers[i] << " " << 'C' << endl;
          break;
        case 14:
          cout << i << " " << numbers[i] << " " << 'D' << endl;
          break;
        case 15:
          cout << i << " " << numbers[i] << " " << 'E' << endl;
          break;
      }
    }
  }
}