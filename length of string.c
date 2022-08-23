#include <stdio.h>

//program to find length of a string.
int main () {
    char time[] = "The time is five pm.";

    int length = sizeof(time)/sizeof(time[0]);
    printf("The length of the string is %d", length);

    return 0;

}
