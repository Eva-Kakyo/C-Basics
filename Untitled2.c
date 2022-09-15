#include <stdio.h>

//program to add two complex numbers by passing structures to a function.
typedef struct complex {
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *sum);

int main() {
    complex c1, c2, sum;

    printf("Enter values for first number.\n");
    printf("Enter real number: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary number: ");
    scanf("%f", &c1.imag);

    printf("Enter values for second number.\n");
    printf("Enter real number: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary number: ");
    scanf("%f", &c2.imag);


    addNumbers(c1, c2, &sum);
    printf("sum.real=%.2f\n", sum.real);
    printf("sum.imag=%.2f", sum.imag);

    return 0;

}

void addNumbers(complex c1, complex c2, complex *sum) {
    sum->real = c1.real + c2.real;
    sum->imag = c1.imag + c2.imag;
}
