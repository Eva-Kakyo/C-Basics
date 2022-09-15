#include <stdio.h>
#include <math.h>

//program to find whether integer n is a perfect square.
int isPerfectSquare(int n);

int main() {
    int n;
    int m=1;
    int p=0;
    printf("Enter a number.\n");
    scanf("%d", n);

    int q= sqrt(n);
    if(sqrt(n)==q*q) {
        printf("%d", m);
    } else {
        printf("%d", p);
    }

    return 0;
}


