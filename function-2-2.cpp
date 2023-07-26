// Write a function that returns the maximum element in an integer array. The
// function should return 0 if the size parameter, n, is less than 1.

int max_element(int array[], int n) {
  if (n > 1) {
    int max = array[1];
    for (int i = 1; i < n; i++) {
      if (max < array[i]) {
        max = array[i];
      }
    }
    return max;
  } else {
    return 0;
  }
}