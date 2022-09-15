#include <stdio.h>

//program to find sum of elements of an array using arrays as pointers.
int main() {
    int x[6] = {2,4,6,8,32,64};
    int i;
    int sum = 0;

    for(i=0; i<6; i++) {
        sum += *(x+i);
    }

    printf("%d", sum);

    return 0;
}
