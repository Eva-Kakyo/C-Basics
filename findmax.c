#include <stdio.h>

//program to find the largest element in an array.
int main () {
    int myNumbers[] = {24, 48, 96, 72};

    if(myNumbers[0]>myNumbers[1]&&myNumbers[0]>myNumbers[2]&&myNumbers[0]>myNumbers[3]) {
        printf("%d", myNumbers[0]);
    } else if(myNumbers[1]>myNumbers[0]&&myNumbers[1]>myNumbers[2]&&myNumbers[1]>myNumbers[3]) {
        printf("%d", myNumbers[1]);
    } else if(myNumbers[2]>myNumbers[0]&&myNumbers[2]>myNumbers[1]&&myNumbers[2]>myNumbers[3]) {
        printf("%d", myNumbers[2]);
    } else {
        printf("%d", myNumbers[3]);
    }

    return 0;
}
