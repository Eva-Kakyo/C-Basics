#include <stdio.h>

//program to calculate sum of natural numbers.
int main () {
    int x;
    int y;
    int sum = 0;

    printf("Type in a positive number.\n");
    scanf("%d", &y);

    for (x = 1; x <= y; x++) {
        sum += x;
    }

    printf("Sum is %d", sum);

    return 0;

}
