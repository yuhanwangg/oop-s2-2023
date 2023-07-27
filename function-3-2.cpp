/* Given an array of integers and its length, return the median of the array.
 * The median of a list is the middle number of the sorted list. E.g. the array
 * {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3. The
 * function must return 0 if the size parameter, n, is even or if it is less
 * than 1.*/
#include <iostream>

int median_array(int array[], int n) {
  // std::sort(array, array + n);

  if (n < 1) {
    return 0;
  } else {
    if (n % 2 != 0) {
      // create bubble sort

      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (array[i] > array[j]) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
          }
        }
      }
      return array[n / 2];
    } else {
      return 0;
    }
  }
}