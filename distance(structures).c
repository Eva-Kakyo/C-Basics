#include <stdio.h>

//program to add distance(in inch-feet system) using structures.
struct distance {
    int feet;
    float inch;
};

int main() {
    struct distance d1 = {21, 23.56};
    struct distance d2 = {96, 46.28};


    printf("%d ft\n", d1.feet+d2.feet);
    printf("%.2f inch", d1.inch+d2.inch);

    return 0;

}
