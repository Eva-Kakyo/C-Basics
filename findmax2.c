
#include <stdio.h>

//program to find the largest element in an array.
int main () {
    int myNumbers[] = {24, 48, 96, 72, 120};

    int max = myNumbers[0];
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    for(int i=1; i<length; i++) {
     if(max<myNumbers[i]) {
        max = myNumbers[i];
     }
    }
    printf("Largest element in array is %d", max);

    return 0;
}
