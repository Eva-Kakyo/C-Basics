#include <stdio.h>

//program to display fibonacci sequence.
void seq(int n);
int x1 = 0;
int x2 = 1;
int nextTerm;
int main () {
  int n;


  printf("Enter the number of terms.\n");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", x1, x2);

  seq(n-2);
  printf("%d, %d", x1,x2);
  return 0;

}

void seq(int n) {


    if(n>0) {
        nextTerm = x1 + x2;
        x1 = x2;
        x2 = nextTerm;
        printf("%d, ", nextTerm);
        seq(n-1);
    }
}

