#include <stdio.h>

//program to make a simple calculator using switch.
int main () {
    int a;
    int b;
    char op;


    printf("Enter an operator (+, -, *, /)\n");
    scanf("%c", &op);
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);


    switch(op) {
    case '+':
        printf("%d+%d=%d", a, b, a+b);
        break;
    case '-':
        printf("%d-%d=%d", a, b, a-b);
        break;
    case '*':
        printf("%d*%d=%d", a, b, a*b);
        break;
    case '/':
        printf("%d/%d=%d", a, b, a/b);
        break;
    default:
        printf("Error! Operator is not correct.");

    }

    return 0;


}


