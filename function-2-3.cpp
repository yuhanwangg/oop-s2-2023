/* Palindrome check */

bool is_palindrome(int array[], int n) {
  int end = 0, front = 0;

  // for even
  end = array[n - 1];
  front = array[0];
  if (n < 1) {
    return false;
  }

  if (n % 2 == 0) {
    // for (int i = 1; i < n / 2; i++) {
    //   if (array[i] < front) {
    //     return false;  // testing for ascending order
    //   } else {
    //     front = array[i];
    //   }
    // }

    // for (int i = n - 2; i > n / 2; i--) {
    //   if (array[i] < end) {
    //     return false;
    //   } else {
    //     end = array[i];
    //   }
    // }

    int j = n - 1;
    for (int i = 0; i < n / 2; i++) {
      if (array[i] != array[j]) {
        return false;
      } else {
        j--;
      }
    }
    return true;
  } else {
    // // for odd arrays
    // for (int i = 1; i <= (n / 2); i++) {
    //   if (array[i] < front) {
    //     return false;  // testing for ascending order
    //   } else {
    //     front = array[i];
    //   }
    // }

    // for (int i = n - 2; i >= (n / 2); i--) {
    //   if (array[i] < end) {
    //     return false;
    //   } else {
    //     end = array[i];
    //   }
    // }

    int j = n - 1;
    for (int i = 0; i < (n / 2); i++) {  // c++ rounds down
      if (array[i] != array[j]) {
        return false;
      } else {
        j--;
      }
    }
    return true;
  }
}

int sum_array_elements(int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  return sum;
}

int sum_if_palindrome(int array[], int n) {
  if (n < 1) {
    return -1;
  } else {
    if (is_palindrome(array, n) == false) {
      return -2;
    } else {
      return sum_array_elements(array, n);
    }
  }
}