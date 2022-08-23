#include <stdio.h>

//program to find of int, float, double and char in bytes.
int main () {
  int a = 4;
  float b = 8.6;
  double c = 5.126;
  char d ='E';

  printf("%lu\n", sizeof(a));
  printf("%lu\n", sizeof(b));
  printf("%lu\n", sizeof(c));
  printf("%lu\n", sizeof(d));

  return 0;

}
