/* Given a binary number represented as an array, write a function that takes
 * the array and its size as a parameter, and returns the integer value. You may
 * assume that there are at least 1 and no more than 30 numbers in the array and
 * that all the values are either 0 or 1. The array is ordered with most
 * significant binary digit at the start (index 0) and the least significant
 * digit at the end. The function must be placed in a file named
 * function-2-2.cpp. You must also write a main function and place it in a file
 * named main-2-2.cpp. (The math.h library contains common math functions like
 * floor and pow)*/
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
  int sum = 0;
  for (int i = number_of_digits; i > -1; i--) {
    if (binary_digits[i] == 1) {
      sum = sum + pow(2, i);
    }
  }
  return sum;
}