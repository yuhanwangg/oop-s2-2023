/* Create a function named changeValue with signature void changeValue(double*)
 * that accepts a pointer to a double and changes the value of the double it
 * points at to 42. Call this function from your main function and verify that
 * the original double value was indeed changed.*/
#include <iostream>
using namespace std;

void changeValue() {
  double value = 0, *ptr;
  cout << "Original: " << value << endl;
  ptr = &value;
  *ptr = 42;
  cout << "New: " << *ptr << endl;
}