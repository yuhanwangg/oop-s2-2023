/* Write a function, secondSmallestSum that when passed an int array of any
 * length greater than 1 will calculate the sum of the elements of every
 * possible sub-array and then return the second smallest sum found. It is
 * possible for the smallest and second smallest sums to have the same value.*/

#include <iostream>
using namespace std;

int* readNumbers() {
  int* array = new int[4];
  for (int i = 0; i < 4; i++) {
    // cout << "Enter number: " << endl;
    cin >> array[i];
  }
  return array;
}

int secondSmallestSum(int* numbers, int length) {
  int sum_length = 0;
  for (int i = 0; i < length + 1; i++) {
    sum_length = sum_length + i;
  }
  int sum_total = 0;
  int k = 0;
  int* sum = new int[sum_length];  // making new sum array
  for (int i = 0; i < length; i++) {
    sum_total = 0;
    for (int j = i; j < length; j++) {
      sum_total = sum_total + numbers[j];
      sum[k] = sum_total;
      //   cout << "sum" << sum[k] << endl;
      k++;
    }
  }
  // checking for minimum
  int min = sum[0];  // establishing minimum first
  cout << "min: " << min << endl;
  int* min_check = new int[sum_length - 1];  // new array without minimum
  int min_index = 0;  // recording the index where the minimum is in sum
  for (int i = 0; i < sum_length; i++) {
    if (min > sum[i]) {
      sum[i] = min;
      min_index = i;
    }
    // cout << "min: " << min << endl;
  }

  int m = 0;  // indexing for min_check
  for (int i = 0; i < sum_length; i++) {
    if (min_index != i) {
      min_check[m] =
          sum[i];  // arranging the same array BUT without the minimum
                   //   cout << "sum[i]: " << sum[i] << endl;
      m++;
    }
  }
  int min_2 = min_check[0];  // making second minimum
  for (int i = 0; i < sum_length - 1; i++) {
    if (min_2 > min_check[i]) {
      min_2 = min_check[i];
    }
  }

  return min_2;
}
