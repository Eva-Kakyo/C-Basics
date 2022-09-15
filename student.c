#include <stdio.h>

//program to store student information using structures.
struct studentInfo {
    char name[50];
    int studentNumber;
};

int main() {
    struct studentInfo s1 = {"Eva Kakyo", 23576};

    printf("%s\n", s1.name);
    printf("%d", s1.studentNumber);

    return 0;

}
