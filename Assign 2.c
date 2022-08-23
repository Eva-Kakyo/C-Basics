#include <stdio.h>

//program that gets memory value of a variable and prints it out.
int main (){
  int x = 43;

  printf("The memory value of x: %p", &x);

  return 0;
}
