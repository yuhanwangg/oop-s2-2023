//  Write a function that returns the average of all elements in an integer
//  array. The function takes as parameters the array and the number of elements
//  in the array. Your function should return 0.0 if the size parameter, n, is
//  less than 1.
double array_mean(int array[], int n) {
  if (n > 1) {
    double sum = 0;
    double mean = 0;
    for (int i = 0; i < n; i++) {
      sum = sum + array[i];
    }
    mean = sum / n;
    return mean;
  } else {
    return 0.0;
  }
}