/*Write a function that given an array of integers and the length of the array,
will count the amount of times the numbers 2, 5 and 9 appear using a switch
statement. The function must print out your results on one line in the following
form: 2:<num_twos>;5:<num_fives>;9:<num_nines>;

If the array contained three 2s, one 5 and eleven 9s, the output would be:

        2:3;5:1;9:11;

Note the colons and semi-colons. Also remember to write out a newline at the end
of the output. The function must still produce a line of output even if the size
parameter, n, is less than 1.*/
#include <iostream>
void two_five_nine(int array[], int n) {
  // counting the number of 2, 5, 9 w/ switch
  int count2 = 0, count5 = 0, count9 = 0;
  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        count2++;
        break;
      case 5:
        count5++;
        break;
      case 9:
        count9++;
        break;
    }
  }

  // if statement of n<1 (produces 2:0; 5:0; 9:0, or n>1 with output
  if (n < 1) {
    std::cout << "2:0; 5:0; 9:0";
    std::cout << "\n";
  } else {
    std::cout << "2:" << count2 << ";5:" << count5 << ";9:" << count9 << ";"
              << std::endl;
  }
}