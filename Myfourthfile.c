#include <stdio.h>

//program to find quotient and modulus of two intergers
int main () {
  int a = 2;
  int b = 5;
  int quotient = b/a;
  int modulus = b%a;

  printf("The quotient of a and b: %d\n", quotient);
  printf("The modulus of a and b: %d\n", modulus);

  return 0;
}
