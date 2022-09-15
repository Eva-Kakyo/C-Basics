#include <stdio.h>
#include <stdlib.h>

//program to store data in structures dynamically.
typedef struct studentInfo {
    char name[50];
    int age;
}student;

int main() {
    student *ptr;
    int n;

    printf("Enter in number of records.");
    scanf("%d", &n);

    ptr = (student*)malloc(n * sizeof(student));


    for(int i=0; i<n; i++) {
        printf("Enter in name and age.");
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    for(int i=0; i<n; i++) {
        printf("Name: %s\n", (ptr+i)->name);
        printf("Age: %d\n", (ptr+i)->age);
    }

    free(ptr);

    return 0;

}
