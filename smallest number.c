#include <stdio.h>

//program to return the smaller of two integers and two floating-point numbers.
void smaller(int x, int y, float w, float z);

int main () {
    smaller(-1,9,2.5f,2.5f);

    return 0;

}

void smaller(int x, int y, float w, float z) {
    if(x<y&&w<z) {
        printf("%d,%.1f", x,w);
    } else if(y<x&&z<w) {
        printf("%d,%.1f", y,z);
    } else if(x<y&&z<w) {
        printf("%d,%.1f", x,z);
    } else {
        printf("%d,%.1f", y,w);
    }

}
