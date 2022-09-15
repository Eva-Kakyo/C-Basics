#include <stdio.h>

//program using call by reference
void sum(int *x, int *y);

int main() {
    //printf("hi");
    int x = 10;
    int y = 7;
    sum(&x,&y);
    printf("%d\n", x);
    printf("%d", y);

    return 0;

}

void sum(int *x, int *y) {
    *x=20;
    *y=17;
}
