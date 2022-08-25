#include <stdio.h>

//program to return 1 if n is even and 0 if n is odd given integer n.
int isEven(int n);

int main() {
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    int x = isEven(n);
    if(x==1) {
        printf("Number is even.");
    } else {
        printf("Number is odd.");
    }

    return 0;

}

int isEven(int n) {
    if(n%2==0||n==0) {
        return 1;
    } else {
        return 0;
    }
}

