#include <stdio.h>

//program to print elements from a multi-dimensional array.
int main () {
    int A[2][3] = {{1, 3, 0}, {2, 5, 9}};

    for(int i=0; i<2; i++) {
     for(int j=0; j<3; j++) {
        printf("%d ", A[i][j]);
     }
     printf("\n");
    }

    return 0;



}
