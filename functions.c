#include <stdio.h>

//program to use a function with different parameters.
void myFunction(char name[], int age) {
   printf("Name: %s\nAge: %d\n", name, age);

}

int main() {
    myFunction("Eva", 22);
    myFunction("Angel", 16);

    return 0;

}
