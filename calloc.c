#include <stdio.h>
#include <stdlib.h>

//program to find the product of numbers using calloc.
int main() {
    int n, i, *ptr;
    int product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", ptr+i);
        product *= *(ptr+i);
    }

    printf("Product= %d", product);

    free(ptr);

    return 0;

}
