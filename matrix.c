#include <stdio.h>

//program to add two matrices using multi-dimensional arrays.
int main() {
    int A[2][2], B[2][2], sum[2][2];

    printf("Enter values of the first matrix:\n");
    for(int i=0; i<2; i++) {
     for(int j=0; j<2; j++) {
        printf("A%d%d:", i+1, j+1);
        scanf("%d", &A[i][j]);
     }
    }

    printf("Enter values of the second matrix:\n");
    for(int i=0; i<2; i++) {
     for(int j=0; j<2; j++) {
        printf("B%d%d:", i+1, j+1);
        scanf("%d", &B[i][j]);
     }
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices is:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;

}
