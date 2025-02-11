#include<stdio.h>

main() {
    // Dynamic input calculation
    int a, b;

    printf("Enter value 1 : ");
    scanf("%d", & a);
    printf("Enter value 2 : ");
    scanf("%d", & b);

    printf("A : %d", a);
    printf("\nB : %d", b);
    printf("\n Add : %d", a + b);
    printf("\n Sub : %d", a - b);
    printf("\n Mul : %d", a * b);
    printf("\n Div : %d", a / b);
    printf("\n Div : %.2f", (float) a / b); //typecasting
}