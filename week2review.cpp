#include <stdio.h>
int main() {
  int *ptr, i = 42, k = 477, l = 43, *ptr2, *ptr3;
  /*	address	of	i	is	assigned	to	ptr	*/
  ptr = &i;
  ptr2 = &k;
  ptr3 = &l;
  printf("Value	of	i	:	%d\n", *ptr);
  printf("Value	of	k	:	%d\n", *(ptr - 1));
  printf("Value	of	l	:	%d\n", *(ptr - 2));

  printf("%d\n", *ptr2);
  printf("%d\n", *ptr3);
  return 0;
}
