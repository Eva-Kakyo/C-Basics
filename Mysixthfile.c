#include <stdio.h>

//program to swap two numbers.
int main () {
  int x = 8;
  int y = 16;
  int z = x;
  x = y;
  y = z;

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);

  return 0;

}
