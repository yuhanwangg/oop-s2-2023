/* Given an array of integers, write a function to calculate the sum of the
 * elements if it is a palindrome array. If it is not a palindrome array, your
 * function must return -2. Your function must call separate functions to check
 * whether or not the array is a palindrome and to calculate the sum of its
 * elements.  If the length is 0 or negative each function must return -1 or
 * false as its result. The function must be placed in a file named
 * function-2-3.cpp. You must also write a main function and place it in a file
 * named main-2-3.cpp. */
#include <iostream>
using namespace std;
extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int palindrome_sum(int integers[], int length) {
  if (length > 0) {
    if (is_array_palindrome(integers, length) == false) {
      return -2;
    } else {
      return sum_integers(integers, length);
    }
  } else {
    return -1;
  }
}

bool is_array_palindrome(int integers[], int length) {
  if (length > 0) {
    int j = length;
    int count = 0;
    // checking
    for (int i = 0; i < (length / 2) + 1; i++) {
      if (integers[i] == integers[j]) {
        count++;
        // cout << integers[i] << " " << integers[j] << endl;
        j--;
      }
      cout << i << endl;
      cout << j << endl;
    }

    if (count == length / 2) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

int sum_integers(int integers[], int length) {
  if (length > 0) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum = sum + integers[i];
    }
    return sum;
  } else {
    return -1;
  }
}