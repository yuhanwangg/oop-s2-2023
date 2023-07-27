/* Write a function that given an array of integers, and its length, determine
 * if the array is a 'fan' array, i.e. the entire array is a palindrome with the
 * numbers in ascending order from the start to the middle element. e.g.
 * {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1} and
 * {1,3,5,4,2} are not. The function must return false if the size parameter, n,
 * is less than 1.*/

bool is_fanarray(int array[], int n) {
  int end = 0, front = 0;

  // for even
  end = array[n - 1];
  front = array[0];

  if (n % 2 == 0) {
    for (int i = 1; i < n / 2; i++) {
      if (array[i] < front) {
        return false;  // testing for ascending order
      } else {
        front = array[i];
      }
    }

    for (int i = n - 2; i > n / 2; i--) {
      if (array[i] < end) {
        return false;
      } else {
        end = array[i];
      }
    }

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
    // for odd arrays
    for (int i = 1; i <= (n / 2); i++) {
      if (array[i] < front) {
        return false;  // testing for ascending order
      } else {
        front = array[i];
      }
    }

    for (int i = n - 2; i >= (n / 2); i--) {
      if (array[i] < end) {
        return false;
      } else {
        end = array[i];
      }
    }

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