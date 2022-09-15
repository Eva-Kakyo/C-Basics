#include <stdio.h>

//program to store student information using structures.
typedef struct studentInfo {
    char name[50];
    int id;
    char className[20];
}student;

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    student s1[n];

    for(int i=0; i<n; i++) {
        printf("Enter student ID: ");
        scanf("%d", &s1[i].id);
        getchar();
        printf("Enter name of student: ");
        fgets(s1[i].name, sizeof(s1[i].name), stdin);
        printf("Enter class of student: ");
        fgets(s1[i].className, sizeof(s1[i].className), stdin);
    }

    printf("Information on student:\n");
    for(int i=0; i<n; i++) {
        puts(s1[i].name);
        printf("Student ID: %d\n", s1[i].id);
        puts(s1[i].className);
    }

    return 0;

}



