#include <math.h>
#include<stdio.h>

//program using power function with user's input.
int main () {
    int x;
    int y;
    printf("Enter two numbers.\n");
    scanf("%d\n%d", &x, &y);

    pow(x,y);
    printf("%f", pow(x,y));

    return 0;

}
