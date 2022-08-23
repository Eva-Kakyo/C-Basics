#include <stdio.h>

//program to reverse the elements in an arrays
int main () {
    int myNumbers[] = {24, 48, 96, 72, 44, 16};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    for(int i=length-1; i>=0; i--) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}
