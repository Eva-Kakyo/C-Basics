#include <stdio.h>
#include <stdlib.h>

//program to find the largest number using malloc.
int main() {
    int n, i, *ptr, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i<n; i++) {
        scanf("%d", ptr + i);
    }

    max = *ptr;
    for(i = 1; i<n; i++) {
       if(max<*(ptr+i)) {
        max = *(ptr+i);
       }
    }

    printf("Max = %d", max);

    free(ptr);

    return 0;
}

