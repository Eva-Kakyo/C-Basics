#include <stdio.h>

//program to returns the sum 1 + 2 +...+ n when given integer n.
int sum(int n);

int main() {
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    int y = sum(n);
    printf("The sum is %d", y);

    return 0;

}

int sum(int n) {
   if(n>0) {
    return n + sum(n-1);
   } else {
       return 0;
   }
}
