#include <stdio.h>
#include <stdlib.h>

//program to write to a file.
int main() {
    int n;
    FILE *ptr;

    ptr = fopen("C:\\Users\\User\\OneDrive\\Documents\\test.txt", "r");

    if(ptr==NULL) {
        printf("Error in accessing file");
        exit(1);
    }

    fscanf(ptr, "%d", &n);

    printf("%d", n);

    fclose(ptr);

    return 0;

}
