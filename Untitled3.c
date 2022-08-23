#include <stdio.h>

//Program to find whether number is even or odd
int main (){
  int x;

  printf("Type in a number.\n");
  scanf("%d", &x);

  if(x%2==0) {
   printf("Your number is even.");
  } else {
   printf("Your number is odd.");
  }

  return 0;

}
