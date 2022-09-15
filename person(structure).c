#include <stdio.h>

//program to store information of a person using structures.
struct personInfo {
    char name[50];
    int age;
    char sex[10];
};

int main() {
    struct personInfo p1;
    strcpy(p1.name, "Marunga Angella");
    p1.age = 20;
    strcpy(p1.sex, "Female");

    printf("%s\n", p1.name);
    printf("%d\n", p1.age);
    printf("%s\n", p1.sex);

}
