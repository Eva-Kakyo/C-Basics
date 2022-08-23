#include <stdio.h>

//program to generate a multiplication table.
int main () {
    int a;
    int b;

    printf("Type in a number.\n");
    scanf("%d", &b);

    for(a=1; a<=12; ++a) {
        printf("%d*%d=%d\n", a,b,a*b);
    }


    return 0;


}
