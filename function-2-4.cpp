/* determine max and min, return sum. if lenghth is <0, return -1*/

int array_min(int integers[], int length) {
  if (length > 0) {
    int min = integers[0];
    for (int i = 1; i < length; i++) {
      if (integers[i] < min) {
        min = integers[i];
      }
    }
    return min;
  } else {
    return -1;
  }
}

int array_max(int integers[], int length) {
  if (length > 0) {
    int max = integers[1];
    for (int i = 1; i < length; i++) {
      if (max < integers[i]) {
        max = integers[i];
      }
    }
    return max;
  } else {
    return 0;
  }
}

int sum_min_max(int integers[], int length) {
  if (length > 0) {
    return array_min(integers, length) + array_max(integers, length);
  } else {
    return -1;
  }
}