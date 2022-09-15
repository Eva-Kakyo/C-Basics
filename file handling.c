#include <stdio.h>
#include <stdlib.h>

//program to write to a file.
int main() {
    int n;
    FILE *ptr;

    ptr = fopen("C:\\Users\\User\\OneDrive\\Documents\\test.txt", "w");

    if(ptr==NULL) {
        printf("Error in accessing file");
        exit(1);
    }

    printf("Enter in a number: ");
    scanf("%d", &n);

    fprintf(ptr, "%d", n);

    fclose(ptr);

    return 0;

}




