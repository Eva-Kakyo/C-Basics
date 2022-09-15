#include <stdio.h>
#include <stdlib.h>

//program to print numbers given by user using malloc.
int main() {
    int n, i, *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Error! memory not allocated");
        exit(0);
    }

    printf("%p\n", *ptr);
    printf("%p\n", ptr[0]);

    printf("Enter elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", ptr+i);
    }

    for(i=0; i<n; i++) {
        printf("%d\n", *(ptr+i));
    }

    free(ptr);

    return 0;

}
