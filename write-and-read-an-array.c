#include <stdio.h>
#include <stdlib.h>

//program to write and read an array from the file and display on the screen.
struct studentInfo {
    char name[40];
    int age;
};

int main() {
    struct studentInfo s1[6], s2[6];
    FILE *ptr;

    ptr = fopen("C:\\Users\\User\\OneDrive\\Documents\\test1.bin", "wb");

    if(ptr==NULL) {
        printf("Error in accessing file");
        exit(1);
    }

    for(int i=0; i<6; i++) {
        printf("Enter name: ");
        scanf("%s", &s1[i].name);
        printf("Enter age: ");
        scanf("%d", &s1[i].age);
    }

    fwrite(s1, sizeof(s1), 1, ptr);
    fclose(ptr);

    ptr = fopen("C:\\Users\\User\\OneDrive\\Documents\\test1.bin", "rb");
    fread(s2, sizeof(s2), 1, ptr);
    for(int i=0; i<6; i++) {
        printf("Name: %s\tAge: %d\n", s2[i].name, s2[i].age);
    }

    fclose(ptr);

    return 0;

}
