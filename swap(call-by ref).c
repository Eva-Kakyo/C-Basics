#include <stdio.h>
void swap(int *x, int *y);

//program to Swap Numbers in Cyclic Order Using Call by Reference.
int main() {
    int x = 20;
    int y = 40;

    swap(&x,&y);

    printf("x=%d\n", x);
    printf("y=%d", y);

    return 0;

}

void swap(int *x, int *y)
{
    int w;

    w = *y;
    *y = *x;
    *x = w;
}
