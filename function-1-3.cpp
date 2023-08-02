/*Given a matrix of integers, count the number of times each number 0-9 appears.
Print out your results on one line in the following form:*/

#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int zero_count = 0, one_count = 0, two_count = 0, three_count = 0,
      four_count = 0, five_count = 0, six_count = 0, seven_count = 0,
      eight_count = 0, nine_count = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          zero_count++;
          break;
        case 1:
          one_count++;
          break;
        case 2:
          two_count++;
          break;
        case 3:
          three_count++;
          break;
        case 4:
          four_count++;
          break;
        case 5:
          five_count++;
          break;
        case 6:
          six_count++;
          break;
        case 7:
          seven_count++;
          break;
        case 8:
          eight_count++;
          break;
        case 9:
          nine_count++;
          break;
      }
    }
  }
  cout << "0:" << zero_count << ";1:" << one_count << ";2:" << two_count
       << ";3:" << three_count << ";4:" << four_count << ";5:" << five_count
       << ";6:" << six_count << ";7:" << seven_count << ";8:" << eight_count
       << ";9:" << nine_count << ";" << endl;
}