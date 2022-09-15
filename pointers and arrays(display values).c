#include <stdio.h>

//program to display values of an array using pointers
int main() {
    int y[4] = {16, 28, 59, 37};
    int* ptr = &y[2];

    printf("y[0]=%d\n", *(ptr-2));
    printf("y[1]=%d\n", *(ptr-1));
    printf("y[2]=%d\n", *ptr);
    printf("y[3]=%d\n", *(ptr+1));

    return 0;
}
