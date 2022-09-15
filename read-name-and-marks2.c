#include <stdio.h>
#include <stdlib.h>

//program to read name and marks of n number of students and store in file.
int main() {
    int n, marks;
    char name[30];

    printf("Enter in a number of students: ");
    scanf("%d", &n);

    FILE *ptr;

    ptr = fopen("C:\\Users\\User\\OneDrive\\Documents\\test.txt", "a");

    if(ptr==NULL) {
        printf("Error in accessing file");
        exit(1);
    }

    for(int i=0; i<n; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(ptr, "Name: %s\tMarks: %d\n", name, marks);
    }

    fclose(ptr);

    return 0;

}

