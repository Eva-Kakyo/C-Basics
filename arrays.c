#include <stdio.h>

//program to print elements in an array.
int main () {
    int myNumbers[] = {24, 48, 72, 96};

    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    printf("%d\n", length);

    for(int i=0; i<length; i++) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}
