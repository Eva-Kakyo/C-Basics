#include <stdio.h>

//program to access array elements using pointer.
int main () {
    int myNumbers[] = {24, 48, 72, 96};
    int* ptr = &myNumbers[3];

    printf("%d", *ptr);

    return 0;


}
