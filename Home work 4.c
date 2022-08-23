#include <stdio.h>

//program to display fibonacci sequence.
int main () {
  int i, n;

  int x1 = 0;
  int x2 = 1;
  int nextTerm = x1 + x2;

  printf("Enter the number of terms.\n");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", x1, x2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    x1 = x2;
    x2 = nextTerm;
    nextTerm = x1 + x2;
  }

  return 0;

}
