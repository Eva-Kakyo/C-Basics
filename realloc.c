#include <stdio.h>
#include <stdlib.h>

//program to find the sum of numbers using malloc and realloc.
int main() {
    int n1, n2, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i<n1; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    for(i = 0; i<n1; i++) {
        printf("%p\n", ptr+i);
    }

    printf("Enter additional number of elements: \n");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));


    printf("Enter elements: ");
    for(i = 0; i<n2; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    for(i = 0; i<(n1+n2); i++) {
        printf("%p\n", ptr+i);
    }

    printf("Sum = %d", sum);

    free(ptr);

    return 0;
}

