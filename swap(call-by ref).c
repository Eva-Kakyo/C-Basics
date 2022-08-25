#include <stdio.h>
void cyclicSwap(int *x, int *y);

//program to Swap Numbers in Cyclic Order Using Call by Reference.
int main() {
    int x = 20;
    int y = 40;

    cyclicSwap(&x,&y);

    printf("x=%d\n", x);
    printf("y=%d", y);

    return 0;

}
void cyclicSwap(int *x, int *y)
{
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;
}
