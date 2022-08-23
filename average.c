#include <stdio.h>

//program to calculate the average using arrays
int main () {
    int myNumbers[] = {24, 48, 96, 72};
    int sum = 0;
    int avg;
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    for(int i=0; i<4; i++) {
        sum += myNumbers[i];

    }
    avg = sum/4;
    printf("Average of array is %d", avg);

    return 0;




}
