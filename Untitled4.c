#include <stdio.h>

//program to find whether a number is positive or negative
int main () {
  int y;

  printf("Type in a number.\n");
  scanf("%d", &y);

  if(y>0) {
    printf("Your number is positive.");
  } else {
    printf("Your number is negative");
  }

  return 0;

}
