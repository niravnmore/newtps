#include<stdio.h>
main()
{
    // static calculator

    int a = 55, b = 10;

    printf("A : %d", a);
    printf("\nB : %d", b);
    printf("\n Add : %d", a + b);
    printf("\n Sub : %d", a - b);
    printf("\n Mul : %d", a * b);
    printf("\n Div : %d", a / b);
    printf("\n Div : %.2f", (float)a / b); // typecasting
}
