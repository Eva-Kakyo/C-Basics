#include <stdio.h>

//program to return the biggest number when give three integers.
int max3(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Enter three numbers.\n");
    scanf("%d\n%d\n%d", &a,&b,&c);

    max3(a, b, c);

    return 0;

}

int max3(int a, int b, int c) {
    if(a>b&&a>c) {
        printf("The biggest number is %d", a);
    } else if(b>a&&b>c) {
       printf("The biggest number is %d", b);
    } else {
        printf("The biggest number is %d", c);
    }
}
