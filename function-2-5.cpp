/* Write a function that given an array of integers and its length, will
 * determine if the elements are in descending order or not, that is, each
 * element is less than or equal to the previous element. The function must
 * return true if in the size parameter is greater than 0 and the elements are
 * in descending order, otherwise it must return false.*/

bool is_descending(int array[], int n) {
  int previous = array[0];
  int des_count = 0;

  for (int i = 1; i < n; i++) {
    if (previous >= array[i]) {
      previous = array[i];
    } else {
      des_count++;
    }
  }

  if (des_count > 0 || n < 1) {
    return false;
  } else {
    return true;
  }
}